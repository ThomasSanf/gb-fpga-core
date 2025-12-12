package ppu

import chisel3._
import chisel3.util._

class PixelFIFO extends Module {
  val io = IO(new Bundle {
    val pushEnable = Input(Bool())
    val pushPixels = Input(Vec(8, UInt(2.W)))
    val popEnable  = Input(Bool())
    val outPixel   = Output(UInt(2.W))
    val hasData    = Output(Bool())
    val size       = Output(UInt(5.W))
    val clear      = Input(Bool())
  })

  val fifo = Reg(Vec(16, UInt(2.W)))
  val head = RegInit(0.U(4.W))
  val tail = RegInit(0.U(4.W))
  val count = RegInit(0.U(5.W))

  io.outPixel := fifo(head)
  io.hasData  := count > 0.U
  io.size     := count

  when(io.clear) {
    head := 0.U
    tail := 0.U
    count := 0.U
  }.elsewhen(io.pushEnable && io.popEnable) {
    for (i <- 0 until 8) {
      fifo((tail + i.U) & 0xF.U) := io.pushPixels(i)
    }
    fifo(head) := DontCare
    tail := (tail + 8.U) & 0xF.U
    head := (head + 1.U) & 0xF.U
    count := count + 7.U
  }.elsewhen(io.pushEnable) {
    for (i <- 0 until 8) {
      fifo((tail + i.U) & 0xF.U) := io.pushPixels(i)
    }
    tail := (tail + 8.U) & 0xF.U
    count := count + 8.U
  }.elsewhen(io.popEnable && io.hasData) {
    fifo(head) := DontCare
    head := (head + 1.U) & 0xF.U
    count := count - 1.U
  }
}

class PPUIO extends Bundle {
  val vramAddr  = Output(UInt(13.W))
  val vramRead  = Output(Bool())
  val vramData  = Input(UInt(8.W))

  val oamAddr   = Output(UInt(8.W))
  val oamRead   = Output(Bool())
  val oamData   = Input(UInt(8.W))

  val lcdc = Input(UInt(8.W))
  val stat = Input(UInt(8.W))
  val scy  = Input(UInt(8.W))
  val scx  = Input(UInt(8.W))
  val ly   = Output(UInt(8.W))
  val lyc  = Input(UInt(8.W))
  val bgp  = Input(UInt(8.W))
  val obp0 = Input(UInt(8.W))
  val obp1 = Input(UInt(8.W))
  val wy   = Input(UInt(8.W))
  val wx   = Input(UInt(8.W))

  val vblankIRQ  = Output(Bool())
  val lcdStatIRQ = Output(Bool())

  val pixelValid = Output(Bool())
  val pixelX     = Output(UInt(8.W))
  val pixelY     = Output(UInt(8.W))
  val pixelColor = Output(UInt(2.W))
}

class PPU extends Module {
  val io = IO(new PPUIO)

  object PPUMode {
    val MODE_HBLANK    = 0.U(2.W)
    val MODE_VBLANK    = 1.U(2.W)
    val MODE_OAM_SCAN  = 2.U(2.W)
    val MODE_DRAWING   = 3.U(2.W)
  }
  import PPUMode._

  // ============================================================
  // SIMPLIFIED TIMING - Fixed scanline counter
  // ============================================================
  val dotCounter = RegInit(0.U(9.W))
  val lyReg = RegInit(0.U(8.W))

  val lcdEnable = io.lcdc(7)

  // Fixed timing constants
  val DOTS_PER_SCANLINE = 456.U
  val VBLANK_START = 144.U
  val TOTAL_LINES = 154.U

  val vblankIRQ = RegInit(false.B)
  val statIRQ = RegInit(false.B)

  // FIX: LY always increments regardless of LCD enable state
  // This is critical for boot ROM compatibility
  dotCounter := dotCounter + 1.U

  // At end of scanline, increment LY
  when(dotCounter === (DOTS_PER_SCANLINE - 1.U)) {
    dotCounter := 0.U

    when(lyReg === 153.U) {
      lyReg := 0.U
      vblankIRQ := false.B
    }.otherwise {
      lyReg := lyReg + 1.U

      // Set VBlank IRQ at start of line 144
      when(lyReg === 143.U) {
        vblankIRQ := true.B
      }.otherwise {
        vblankIRQ := false.B
      }
    }
  }

  // ============================================================
  // RENDERING - Simplified for now
  // ============================================================
  val windowTileMap  = io.lcdc(6)
  val windowEnable   = io.lcdc(5)
  val bgWindowTiles  = io.lcdc(4)
  val bgTileMap      = io.lcdc(3)
  val objSize        = io.lcdc(2)
  val objEnable      = io.lcdc(1)
  val bgWindowEnable = io.lcdc(0)

  val pixelFIFO = Module(new PixelFIFO)
  pixelFIFO.io.pushEnable := false.B
  pixelFIFO.io.popEnable  := false.B
  pixelFIFO.io.pushPixels := VecInit(Seq.fill(8)(0.U(2.W)))
  pixelFIFO.io.clear := false.B

  object FetcherState {
    val FETCH_TILE_NUM       = 0.U(3.W)
    val FETCH_TILE_DATA_LOW  = 1.U(3.W)
    val WAIT_TILE_DATA_LOW   = 2.U(3.W)
    val FETCH_TILE_DATA_HIGH = 3.U(3.W)
    val WAIT_TILE_DATA_HIGH  = 4.U(3.W)
    val FETCH_PUSH           = 5.U(3.W)
  }
  import FetcherState._

  val fetcherState = RegInit(FETCH_TILE_NUM)
  val fetcherX = RegInit(0.U(8.W))
  val fetcherDotCount = RegInit(0.U(2.W))
  val tileNum = RegInit(0.U(8.W))
  val tileDataLow = RegInit(0.U(8.W))
  val tileDataHigh = RegInit(0.U(8.W))
  val xPos = RegInit(0.U(8.W))
  val discardPixels = RegInit(0.U(4.W))

  val pixelValid = WireDefault(false.B)
  val pixelColor = WireDefault(0.U(2.W))

  io.vramAddr := 0.U
  io.vramRead := false.B
  io.oamAddr := 0.U
  io.oamRead := false.B

  // Determine mode based on timing (purely positional)
  val mode = Wire(UInt(2.W))
  when(lyReg >= VBLANK_START) {
    mode := MODE_VBLANK
  }.elsewhen(dotCounter < 80.U) {
    mode := MODE_OAM_SCAN
  }.elsewhen(dotCounter < 252.U) {
    mode := MODE_DRAWING
  }.otherwise {
    mode := MODE_HBLANK
  }

  // Reset at start of each scanline (only when LCD enabled)
  when(dotCounter === 0.U && lyReg < VBLANK_START && lcdEnable) {
    xPos := 0.U
    fetcherX := 0.U
    fetcherState := FETCH_TILE_NUM
    fetcherDotCount := 0.U
    discardPixels := io.scx & 0x7.U
    pixelFIFO.io.clear := true.B
  }

  // Only do rendering during drawing mode and visible scanlines when LCD enabled
  when(mode === MODE_DRAWING && lyReg < VBLANK_START && lcdEnable) {

    // Fetcher runs every 2 dots
    fetcherDotCount := fetcherDotCount + 1.U
    when(fetcherDotCount === 1.U) {
      fetcherDotCount := 0.U

      switch(fetcherState) {

        is(FETCH_TILE_NUM) {
          val mapBase    = Mux(bgTileMap, 0x1C00.U, 0x1800.U)
          val scrolledY  = (lyReg + io.scy) & 0xFF.U
          val scrolledX  = (fetcherX + io.scx) & 0xFF.U
          val tileY      = (scrolledY >> 3).asUInt
          val tileX      = (scrolledX >> 3).asUInt
          val mapAddr    = mapBase + (tileY * 32.U) + tileX

          io.vramAddr := mapAddr(12, 0)
          io.vramRead := true.B
          fetcherState := WAIT_TILE_DATA_LOW
        }

        is(WAIT_TILE_DATA_LOW) {
          tileNum := io.vramData
          fetcherState := FETCH_TILE_DATA_LOW
        }

        is(FETCH_TILE_DATA_LOW) {
          val tileDataBase = Mux(bgWindowTiles, 0x0000.U, 0x0800.U)
          val tileIndex = Mux(bgWindowTiles,
            tileNum,
            (tileNum.asSInt + 128.S).asUInt)
          val scrolledY = (lyReg + io.scy) & 0xFF.U
          val pixelRow = scrolledY & 0x7.U
          val tileAddr = tileDataBase + (tileIndex * 16.U) + (pixelRow * 2.U)

          io.vramAddr := tileAddr(12, 0)
          io.vramRead := true.B
          fetcherState := WAIT_TILE_DATA_HIGH
        }

        is(WAIT_TILE_DATA_HIGH) {
          tileDataLow := io.vramData
          fetcherState := FETCH_TILE_DATA_HIGH
        }

        is(FETCH_TILE_DATA_HIGH) {
          val tileDataBase = Mux(bgWindowTiles, 0x0000.U, 0x0800.U)
          val tileIndex = Mux(bgWindowTiles,
            tileNum,
            (tileNum.asSInt + 128.S).asUInt)
          val scrolledY = (lyReg + io.scy) & 0xFF.U
          val pixelRow = scrolledY & 0x7.U
          val tileAddr = tileDataBase + (tileIndex * 16.U) + (pixelRow * 2.U) + 1.U

          io.vramAddr := tileAddr(12, 0)
          io.vramRead := true.B
          tileDataHigh := io.vramData
          fetcherState := FETCH_PUSH
        }

        is(FETCH_PUSH) {
          when(pixelFIFO.io.size <= 8.U) {
            val px = Wire(Vec(8, UInt(2.W)))
            for (i <- 0 until 8) {
              val lo = (tileDataLow  >> (7 - i)) & 1.U
              val hi = (tileDataHigh >> (7 - i)) & 1.U
              px(i) := Cat(hi, lo)
            }

            pixelFIFO.io.pushEnable := true.B
            pixelFIFO.io.pushPixels := px

            fetcherX := fetcherX + 8.U
            fetcherState := FETCH_TILE_NUM
          }
        }
      }
    }

    // Pixel output every cycle
    when(pixelFIFO.io.hasData && xPos < 160.U) {
      when(discardPixels > 0.U) {
        pixelFIFO.io.popEnable := true.B
        discardPixels := discardPixels - 1.U
      }.otherwise {
        pixelFIFO.io.popEnable := true.B
        val px = pixelFIFO.io.outPixel
        val palShift = px << 1
        val palPx = (io.bgp >> palShift) & 3.U

        pixelValid := true.B
        pixelColor := palPx
        xPos := xPos + 1.U
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