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
  val ppuLY        = Input(UInt(8.W))
  val ppuVblankIRQ = Input(Bool())
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

  // Boot ROM debug
  val bootRomEnabled = Output(Bool())

  // External ROM loader
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
  val bootRomEnable = RegInit(true.B)

  bootRom.io.enabled := bootRomEnable
  bootRom.io.address := io.cpuAddress

  // ============================================================
  // IO Registers
  // ============================================================
  val ioRegs = Module(new IORegisters)
  ioRegs.io.vblankIRQ := io.ppuVblankIRQ
  ioRegs.io.lcdStatIRQ := io.ppuLcdStatIRQ
  ioRegs.io.timerIRQ := false.B
  ioRegs.io.ppuLy := io.ppuLY  // ← FIX! Connect PPU LY to IORegisters

  // ============================================================
  // ROM (cartridge)
  // ============================================================
  val rom = SyncReadMem(romSize, UInt(8.W))

  when(io.extRomLoadEn) {
    rom.write(io.extRomLoadAddr, io.extRomLoadData)
  }

  // ============================================================
  // VRAM, WRAM, EXT RAM, OAM
  // ============================================================
  val vram = SyncReadMem(8192, UInt(8.W))
  val extRam = SyncReadMem(8192, UInt(8.W))
  val wram = SyncReadMem(8192, UInt(8.W))
  val oam  = SyncReadMem(160,  UInt(8.W))
  val hram = Mem(127, UInt(8.W))

  val ramEnabled = RegInit(false.B)

  val regIE = RegInit(0.U(8.W))
  val romBankNumber = RegInit(1.U(7.W))
  val ramBankNumber = RegInit(0.U(2.W))

  // ============================================================
  // READ PATH — FULL PATCH APPLIED HERE
  // ============================================================

  // SyncReadMem ROM read (1-cycle latency)
  val cartRomOut = rom.read(io.cpuAddress, io.cpuRead)

  // Boot ROM output (combinational)
  val bootOut = Mux(bootRom.io.valid, bootRom.io.dataOut, 0.U)

  val rdata = WireDefault(0.U(8.W))

  ioRegs.io.addr := 0.U
  ioRegs.io.write := false.B
  ioRegs.io.writeData := 0.U

  when(io.cpuRead) {

    // --- 1) Boot ROM BEFORE cartridge ROM ---
    when(bootRom.io.valid) {
      rdata := bootOut

      // --- 2) Cartridge ROM ---
    }.elsewhen(io.cpuAddress < 0x8000.U) {
      rdata := cartRomOut

      // --- 3) VRAM ---
    }.elsewhen(io.cpuAddress < 0xA000.U) {
      rdata := vram.read(io.cpuAddress - 0x8000.U)

      // --- 4) External RAM ---
    }.elsewhen(io.cpuAddress < 0xC000.U) {
      rdata := Mux(ramEnabled, extRam.read(io.cpuAddress - 0xA000.U), 0xFF.U)

      // --- 5) WRAM ---
    }.elsewhen(io.cpuAddress < 0xE000.U) {
      rdata := wram.read(io.cpuAddress - 0xC000.U)

      // --- 6) Echo RAM ---
    }.elsewhen(io.cpuAddress < 0xFE00.U) {
      rdata := wram.read(io.cpuAddress - 0xE000.U)

      // --- 7) OAM ---
    }.elsewhen(io.cpuAddress < 0xFEA0.U) {
      rdata := oam.read(io.cpuAddress - 0xFE00.U)

      // --- 8) Unusable ---
    }.elsewhen(io.cpuAddress < 0xFF00.U) {
      rdata := 0xFF.U

      // --- 9) IO Registers ---
    }.elsewhen(io.cpuAddress < 0xFF80.U) {
      val ioAddr = io.cpuAddress - 0xFF00.U
      ioRegs.io.addr := ioAddr

      when(ioAddr === 0x44.U) {
        rdata := io.ppuLY

      }.elsewhen(ioAddr === 0x50.U) {
        rdata := Mux(bootRomEnable, 0x00.U, 0x01.U)

      }.otherwise {
        rdata := ioRegs.io.readData
      }

      // --- 10) HRAM ---
    }.elsewhen(io.cpuAddress < 0xFFFF.U) {
      rdata := hram(io.cpuAddress - 0xFF80.U)

      // --- 11) IE Register ---
    }.otherwise {
      rdata := regIE
    }
  }

  io.cpuReadData := rdata

  // ============================================================
  // WRITE PATH (unchanged)
  // ============================================================
  when(io.cpuWrite) {

    when(io.cpuAddress < 0x2000.U) {
      ramEnabled := (io.cpuWriteData & 0x0F.U) === 0x0A.U

    }.elsewhen(io.cpuAddress < 0x4000.U) {
      val bank = io.cpuWriteData & 0x1F.U
      romBankNumber := Mux(bank === 0.U, 1.U, bank)

    }.elsewhen(io.cpuAddress < 0x6000.U) {
      ramBankNumber := io.cpuWriteData & 0x03.U

    }.elsewhen(io.cpuAddress < 0x8000.U) {
      // banking mode select – ignored for now

    }.elsewhen(io.cpuAddress < 0xA000.U) {
      vram.write(io.cpuAddress - 0x8000.U, io.cpuWriteData)

    }.elsewhen(io.cpuAddress < 0xC000.U) {
      when(ramEnabled) {
        extRam.write(io.cpuAddress - 0xA000.U, io.cpuWriteData)
      }

    }.elsewhen(io.cpuAddress < 0xE000.U) {
      wram.write(io.cpuAddress - 0xC000.U, io.cpuWriteData)

    }.elsewhen(io.cpuAddress < 0xFE00.U) {
      wram.write(io.cpuAddress - 0xE000.U, io.cpuWriteData)

    }.elsewhen(io.cpuAddress < 0xFEA0.U) {
      oam.write(io.cpuAddress - 0xFE00.U, io.cpuWriteData)

    }.elsewhen(io.cpuAddress < 0xFF00.U) {
      // unusable

    }.elsewhen(io.cpuAddress < 0xFF80.U) {
      val ioAddr = io.cpuAddress - 0xFF00.U

      when(ioAddr === 0x50.U) {
        when(io.cpuWriteData =/= 0.U) {
          bootRomEnable := false.B
        }
      }.otherwise {
        ioRegs.io.addr := ioAddr
        ioRegs.io.write := true.B
        ioRegs.io.writeData := io.cpuWriteData
      }

    }.elsewhen(io.cpuAddress < 0xFFFF.U) {
      hram(io.cpuAddress - 0xFF80.U) := io.cpuWriteData

    }.otherwise {
      regIE := io.cpuWriteData
    }
  }

  // ============================================================
  // PPU ACCESS
  // ============================================================
  io.ppuVramData := vram.read(io.ppuVramAddr, io.ppuVramRead)
  io.ppuOamData  := oam.read(io.ppuOamAddr, io.ppuOamRead)

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