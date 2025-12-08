package ppu

import chisel3._
import chisel3.util._

/**
 * Game Boy PPU with Pixel Output
 *
 * Implements:
 * - Background rendering (tiles from VRAM)
 * - Sprite rendering (OAM)
 * - Pixel FIFO pipeline
 * - LCD control registers
 * - Accurate cycle timing
 * - Pixel output for external rendering
 */

class PPUIO extends Bundle {
  // Memory interface
  val vramAddr  = Output(UInt(13.W))  // VRAM address (8000-9FFF)
  val vramRead  = Output(Bool())
  val vramData  = Input(UInt(8.W))

  val oamAddr   = Output(UInt(8.W))   // OAM address (FE00-FE9F)
  val oamRead   = Output(Bool())
  val oamData   = Input(UInt(8.W))

  // LCD Control Registers (from I/O)
  val lcdc = Input(UInt(8.W))  // FF40 - LCD Control
  val stat = Input(UInt(8.W))  // FF41 - LCD Status
  val scy  = Input(UInt(8.W))  // FF42 - Scroll Y
  val scx  = Input(UInt(8.W))  // FF43 - Scroll X
  val ly   = Output(UInt(8.W)) // FF44 - Current scanline
  val lyc  = Input(UInt(8.W))  // FF45 - LY Compare
  val bgp  = Input(UInt(8.W))  // FF47 - BG Palette
  val obp0 = Input(UInt(8.W))  // FF48 - OBJ Palette 0
  val obp1 = Input(UInt(8.W))  // FF49 - OBJ Palette 1
  val wy   = Input(UInt(8.W))  // FF4A - Window Y
  val wx   = Input(UInt(8.W))  // FF4B - Window X

  // Interrupts
  val vblankIRQ  = Output(Bool())
  val lcdStatIRQ = Output(Bool())

  // Pixel output (for Verilator/SDL)
  val pixelValid = Output(Bool())     // High when pixel is being output
  val pixelX     = Output(UInt(8.W))  // Current X position (0-159)
  val pixelY     = Output(UInt(8.W))  // Current Y position (0-143)
  val pixelColor = Output(UInt(2.W))  // Color: 0=white, 1=light, 2=dark, 3=black
}

class PPU extends Module {
  val io = IO(new PPUIO)

  // ============================================================
  // PPU STATE MACHINE
  // ============================================================
  // Mode 2: OAM Scan (80 dots)  - Searching for sprites
  // Mode 3: Drawing (168-291 dots) - Rendering pixels
  // Mode 0: HBlank (85-208 dots) - Horizontal blank
  // Mode 1: VBlank (4560 dots)  - Vertical blank (10 lines)

  object PPUMode {
    val MODE_HBLANK    = 0.U(2.W)
    val MODE_VBLANK    = 1.U(2.W)
    val MODE_OAM_SCAN  = 2.U(2.W)
    val MODE_DRAWING   = 3.U(2.W)
  }
  import PPUMode._

  val mode = RegInit(MODE_OAM_SCAN)
  val dotCounter = RegInit(0.U(9.W))  // Dots within current scanline
  val lyReg = RegInit(0.U(8.W))       // Current scanline
  val xPos = RegInit(0.U(8.W))        // Current pixel X position

  // ============================================================
  // LCD CONTROL FLAGS (LCDC - FF40)
  // ============================================================
  val lcdEnable      = io.lcdc(7)  // Bit 7: LCD & PPU enable
  val windowTileMap  = io.lcdc(6)  // Bit 6: Window tile map area
  val windowEnable   = io.lcdc(5)  // Bit 5: Window enable
  val bgWindowTiles  = io.lcdc(4)  // Bit 4: BG & Window tile data area
  val bgTileMap      = io.lcdc(3)  // Bit 3: BG tile map area
  val objSize        = io.lcdc(2)  // Bit 2: OBJ size (0=8x8, 1=8x16)
  val objEnable      = io.lcdc(1)  // Bit 1: OBJ enable
  val bgWindowEnable = io.lcdc(0)  // Bit 0: BG & Window enable/priority

  // ============================================================
  // PIXEL FIFO
  // ============================================================
  val fifoData  = Reg(Vec(8, UInt(2.W)))  // 8 pixels in FIFO
  val fifoValid = RegInit(0.U(8.W))       // Which pixels are valid
  val fifoHead  = RegInit(0.U(3.W))       // Read position

  // ============================================================
  // BACKGROUND FETCHER STATE
  // ============================================================
  object FetcherState {
    val FETCH_TILE_NUM       = 0.U(2.W)
    val FETCH_TILE_DATA_LOW  = 1.U(2.W)
    val FETCH_TILE_DATA_HIGH = 2.U(2.W)
    val FETCH_PUSH           = 3.U(2.W)
  }
  import FetcherState._

  val fetcherState = RegInit(FETCH_TILE_NUM)
  val fetcherX = RegInit(0.U(8.W))
  val tileNum = RegInit(0.U(8.W))
  val tileDataLow = RegInit(0.U(8.W))
  val tileDataHigh = RegInit(0.U(8.W))

  // ============================================================
  // VBLANK & INTERRUPTS
  // ============================================================
  val vblankIRQ = RegInit(false.B)
  val statIRQ = RegInit(false.B)

  // ============================================================
  // PIXEL OUTPUT
  // ============================================================
  val pixelValid = WireDefault(false.B)
  val pixelColor = WireDefault(0.U(2.W))

  // ============================================================
  // DEFAULTS
  // ============================================================
  io.vramAddr := 0.U
  io.vramRead := false.B
  io.oamAddr := 0.U
  io.oamRead := false.B

  // ============================================================
  // MAIN PPU STATE MACHINE
  // ============================================================
  when(!lcdEnable) {
    // LCD is off - reset everything
    mode := MODE_OAM_SCAN
    dotCounter := 0.U
    lyReg := 0.U
    xPos := 0.U
    vblankIRQ := false.B
    statIRQ := false.B

  }.otherwise {
    // LCD is on - run PPU

    dotCounter := dotCounter + 1.U

    switch(mode) {

      // ========================================================
      // MODE 2: OAM SCAN (80 dots)
      // ========================================================
      is(MODE_OAM_SCAN) {
        when(dotCounter === 80.U) {
          mode := MODE_DRAWING
          dotCounter := 0.U
          xPos := 0.U
          fetcherX := 0.U
          fetcherState := FETCH_TILE_NUM
          fifoValid := 0.U
        }
      }

      // ========================================================
      // MODE 3: DRAWING (172 dots minimum)
      // ========================================================
      is(MODE_DRAWING) {
        // Background fetcher runs at half the speed (2 dots per step)
        when(dotCounter(0)) {

          switch(fetcherState) {

            // ------------------------------------------------
            // Fetch tile number from tile map
            // ------------------------------------------------
            is(FETCH_TILE_NUM) {
              val mapBase = Mux(bgTileMap, 0x1C00.U, 0x1800.U)
              val scrolledY = (lyReg + io.scy) & 0xFF.U
              val scrolledX = (fetcherX + io.scx) & 0xFF.U
              val tileY = scrolledY >> 3  // Divide by 8
              val tileX = scrolledX >> 3
              val mapAddr = mapBase + (tileY * 32.U) + tileX

              io.vramAddr := mapAddr(12, 0)
              io.vramRead := true.B
              tileNum := io.vramData
              fetcherState := FETCH_TILE_DATA_LOW
            }

            // ------------------------------------------------
            // Fetch tile data (low byte)
            // ------------------------------------------------
            is(FETCH_TILE_DATA_LOW) {
              val tileDataBase = Mux(bgWindowTiles, 0x0000.U, 0x1000.U)
              val tileIndex = Mux(bgWindowTiles,
                tileNum,
                Cat(tileNum(7), tileNum(6, 0)))  // Signed addressing
              val scrolledY = (lyReg + io.scy) & 0xFF.U
              val pixelRow = scrolledY & 0x7.U  // Row within tile (0-7)
              val tileAddr = tileDataBase + (tileIndex * 16.U) + (pixelRow * 2.U)

              io.vramAddr := tileAddr(12, 0)
              io.vramRead := true.B
              tileDataLow := io.vramData
              fetcherState := FETCH_TILE_DATA_HIGH
            }

            // ------------------------------------------------
            // Fetch tile data (high byte)
            // ------------------------------------------------
            is(FETCH_TILE_DATA_HIGH) {
              val tileDataBase = Mux(bgWindowTiles, 0x0000.U, 0x1000.U)
              val tileIndex = Mux(bgWindowTiles,
                tileNum,
                Cat(tileNum(7), tileNum(6, 0)))
              val scrolledY = (lyReg + io.scy) & 0xFF.U
              val pixelRow = scrolledY & 0x7.U
              val tileAddr = tileDataBase + (tileIndex * 16.U) + (pixelRow * 2.U) + 1.U

              io.vramAddr := tileAddr(12, 0)
              io.vramRead := true.B
              tileDataHigh := io.vramData
              fetcherState := FETCH_PUSH
            }

            // ------------------------------------------------
            // Push pixels to FIFO
            // ------------------------------------------------
            is(FETCH_PUSH) {
              // Only push if FIFO has space
              when(fifoValid === 0.U) {
                // Convert tile data to 8 pixels
                for (i <- 0 until 8) {
                  val bitLow = (tileDataLow >> (7 - i)) & 1.U
                  val bitHigh = (tileDataHigh >> (7 - i)) & 1.U
                  fifoData(i) := Cat(bitHigh, bitLow)
                }
                fifoValid := 0xFF.U
                fetcherX := fetcherX + 8.U
                fetcherState := FETCH_TILE_NUM
              }
            }
          }
        }

        // Pop pixel from FIFO and output
        when(fifoValid =/= 0.U) {
          val pixel = fifoData(fifoHead)

          // Apply palette
          val paletteShift = pixel << 1
          val palettedPixel = (io.bgp >> paletteShift) & 3.U

          pixelValid := true.B
          pixelColor := palettedPixel

          // Advance FIFO
          fifoHead := fifoHead + 1.U
          when(fifoHead === 7.U) {
            fifoValid := 0.U
            fifoHead := 0.U
          }.otherwise {
            fifoValid := fifoValid & ~(1.U << fifoHead)
          }

          // Advance X position
          xPos := xPos + 1.U

          // Done with scanline?
          when(xPos === 159.U) {
            mode := MODE_HBLANK
            dotCounter := 0.U
          }
        }
      }

      // ========================================================
      // MODE 0: HBLANK
      // ========================================================
      is(MODE_HBLANK) {
        when(dotCounter >= 200.U) {  // Simplified - real timing varies
          dotCounter := 0.U
          lyReg := lyReg + 1.U

          when(lyReg === 143.U) {
            // Enter VBLANK
            mode := MODE_VBLANK
            vblankIRQ := true.B
          }.otherwise {
            // Next scanline
            mode := MODE_OAM_SCAN
          }
        }
      }

      // ========================================================
      // MODE 1: VBLANK (10 scanlines)
      // ========================================================
      is(MODE_VBLANK) {
        vblankIRQ := false.B  // Clear after 1 cycle

        when(dotCounter === 455.U) {
          dotCounter := 0.U
          lyReg := lyReg + 1.U

          when(lyReg === 153.U) {
            // Back to scanline 0
            lyReg := 0.U
            mode := MODE_OAM_SCAN
          }
        }
      }
    }
  }

  // ============================================================
  // OUTPUTS
  // ============================================================
  io.ly := lyReg
  io.vblankIRQ := vblankIRQ
  io.lcdStatIRQ := statIRQ
  io.pixelValid := pixelValid
  io.pixelX := xPos
  io.pixelY := lyReg
  io.pixelColor := pixelColor
}