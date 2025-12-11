package memory

import chisel3._
import chisel3.util._

/**
 * I/O Register Manager
 * Handles all Game Boy I/O registers (FF00-FF7F)
 *
 * Implements stubbed/minimal versions of all registers needed to run ROMs
 */
class IORegistersIO extends Bundle {
  val addr      = Input(UInt(8.W))   // Address (0x00-0x7F for FF00-FF7F)
  val write     = Input(Bool())
  val writeData = Input(UInt(8.W))
  val readData  = Output(UInt(8.W))

  // Interrupt flags
  val ifReg     = Output(UInt(8.W))  // IF register (also at FF0F)

  // PPU signals
  val vblankIRQ = Input(Bool())      // VBLANK interrupt request
  val lcdStatIRQ = Input(Bool())     // LCD STAT interrupt request

  // Timer signals
  val timerIRQ  = Input(Bool())      // Timer interrupt request

  // Serial output (for test ROMs)
  val serialOut = Output(UInt(8.W))  // Character output
  val serialValid = Output(Bool())   // Valid character ready

  // PPU control registers (for full PPU)
  val ppuLcdc = Output(UInt(8.W))  // FF40 - LCD Control
  val ppuStat = Output(UInt(8.W))  // FF41 - LCD Status
  val ppuScy  = Output(UInt(8.W))  // FF42 - Scroll Y
  val ppuScx  = Output(UInt(8.W))  // FF43 - Scroll X
  val ppuLyc  = Output(UInt(8.W))  // FF45 - LY Compare
  val ppuBgp  = Output(UInt(8.W))  // FF47 - BG Palette
  val ppuObp0 = Output(UInt(8.W))  // FF48 - OBJ Palette 0
  val ppuObp1 = Output(UInt(8.W))  // FF49 - OBJ Palette 1
  val ppuWy   = Output(UInt(8.W))  // FF4A - Window Y
  val ppuWx   = Output(UInt(8.W))  // FF4B - Window X
}

class IORegisters extends Module {
  val io = IO(new IORegistersIO)

  // ============================================================
  // JOYPAD (FF00) - P1/JOYP
  // ============================================================
  val regP1 = RegInit(0xFF.U(8.W))  // All buttons released

  // ============================================================
  // SERIAL (FF01-FF02) - SB, SC
  // ============================================================
  val regSB = RegInit(0x00.U(8.W))  // Serial transfer data
  val regSC = RegInit(0x7E.U(8.W))  // Serial transfer control

  // Serial output detection for test ROMs
  val serialOutReg = RegInit(0.U(8.W))
  val serialValidReg = RegInit(false.B)
  serialValidReg := false.B  // Clear after one cycle

  // ============================================================
  // TIMER (FF04-FF07) - DIV, TIMA, TMA, TAC
  // ============================================================
  val regDIV  = RegInit(0xAB.U(8.W)) // Divider (increments at 16384 Hz)
  val regTIMA = RegInit(0x00.U(8.W)) // Timer counter
  val regTMA  = RegInit(0x00.U(8.W)) // Timer modulo
  val regTAC  = RegInit(0xF8.U(8.W)) // Timer control

  val divCounter = RegInit(0.U(16.W))

  // Increment DIV register every 256 cycles (approximation)
  divCounter := divCounter + 1.U
  when(divCounter === 255.U) {
    regDIV := regDIV + 1.U
    divCounter := 0.U
  }

  // ============================================================
  // INTERRUPT FLAG (FF0F) - IF
  // ============================================================
  val regIF = RegInit(0xE1.U(8.W))

  // Set interrupt bits when requested
  when(io.vblankIRQ) {
    regIF := regIF | 0x01.U  // VBLANK bit
  }
  when(io.lcdStatIRQ) {
    regIF := regIF | 0x02.U  // LCD STAT bit
  }
  when(io.timerIRQ) {
    regIF := regIF | 0x04.U  // Timer bit
  }

  io.ifReg := regIF

  // ============================================================
  // SOUND (FF10-FF26) - Stubbed
  // ============================================================
  val regNR10 = RegInit(0x80.U(8.W))
  val regNR11 = RegInit(0xBF.U(8.W))
  val regNR12 = RegInit(0xF3.U(8.W))
  val regNR13 = RegInit(0xFF.U(8.W))
  val regNR14 = RegInit(0xBF.U(8.W))
  val regNR21 = RegInit(0x3F.U(8.W))
  val regNR22 = RegInit(0x00.U(8.W))
  val regNR23 = RegInit(0xFF.U(8.W))
  val regNR24 = RegInit(0xBF.U(8.W))
  val regNR30 = RegInit(0x7F.U(8.W))
  val regNR31 = RegInit(0xFF.U(8.W))
  val regNR32 = RegInit(0x9F.U(8.W))
  val regNR33 = RegInit(0xFF.U(8.W))
  val regNR34 = RegInit(0xBF.U(8.W))
  val regNR41 = RegInit(0xFF.U(8.W))
  val regNR42 = RegInit(0x00.U(8.W))
  val regNR43 = RegInit(0x00.U(8.W))
  val regNR44 = RegInit(0xBF.U(8.W))
  val regNR50 = RegInit(0x77.U(8.W))
  val regNR51 = RegInit(0xF3.U(8.W))
  val regNR52 = RegInit(0xF1.U(8.W))

  // ============================================================
  // PPU (FF40-FF4B) - Stubbed but essential
  // ============================================================
  val regLCDC = RegInit(0x91.U(8.W))  // LCD Control (LCD on, BG on)
  val regSTAT = RegInit(0x85.U(8.W))  // LCD Status
  val regSCY  = RegInit(0x00.U(8.W))  // Scroll Y
  val regSCX  = RegInit(0x00.U(8.W))  // Scroll X
  val regLY   = RegInit(0x00.U(8.W))  // Current scanline
  val regLYC  = RegInit(0x00.U(8.W))  // LY Compare
  val regDMA  = RegInit(0xFF.U(8.W))  // DMA Transfer
  val regBGP  = RegInit(0xFC.U(8.W))  // BG Palette
  val regOBP0 = RegInit(0x00.U(8.W))  // OBJ Palette 0
  val regOBP1 = RegInit(0x00.U(8.W))  // OBJ Palette 1
  val regWY   = RegInit(0x00.U(8.W))  // Window Y
  val regWX   = RegInit(0x00.U(8.W))  // Window X

  // ============================================================
  // BOOT ROM DISABLE (FF50)
  // ============================================================
  val regBOOT = RegInit(0x01.U(8.W))  // Boot ROM already disabled

  // ============================================================
  // READ PATH
  // ============================================================
  val readData = WireDefault(0xFF.U(8.W))

  switch(io.addr) {
    // Joypad
    is(0x00.U) { readData := regP1 }

    // Serial
    is(0x01.U) { readData := regSB }
    is(0x02.U) { readData := regSC }

    // Timer
    is(0x04.U) { readData := regDIV }
    is(0x05.U) { readData := regTIMA }
    is(0x06.U) { readData := regTMA }
    is(0x07.U) { readData := regTAC }

    // Interrupt Flag
    is(0x0F.U) { readData := regIF }

    // Sound
    is(0x10.U) { readData := regNR10 }
    is(0x11.U) { readData := regNR11 }
    is(0x12.U) { readData := regNR12 }
    is(0x13.U) { readData := regNR13 }
    is(0x14.U) { readData := regNR14 }
    is(0x16.U) { readData := regNR21 }
    is(0x17.U) { readData := regNR22 }
    is(0x18.U) { readData := regNR23 }
    is(0x19.U) { readData := regNR24 }
    is(0x1A.U) { readData := regNR30 }
    is(0x1B.U) { readData := regNR31 }
    is(0x1C.U) { readData := regNR32 }
    is(0x1D.U) { readData := regNR33 }
    is(0x1E.U) { readData := regNR34 }
    is(0x20.U) { readData := regNR41 }
    is(0x21.U) { readData := regNR42 }
    is(0x22.U) { readData := regNR43 }
    is(0x23.U) { readData := regNR44 }
    is(0x24.U) { readData := regNR50 }
    is(0x25.U) { readData := regNR51 }
    is(0x26.U) { readData := regNR52 }

    // PPU
    is(0x40.U) { readData := regLCDC }
    is(0x41.U) { readData := regSTAT }
    is(0x42.U) { readData := regSCY }
    is(0x43.U) { readData := regSCX }
    is(0x44.U) { readData := regLY }
    is(0x45.U) { readData := regLYC }
    is(0x46.U) { readData := regDMA }
    is(0x47.U) { readData := regBGP }
    is(0x48.U) { readData := regOBP0 }
    is(0x49.U) { readData := regOBP1 }
    is(0x4A.U) { readData := regWY }
    is(0x4B.U) { readData := regWX }

    // Boot disable
    is(0x50.U) { readData := regBOOT }
  }

  io.readData := readData

  // ============================================================
  // WRITE PATH
  // ============================================================
  when(io.write) {
    switch(io.addr) {
      // Joypad
      is(0x00.U) { regP1 := io.writeData | 0xCF.U }  // Only bits 4-5 writable

      // Serial - CRITICAL FOR TEST ROMS
      is(0x01.U) {
        regSB := io.writeData
      }
      is(0x02.U) {
        regSC := io.writeData
        // When bit 7 is set, initiate transfer (output character)
        when(io.writeData(7)) {
          serialOutReg := regSB
          serialValidReg := true.B
          // Also print to console for debugging
          printf("[SERIAL] 0x%x '%c'\n", regSB, regSB)
        }
      }

      // Timer
      is(0x04.U) { regDIV := 0.U }  // Writing any value resets to 0
      is(0x05.U) { regTIMA := io.writeData }
      is(0x06.U) { regTMA := io.writeData }
      is(0x07.U) { regTAC := io.writeData }

      // Interrupt Flag
      is(0x0F.U) { regIF := io.writeData }

      // Sound registers (accept writes but don't do anything)
      is(0x10.U) { regNR10 := io.writeData }
      is(0x11.U) { regNR11 := io.writeData }
      is(0x12.U) { regNR12 := io.writeData }
      is(0x13.U) { regNR13 := io.writeData }
      is(0x14.U) { regNR14 := io.writeData }
      is(0x16.U) { regNR21 := io.writeData }
      is(0x17.U) { regNR22 := io.writeData }
      is(0x18.U) { regNR23 := io.writeData }
      is(0x19.U) { regNR24 := io.writeData }
      is(0x1A.U) { regNR30 := io.writeData }
      is(0x1B.U) { regNR31 := io.writeData }
      is(0x1C.U) { regNR32 := io.writeData }
      is(0x1D.U) { regNR33 := io.writeData }
      is(0x1E.U) { regNR34 := io.writeData }
      is(0x20.U) { regNR41 := io.writeData }
      is(0x21.U) { regNR42 := io.writeData }
      is(0x22.U) { regNR43 := io.writeData }
      is(0x23.U) { regNR44 := io.writeData }
      is(0x24.U) { regNR50 := io.writeData }
      is(0x25.U) { regNR51 := io.writeData }
      is(0x26.U) { regNR52 := io.writeData }

      // PPU
      is(0x40.U) { regLCDC := io.writeData }
      is(0x41.U) { regSTAT := io.writeData }
      is(0x42.U) { regSCY := io.writeData }
      is(0x43.U) { regSCX := io.writeData }
      is(0x44.U) { }  // LY is read-only
      is(0x45.U) { regLYC := io.writeData }
      is(0x46.U) { regDMA := io.writeData }
      is(0x47.U) { regBGP := io.writeData }
      is(0x48.U) { regOBP0 := io.writeData }
      is(0x49.U) { regOBP1 := io.writeData }
      is(0x4A.U) { regWY := io.writeData }
      is(0x4B.U) { regWX := io.writeData }

      // Boot disable
      is(0x50.U) { regBOOT := io.writeData }
    }
  }

  // Output serial data
  io.serialOut := serialOutReg
  io.serialValid := serialValidReg

  // Output PPU control registers
  io.ppuLcdc := regLCDC
  io.ppuStat := regSTAT
  io.ppuScy  := regSCY
  io.ppuScx  := regSCX
  io.ppuLyc  := regLYC
  io.ppuBgp  := regBGP
  io.ppuObp0 := regOBP0
  io.ppuObp1 := regOBP1
  io.ppuWy   := regWY
  io.ppuWx   := regWX
}