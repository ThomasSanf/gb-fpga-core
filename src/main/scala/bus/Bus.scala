package cpu

import chisel3._
import chisel3.util._
import chisel3.util.experimental.loadMemoryFromFileInline

class BusIO extends Bundle {
  val cpuAddress   = Input(UInt(16.W))
  val cpuRead      = Input(Bool())
  val cpuWrite     = Input(Bool())
  val cpuWriteData = Input(UInt(8.W))
  val cpuReadData  = Output(UInt(8.W))

  val ieReg = Output(UInt(8.W))
  val ifReg = Output(UInt(8.W))
}

class Bus(romSize: Int, romPath: String) extends Module {
  val io = IO(new BusIO)

  // ============================================================
  // ROM — COMBINATIONAL READ (DMG-accurate)
  // ============================================================
  val rom = Mem(romSize, UInt(8.W))
  loadMemoryFromFileInline(rom, romPath)

  // ============================================================
  // WRAM + HRAM
  // ============================================================
  val wram = SyncReadMem(8 * 1024, UInt(8.W))
  val hram = RegInit(VecInit(Seq.fill(127)(0.U(8.W))))

  // ============================================================
  // INTERRUPT REGISTERS
  // ============================================================
  val regIE = RegInit(0.U(8.W)) // FFFF
  val regIF = RegInit(0.U(8.W)) // FF0F

  // ============================================================
  // Synchronous WRAM read-enable + address register
  // ============================================================
  val wramReadEn  = RegInit(false.B)
  val wramReadAddr = Reg(UInt(13.W))

  wramReadEn := false.B

  when(io.cpuRead &&
    io.cpuAddress >= "hC000".U &&
    io.cpuAddress <= "hDFFF".U) {

    wramReadEn   := true.B
    wramReadAddr := io.cpuAddress - "hC000".U
  }

  val wramOut = wram.read(wramReadAddr, wramReadEn)

  // ============================================================
  // READ PATH (combinational for ROM/HRAM/IE/IF)
  // ============================================================
  val rdata = WireDefault(0.U(8.W))

  when(io.cpuRead) {

    // ROM 0000–7FFF
    when(io.cpuAddress < romSize.U) {
      rdata := rom(io.cpuAddress)

      // WRAM C000–DFFF (1 cycle latency)
    }.elsewhen(io.cpuAddress >= "hC000".U && io.cpuAddress <= "hDFFF".U) {
      rdata := wramOut

      // HRAM FF80–FFFE
    }.elsewhen(io.cpuAddress >= "hFF80".U && io.cpuAddress <= "hFFFE".U) {
      rdata := hram(io.cpuAddress - "hFF80".U)

      // IE and IF
    }.elsewhen(io.cpuAddress === "hFFFF".U) {
      rdata := regIE
    }.elsewhen(io.cpuAddress === "hFF0F".U) {
      rdata := regIF
    }
  }

  io.cpuReadData := rdata

  // ============================================================
  // WRITE PATH
  // ============================================================
  when(io.cpuWrite) {

    when(io.cpuAddress >= "hC000".U && io.cpuAddress <= "hDFFF".U) {
      wram.write(io.cpuAddress - "hC000".U, io.cpuWriteData)

    }.elsewhen(io.cpuAddress >= "hFF80".U && io.cpuAddress <= "hFFFE".U) {
      hram(io.cpuAddress - "hFF80".U) := io.cpuWriteData

    }.elsewhen(io.cpuAddress === "hFFFF".U) {
      regIE := io.cpuWriteData

    }.elsewhen(io.cpuAddress === "hFF0F".U) {
      regIF := io.cpuWriteData
    }
  }

  io.ieReg := regIE
  io.ifReg := regIF
}
