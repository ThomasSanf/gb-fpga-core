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
  // ROM — COMBINATIONAL READ
  // ============================================================
  val rom = Mem(romSize, UInt(8.W))
  loadMemoryFromFileInline(rom, romPath)

  // ============================================================
  // WRAM (8KB) + HRAM (127B) — using Mem (async read)
  // ============================================================
  val wram = Mem(8 * 1024, UInt(8.W))                 // C000–DFFF (+ echo E000–FDFF)
  val hram = RegInit(VecInit(Seq.fill(127)(0.U(8.W)))) // FF80–FFFE

  // ============================================================
  // INTERRUPT REGISTERS
  // ============================================================
  val regIE = RegInit(0.U(8.W)) // FFFF
  val regIF = RegInit(0.U(8.W)) // FF0F

  // ============================================================
  // Address decode
  // ============================================================
  val addr   = io.cpuAddress
  val inRom  = addr < "h8000".U
  val inWram = addr >= "hC000".U && addr <= "hDFFF".U
  val inEcho = addr >= "hE000".U && addr <= "hFDFF".U

  // Echo mirrors WRAM: E000->C000, etc.
  val wramBusAddr = Mux(inEcho, addr - "h2000".U, addr)
  val wramIdx     = (wramBusAddr - "hC000".U)(12, 0) // 0..8191

  // ============================================================
  // READ PATH
  // ============================================================
  val rdata = WireDefault("hFF".U(8.W)) // open-bus default

  when(io.cpuRead) {

    // ROM 0000–7FFF (NO "addr < romSize" decode!)
    when(inRom) {
      // Safety: if romSize < 0x8000, avoid OOB
      when(addr < romSize.U) { rdata := rom(addr) }
        .otherwise { rdata := "hFF".U }
    }

      // WRAM C000–DFFF + Echo E000–FDFF
      .elsewhen(inWram || inEcho) {
        rdata := wram(wramIdx)
      }

      // HRAM FF80–FFFE
      .elsewhen(addr >= "hFF80".U && addr <= "hFFFE".U) {
        rdata := hram(addr - "hFF80".U)
      }

      // IF FF0F
      .elsewhen(addr === "hFF0F".U) {
        rdata := regIF
      }

      // IE FFFF
      .elsewhen(addr === "hFFFF".U) {
        rdata := regIE
      }
  }

  io.cpuReadData := rdata

  // ============================================================
  // WRITE PATH
  // ============================================================
  when(io.cpuWrite) {

    // WRAM C000–DFFF + Echo E000–FDFF
    when(inWram || inEcho) {
      wram.write(wramIdx, io.cpuWriteData)

      // Optional debug: prove the patch is actually being written
      // when(wramBusAddr === "hC000".U) {
      //   printf(p"[WRAM] W ${Hexadecimal(wramBusAddr)} <= ${Hexadecimal(io.cpuWriteData)}\n")
      // }
    }

      // HRAM FF80–FFFE
      .elsewhen(addr >= "hFF80".U && addr <= "hFFFE".U) {
        hram(addr - "hFF80".U) := io.cpuWriteData
      }

      // IF FF0F
      .elsewhen(addr === "hFF0F".U) {
        regIF := io.cpuWriteData
      }

      // IE FFFF
      .elsewhen(addr === "hFFFF".U) {
        regIE := io.cpuWriteData
      }
  }

  io.ieReg := regIE
  io.ifReg := regIF
}
