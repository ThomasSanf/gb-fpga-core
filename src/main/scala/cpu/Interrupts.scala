package cpu

import chisel3._
import chisel3.util._

/**
 * Game Boy Interrupt Controller
 * Handles:
 *   - Interrupt priority encoding
 *   - IME logic
 *   - HALT bug detection
 */
class InterruptsIO extends Bundle {
  val IE      = Input(UInt(8.W))     // 0xFFFF
  val IF      = Input(UInt(8.W))     // 0xFF0F
  val IME     = Input(Bool())        // CPU IME flag
  val pc      = Input(UInt(16.W))    // Program counter (unused for now)
  val halted  = Input(Bool())        // CPU in HALT

  val should_irq         = Output(Bool())
  val irq_vector         = Output(UInt(16.W))
  val halt_bug_triggered = Output(Bool())
}

class Interrupts extends Module {
  val io = IO(new InterruptsIO)

  // -----------------------------------------------------
  // ACTIVE INTERRUPTS = ones where BOTH IE & IF bits are 1
  // -----------------------------------------------------
  val active = io.IE & io.IF   // 8-bit mask
  val anyActive = active.orR   // true if any bit set

  // -----------------------------------------------------
  // PRIORITY ENCODER (lowest bit = highest priority)
  // -----------------------------------------------------
  val vector = Wire(UInt(16.W))

  when(active(0))      { vector := "h0040".U }  // VBlank
    .elsewhen(active(1)) { vector := "h0048".U }  // LCD STAT
    .elsewhen(active(2)) { vector := "h0050".U }  // Timer
    .elsewhen(active(3)) { vector := "h0058".U }  // Serial
    .elsewhen(active(4)) { vector := "h0060".U }  // Joypad
    .otherwise           { vector := 0.U }

  // -----------------------------------------------------
  // IME must be enabled AND an interrupt active
  // -----------------------------------------------------
  io.should_irq := io.IME && anyActive
  io.irq_vector := vector

  // -----------------------------------------------------
  // HALT BUG:
  // IME = 0
  // IE & IF != 0
  // CPU executed HALT
  // -----------------------------------------------------
  io.halt_bug_triggered := (!io.IME) && anyActive && io.halted
}
