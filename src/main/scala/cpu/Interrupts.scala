package cpu

import chisel3._
import chisel3.util._

class InterruptsIO extends Bundle {
  val IE      = Input(UInt(8.W))     // 0xFFFF
  val IF      = Input(UInt(8.W))     // 0xFF0F
  val IME     = Input(Bool())        // CPU IME flag
  val pc      = Input(UInt(16.W))    // Program counter (unused)
  val halted  = Input(Bool())        // CPU in HALT

  val should_irq         = Output(Bool())
  val irq_vector         = Output(UInt(16.W))
  val irq_index          = Output(UInt(3.W))
  val halt_bug_triggered = Output(Bool())
}

class Interrupts extends Module {
  val io = IO(new InterruptsIO)

  // -----------------------------------------------------
  // ACTIVE INTERRUPTS (IE & IF)
  // -----------------------------------------------------
  val active = Wire(UInt(8.W))
  active := io.IE & io.IF

  val anyActive = active.orR

  // -----------------------------------------------------
  // PRIORITY ENCODER
  // -----------------------------------------------------
  val vector = WireDefault(0.U(16.W))
  val index  = WireDefault(0.U(3.W))

  when(active(0)) {
    vector := "h0040".U; index := 0.U
  }.elsewhen(active(1)) {
    vector := "h0048".U; index := 1.U
  }.elsewhen(active(2)) {
    vector := "h0050".U; index := 2.U
  }.elsewhen(active(3)) {
    vector := "h0058".U; index := 3.U
  }.elsewhen(active(4)) {
    vector := "h0060".U; index := 4.U
  }

  // -----------------------------------------------------
  // OUTPUTS
  // -----------------------------------------------------
  io.should_irq := io.IME && anyActive
  io.irq_vector := vector
  io.irq_index  := index

  // HALT bug detection (unchanged)
  io.halt_bug_triggered := (!io.IME) && anyActive && io.halted
}
