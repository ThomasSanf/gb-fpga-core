package ppu

import chisel3._
import chisel3.util._

class VRAM extends Module {
  val io = IO(new Bundle {
    val addr  = Input(UInt(13.W))
    val read  = Input(Bool())
    val write = Input(Bool())
    val wdata = Input(UInt(8.W))
    val rdata = Output(UInt(8.W))
  })

  // 8 KB VRAM (synchronous read memory)
  val mem = SyncReadMem(8192, UInt(8.W))

  // Synchronous read (1-cycle latency)
  // Data arrives NEXT cycle after address is asserted
  io.rdata := mem.read(io.addr, io.read)

  // Optional write (for later CPU use)
  when(io.write) {
    mem.write(io.addr, io.wdata)
  }
}