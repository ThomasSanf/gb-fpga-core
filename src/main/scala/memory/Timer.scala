package memory

import chisel3._
import chisel3.util._

class Timer extends Module {
  val io = IO(new Bundle {
    // MMIO
    val enable = Input(Bool())
    val addr   = Input(UInt(2.W))   // FF04–FF07
    val read   = Input(Bool())
    val write  = Input(Bool())
    val wdata  = Input(UInt(8.W))
    val rdata  = Output(UInt(8.W))

    // Clock
    val tick = Input(Bool())

    // Interrupt
    val irq = Output(Bool())
  })

  // Registers
  val div  = RegInit(0.U(16.W)) // FF04
  val tima = RegInit(0.U(8.W))  // FF05
  val tma  = RegInit(0.U(8.W))  // FF06
  val tac  = RegInit(0.U(3.W))  // FF07

  io.irq := false.B

  // Divider always increments
  when(io.tick) {
    div := div + 1.U
  }

  // Timer frequency select
  val freqBit = MuxLookup(tac(1,0), 9.U, Seq(
    0.U -> 9.U,  // 4096 Hz
    1.U -> 3.U,  // 262144 Hz
    2.U -> 5.U,  // 65536 Hz
    3.U -> 7.U   // 16384 Hz
  ))

  val prev = RegNext(div(freqBit), false.B)
  val edge = prev && !div(freqBit)

  when(io.tick && tac(2) && edge) {
    when(tima === "hFF".U) {
      tima := tma
      io.irq := true.B
    }.otherwise {
      tima := tima + 1.U
    }
  }

  // MMIO write
  when(io.enable && io.write) {
    switch(io.addr) {
      is(0.U) { div := 0.U }
      is(1.U) { tima := io.wdata }
      is(2.U) { tma  := io.wdata }
      is(3.U) { tac  := io.wdata(2,0) }
    }
  }

  // MMIO read
  io.rdata := MuxLookup(io.addr, 0.U, Seq(
    0.U -> div(15,8),
    1.U -> tima,
    2.U -> tma,
    3.U -> Cat("b11111".U, tac)
  ))
}
