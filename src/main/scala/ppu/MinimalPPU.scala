package ppu

import chisel3._
import chisel3.util._

/**
 * Minimal PPU - Just enough to not hang ROMs
 *
 * Implements:
 * - LY register counting (scanline counter)
 * - VBLANK interrupt generation
 * - Basic timing (456 dots per scanline, 154 scanlines per frame)
 */
class MinimalPPUIO extends Bundle {
  val lyReg       = Output(UInt(8.W))    // Current scanline (FF44)
  val vblankIRQ   = Output(Bool())        // VBLANK interrupt request
  val lcdStatIRQ  = Output(Bool())        // LCD STAT interrupt (stubbed)
}

class MinimalPPU extends Module {
  val io = IO(new MinimalPPUIO)

  // ============================================================
  // PPU TIMING
  // ============================================================
  // Real Game Boy timing:
  // - 456 dots (T-cycles) per scanline
  // - 144 visible scanlines (0-143)
  // - 10 VBLANK scanlines (144-153)
  // - Total: 154 scanlines per frame
  // - Frame rate: ~59.73 Hz

  val dotCounter = RegInit(0.U(9.W))   // 0-455 dots per line
  val lyCounter  = RegInit(0.U(8.W))   // 0-153 scanlines

  val vblankFlag = RegInit(false.B)

  // ============================================================
  // DOT COUNTER - Increment every T-cycle
  // ============================================================
  when(dotCounter === 455.U) {
    dotCounter := 0.U

    // Increment scanline
    when(lyCounter === 153.U) {
      lyCounter := 0.U
      vblankFlag := false.B
    }.otherwise {
      lyCounter := lyCounter + 1.U

      // Trigger VBLANK at scanline 144
      when(lyCounter === 143.U) {
        vblankFlag := true.B
      }
    }
  }.otherwise {
    dotCounter := dotCounter + 1.U
  }

  // ============================================================
  // OUTPUTS
  // ============================================================
  io.lyReg := lyCounter
  io.vblankIRQ := vblankFlag
  io.lcdStatIRQ := false.B  // Not implemented
}