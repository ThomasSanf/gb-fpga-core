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
  })

  val fifo = Reg(Vec(16, UInt(2.W)))
  val head = RegInit(0.U(4.W))
  val tail = RegInit(0.U(4.W))
  val count = RegInit(0.U(5.W))

  io.outPixel := fifo(head)
  io.hasData  := count =/= 0.U
  io.size     := count

  when(io.pushEnable && count <= 8.U) {
    for (i <- 0 until 8) {
      fifo((tail + i.U)(3,0)) := io.pushPixels(i)
    }
    tail := tail + 8.U
    count := count + 8.U
  }

  when(io.popEnable && io.hasData) {
    head := head + 1.U
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

  val mode = RegInit(MODE_OAM_SCAN)
  val dotCounter = RegInit(0.U(9.W))
  val lyReg = RegInit(0.U(8.W))
  val xPos = RegInit(0.U(8.W))

  val lcdEnable      = io.lcdc(7)
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

  val vblankIRQ = RegInit(false.B)
  val statIRQ = RegInit(false.B)

  val pixelValid = WireDefault(false.B)
  val pixelColor = WireDefault(0.U(2.W))

  io.vramAddr := 0.U
  io.vramRead := false.B
  io.oamAddr := 0.U
  io.oamRead := false.B

  when(!lcdEnable) {
    mode := MODE_OAM_SCAN
    dotCounter := 0.U
    lyReg := 0.U
    xPos := 0.U
    vblankIRQ := false.B
    statIRQ := false.B

  }.otherwise {

    dotCounter := dotCounter + 1.U

    switch(mode) {

      is(MODE_OAM_SCAN) {
        when(dotCounter === 80.U) {
          mode := MODE_DRAWING
          dotCounter := 0.U
          xPos := 0.U
          fetcherX := 0.U
          fetcherState := FETCH_TILE_NUM
        }
      }

      is(MODE_DRAWING) {
        when(dotCounter(0)) {

          switch(fetcherState) {

            is(FETCH_TILE_NUM) {
              val mapBase    = Mux(bgTileMap, 0x1C00.U, 0x1800.U)
              val scrolledY  = (lyReg + io.scy) & 0xFF.U
              val scrolledX  = (fetcherX + io.scx) & 0xFF.U
              val tileY      = (scrolledY >> 3).asUInt       // FIX
              val tileX      = (scrolledX >> 3).asUInt       // FIX
              val mapAddr    = mapBase + (tileY * 32.U) + tileX

              io.vramAddr := mapAddr(12, 0)
              io.vramRead := true.B
              tileNum := io.vramData
              fetcherState := FETCH_TILE_DATA_LOW
            }

            is(FETCH_TILE_DATA_LOW) {
              val tileDataBase = Mux(bgWindowTiles, 0x0000.U, 0x1000.U)
              val tileIndex = Mux(bgWindowTiles,
                tileNum,
                Cat(tileNum(7), tileNum(6, 0)))
              val scrolledY = (lyReg + io.scy) & 0xFF.U
              val pixelRow = scrolledY & 0x7.U
              val tileAddr = tileDataBase + (tileIndex * 16.U) + (pixelRow * 2.U)

              io.vramAddr := tileAddr(12, 0)
              io.vramRead := true.B
              tileDataLow := io.vramData
              fetcherState := FETCH_TILE_DATA_HIGH
            }

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

        when(pixelFIFO.io.hasData) {
          pixelFIFO.io.popEnable := true.B
          val px = pixelFIFO.io.outPixel
          val palShift = px << 1
          val palPx = (io.bgp >> palShift) & 3.U

          pixelValid := true.B
          pixelColor := palPx
          xPos := xPos + 1.U

          when(xPos === 159.U) {
            mode := MODE_HBLANK
            dotCounter := 0.U
          }
        }
      }

      is(MODE_HBLANK) {
        when(dotCounter >= 200.U) {
          dotCounter := 0.U
          lyReg := lyReg + 1.U

          when(lyReg === 143.U) {
            mode := MODE_VBLANK
            vblankIRQ := true.B
          }.otherwise {
            mode := MODE_OAM_SCAN
          }
        }
      }

      is(MODE_VBLANK) {
        vblankIRQ := false.B

        when(dotCounter === 455.U) {
          dotCounter := 0.U
          lyReg := lyReg + 1.U

          when(lyReg === 153.U) {
            lyReg := 0.U
            mode := MODE_OAM_SCAN
          }
        }
      }
    }
  }

  io.ly := lyReg
  io.vblankIRQ := vblankIRQ
  io.lcdStatIRQ := statIRQ
  io.pixelValid := pixelValid
  io.pixelX := xPos
  io.pixelY := lyReg
  io.pixelColor := pixelColor
}
