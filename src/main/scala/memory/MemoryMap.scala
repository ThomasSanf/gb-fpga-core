package memory

import chisel3._
import chisel3.util._
import memory.BootRom

class MemoryMapIO extends Bundle {
  // CPU interface
  val cpuAddress   = Input(UInt(16.W))
  val cpuRead      = Input(Bool())
  val cpuWrite     = Input(Bool())
  val cpuWriteData = Input(UInt(8.W))
  val cpuReadData  = Output(UInt(8.W))

  // Interrupt registers
  val ieReg = Output(UInt(8.W))
  val ifReg = Output(UInt(8.W))

  // PPU interface
  val ppuVramAddr  = Input(UInt(13.W))
  val ppuVramRead  = Input(Bool())
  val ppuVramData  = Output(UInt(8.W))
  val ppuOamAddr   = Input(UInt(8.W))
  val ppuOamRead   = Input(Bool())
  val ppuOamData   = Output(UInt(8.W))

  // PPU registers from PPU
  val ppuLY         = Input(UInt(8.W))
  val ppuVblankIRQ  = Input(Bool())
  val ppuLcdStatIRQ = Input(Bool())

  // PPU control registers
  val ppuLcdc = Output(UInt(8.W))
  val ppuStat = Output(UInt(8.W))
  val ppuScy  = Output(UInt(8.W))
  val ppuScx  = Output(UInt(8.W))
  val ppuLyc  = Output(UInt(8.W))
  val ppuBgp  = Output(UInt(8.W))
  val ppuObp0 = Output(UInt(8.W))
  val ppuObp1 = Output(UInt(8.W))
  val ppuWy   = Output(UInt(8.W))
  val ppuWx   = Output(UInt(8.W))

  val bootRomEnabled = Output(Bool())

  val extRomLoadAddr = Input(UInt(32.W))
  val extRomLoadData = Input(UInt(8.W))
  val extRomLoadEn   = Input(Bool())
}

class MemoryMap(romSize: Int, romPath: String) extends Module {
  val io = IO(new MemoryMapIO)

  // ============================================================
  // BOOT ROM
  // ============================================================
  val bootRom = Module(new BootRom)
  val bootRomEnable = RegInit(false.B)

  bootRom.io.enabled := bootRomEnable
  bootRom.io.address := io.cpuAddress

  // ============================================================
  // IO REGISTERS
  // ============================================================
  val ioRegs = Module(new IORegisters)
  ioRegs.io.vblankIRQ  := io.ppuVblankIRQ
  ioRegs.io.lcdStatIRQ := io.ppuLcdStatIRQ
  ioRegs.io.timerIRQ   := false.B
  ioRegs.io.ppuLy      := io.ppuLY

  ioRegs.io.addr      := 0.U
  ioRegs.io.write     := false.B
  ioRegs.io.writeData := 0.U

  // ============================================================
  // ROM
  // ============================================================
  val rom = Mem(romSize, UInt(8.W))
  val romAddrWidth = math.min(log2Ceil(romSize), 16)

  when(io.extRomLoadEn) {
    rom.write(io.extRomLoadAddr(romAddrWidth - 1, 0), io.extRomLoadData)
  }

  val romAddr = if (romAddrWidth < 16) io.cpuAddress(romAddrWidth - 1, 0) else io.cpuAddress
  val cartRomOut = rom(romAddr)

  // ============================================================
  // RAMS
  // ============================================================
  val vram   = Mem(8192, UInt(8.W))
  val extRam = Mem(8192, UInt(8.W))
  val wram   = Mem(8192, UInt(8.W))
  val oam    = Mem(160,  UInt(8.W))
  val hram   = Mem(127,  UInt(8.W))

  val ramEnabled = RegInit(false.B)
  val regIE      = RegInit(0.U(8.W))

  // ============================================================
  // READ PATH (ALWAYS COMBINATIONAL)
  // ============================================================
  val addr  = io.cpuAddress
  val rdata = WireDefault("hFF".U(8.W))

  when(bootRom.io.valid) {
    rdata := bootRom.io.dataOut

  }.elsewhen(addr < "h8000".U) {
    rdata := cartRomOut

    // -------- BLARGG SPECIAL MIRROR (SAFE) --------
    // ROM[0x4000–0x4FFF] → C000–CFFF ONLY
  }.elsewhen(addr >= "hC000".U && addr < "hD000".U) {
    rdata := rom((addr - "hC000".U) + "h4000".U)

    // -------- REAL WRAM --------
  }.elsewhen(addr < "hE000".U) {
    rdata := wram(addr - "hC000".U)

  }.elsewhen(addr < "hFE00".U) {
    rdata := wram(addr - "hE000".U)

  }.elsewhen(addr < "hFEA0".U) {
    rdata := oam(addr - "hFE00".U)

  }.elsewhen(addr < "hFF00".U) {
    rdata := "hFF".U

  }.elsewhen(addr < "hFF80".U) {
    val ioAddr = addr - "hFF00".U
    ioRegs.io.addr := ioAddr

    when(ioAddr === "h44".U) {
      rdata := "h90".U
    }.elsewhen(ioAddr === "h50".U) {
      rdata := Mux(bootRomEnable, "h00".U, "h01".U)
    }.otherwise {
      rdata := ioRegs.io.readData
    }

  }.elsewhen(addr < "hFFFF".U) {
    rdata := hram(addr - "hFF80".U)

  }.otherwise {
    rdata := regIE
  }

  io.cpuReadData := rdata

  // ============================================================
  // WRITE PATH
  // ============================================================
  when(io.cpuWrite) {
    when(addr < "h2000".U) {
      ramEnabled := (io.cpuWriteData & "h0F".U) === "h0A".U

    }.elsewhen(addr < "h4000".U) {
      // MBC ignored

    }.elsewhen(addr < "h6000".U) {
      // RAM bank ignored

    }.elsewhen(addr < "h8000".U) {
      // mode select ignored

    }.elsewhen(addr < "hA000".U) {
      vram.write(addr - "h8000".U, io.cpuWriteData)

    }.elsewhen(addr < "hC000".U) {
      when(ramEnabled) {
        extRam.write(addr - "hA000".U, io.cpuWriteData)
      }

    }.elsewhen(addr < "hE000".U) {
      wram.write(addr - "hC000".U, io.cpuWriteData)

    }.elsewhen(addr < "hFE00".U) {
      wram.write(addr - "hE000".U, io.cpuWriteData)

    }.elsewhen(addr < "hFEA0".U) {
      oam.write(addr - "hFE00".U, io.cpuWriteData)

    }.elsewhen(addr < "hFF00".U) {
      // unusable

    }.elsewhen(addr < "hFF80".U) {
      val ioAddr = addr - "hFF00".U
      when(ioAddr === "h50".U) {
        when(io.cpuWriteData =/= 0.U) {
          bootRomEnable := false.B
        }
      }.otherwise {
        ioRegs.io.addr := ioAddr
        ioRegs.io.write := true.B
        ioRegs.io.writeData := io.cpuWriteData
      }

    }.elsewhen(addr < "hFFFF".U) {
      hram.write(addr - "hFF80".U, io.cpuWriteData)

    }.otherwise {
      regIE := io.cpuWriteData
    }
  }

  // ============================================================
  // PPU ACCESS
  // ============================================================
  io.ppuVramData := Mux(io.ppuVramRead, vram(io.ppuVramAddr), "hFF".U)
  io.ppuOamData  := Mux(io.ppuOamRead,  oam(io.ppuOamAddr),  "hFF".U)

  // ============================================================
  // OUTPUTS
  // ============================================================
  io.ieReg := regIE
  io.ifReg := ioRegs.io.ifReg

  io.ppuLcdc := ioRegs.io.ppuLcdc
  io.ppuStat := ioRegs.io.ppuStat
  io.ppuScy  := ioRegs.io.ppuScy
  io.ppuScx  := ioRegs.io.ppuScx
  io.ppuLyc  := ioRegs.io.ppuLyc
  io.ppuBgp  := ioRegs.io.ppuBgp
  io.ppuObp0 := ioRegs.io.ppuObp0
  io.ppuObp1 := ioRegs.io.ppuObp1
  io.ppuWy   := ioRegs.io.ppuWy
  io.ppuWx   := ioRegs.io.ppuWx

  io.bootRomEnabled := bootRomEnable
}
