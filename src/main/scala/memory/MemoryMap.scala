package memory

import chisel3._
import chisel3.util._
import chisel3.util.experimental.loadMemoryFromFileInline

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

  // PPU registers from MinimalPPU
  val ppuLY        = Input(UInt(8.W))
  val ppuVblankIRQ = Input(Bool())
  val ppuLcdStatIRQ = Input(Bool())

  // PPU control registers (outputs to PPU)
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

/**
 * Complete Game Boy Memory Map
 *
 * Memory Layout:
 * 0000-3FFF : ROM Bank 0 (16KB, fixed)
 * 4000-7FFF : ROM Bank N (16KB, switchable via MBC)
 * 8000-9FFF : VRAM (8KB)
 * A000-BFFF : External RAM (8KB, cartridge)
 * C000-DFFF : WRAM (8KB)
 * E000-FDFF : Echo RAM (mirrors C000-DDFF)
 * FE00-FE9F : OAM (160 bytes)
 * FEA0-FEFF : Unusable
 * FF00-FF7F : I/O Registers
 * FF80-FFFE : HRAM (127 bytes)
 * FFFF      : IE Register
 */
class MemoryMap(romSize: Int, romPath: String) extends Module {
  val io = IO(new MemoryMapIO)

  // ============================================================
  // I/O REGISTERS MODULE
  // ============================================================
  val ioRegs = Module(new IORegisters)
  ioRegs.io.vblankIRQ := io.ppuVblankIRQ
  ioRegs.io.lcdStatIRQ := io.ppuLcdStatIRQ
  ioRegs.io.timerIRQ := false.B  // Timer not implemented yet

  // ============================================================
  // ROM BANKS
  // ============================================================
  val rom = Mem(romSize, UInt(8.W))
  loadMemoryFromFileInline(rom, romPath)

  // ============================================================
  // VRAM (8000-9FFF) - 8KB
  // ============================================================
  val vram = SyncReadMem(8192, UInt(8.W))
  val vramReadEn = RegInit(false.B)
  val vramReadAddr = Reg(UInt(13.W))
  vramReadEn := false.B

  // ============================================================
  // EXTERNAL RAM (A000-BFFF) - 8KB cartridge RAM
  // ============================================================
  val extRam = SyncReadMem(8192, UInt(8.W))
  val extRamReadEn = RegInit(false.B)
  val extRamReadAddr = Reg(UInt(13.W))
  extRamReadEn := false.B
  val ramEnabled = RegInit(false.B)

  // ============================================================
  // WRAM (C000-DFFF) - 8KB
  // ============================================================
  val wram = SyncReadMem(8192, UInt(8.W))
  val wramReadEn = RegInit(false.B)
  val wramReadAddr = Reg(UInt(13.W))
  wramReadEn := false.B

  // ============================================================
  // OAM (FE00-FE9F) - 160 bytes (sprite attributes)
  // ============================================================
  val oam = SyncReadMem(160, UInt(8.W))
  val oamReadEn = RegInit(false.B)
  val oamReadAddr = Reg(UInt(8.W))
  oamReadEn := false.B

  // ============================================================
  // HRAM (FF80-FFFE) - 127 bytes (fast zero-page RAM)
  // ============================================================
  val hram = Mem(127, UInt(8.W))

  // ============================================================
  // INTERRUPT REGISTERS
  // ============================================================
  val regIE = RegInit(0x00.U(8.W))  // FFFF - Interrupt Enable

  // ============================================================
  // MBC (Memory Bank Controller) - Simple implementation
  // ============================================================
  val romBankNumber = RegInit(1.U(7.W))
  val ramBankNumber = RegInit(0.U(2.W))

  // ============================================================
  // READ PATH
  // ============================================================
  val rdata = WireDefault(0.U(8.W))

  // Default: IORegisters not being accessed
  ioRegs.io.addr := 0.U
  ioRegs.io.write := false.B
  ioRegs.io.writeData := 0.U

  when(io.cpuRead) {
    when(io.cpuAddress < 0x4000.U) {
      // ROM Bank 0 (0000-3FFF)
      rdata := rom(io.cpuAddress)

    }.elsewhen(io.cpuAddress < 0x8000.U) {
      // ROM Bank N (4000-7FFF)
      when(io.cpuAddress < romSize.U) {
        rdata := rom(io.cpuAddress)
      }

    }.elsewhen(io.cpuAddress < 0xA000.U) {
      // VRAM (8000-9FFF)
      val addr = io.cpuAddress - 0x8000.U
      vramReadEn := true.B
      vramReadAddr := addr
      rdata := vram.read(addr, true.B)

    }.elsewhen(io.cpuAddress < 0xC000.U) {
      // External RAM (A000-BFFF)
      when(ramEnabled) {
        val addr = io.cpuAddress - 0xA000.U
        extRamReadEn := true.B
        extRamReadAddr := addr
        rdata := extRam.read(addr, true.B)
      }

    }.elsewhen(io.cpuAddress < 0xE000.U) {
      // WRAM (C000-DFFF)
      val addr = io.cpuAddress - 0xC000.U
      wramReadEn := true.B
      wramReadAddr := addr
      rdata := wram.read(addr, true.B)

    }.elsewhen(io.cpuAddress < 0xFE00.U) {
      // Echo RAM (E000-FDFF) - mirrors WRAM C000-DDFF
      val addr = io.cpuAddress - 0xE000.U
      wramReadEn := true.B
      wramReadAddr := addr
      rdata := wram.read(addr, true.B)

    }.elsewhen(io.cpuAddress < 0xFEA0.U) {
      // OAM (FE00-FE9F)
      val addr = io.cpuAddress - 0xFE00.U
      oamReadEn := true.B
      oamReadAddr := addr
      rdata := oam.read(addr, true.B)

    }.elsewhen(io.cpuAddress < 0xFF00.U) {
      // Unusable (FEA0-FEFF)
      rdata := 0xFF.U

    }.elsewhen(io.cpuAddress < 0xFF80.U) {
      // I/O Registers (FF00-FF7F) - delegate to IORegisters module
      val ioAddr = io.cpuAddress - 0xFF00.U

      // Always set ioRegs interface
      ioRegs.io.addr := ioAddr
      ioRegs.io.write := false.B
      ioRegs.io.writeData := 0.U

      // Special case: LY register reads from PPU
      when(ioAddr === 0x44.U) {
        rdata := io.ppuLY
      }.otherwise {
        rdata := ioRegs.io.readData
      }

    }.elsewhen(io.cpuAddress < 0xFFFF.U) {
      // HRAM (FF80-FFFE)
      val addr = io.cpuAddress - 0xFF80.U
      rdata := hram(addr)

    }.otherwise {
      // IE Register (FFFF)
      rdata := regIE
    }
  }

  io.cpuReadData := rdata

  // ============================================================
  // WRITE PATH
  // ============================================================
  when(io.cpuWrite) {
    when(io.cpuAddress < 0x2000.U) {
      // RAM Enable (0000-1FFF) - MBC register
      ramEnabled := (io.cpuWriteData & 0x0F.U) === 0x0A.U

    }.elsewhen(io.cpuAddress < 0x4000.U) {
      // ROM Bank Number (2000-3FFF) - MBC register
      val bank = io.cpuWriteData & 0x1F.U
      romBankNumber := Mux(bank === 0.U, 1.U, bank)

    }.elsewhen(io.cpuAddress < 0x6000.U) {
      // RAM Bank Number (4000-5FFF) - MBC register
      ramBankNumber := io.cpuWriteData & 0x03.U

    }.elsewhen(io.cpuAddress < 0x8000.U) {
      // Banking Mode Select (6000-7FFF) - MBC register
      // Not implemented for basic MBC1

    }.elsewhen(io.cpuAddress < 0xA000.U) {
      // VRAM (8000-9FFF)
      val addr = io.cpuAddress - 0x8000.U
      vram.write(addr, io.cpuWriteData)

    }.elsewhen(io.cpuAddress < 0xC000.U) {
      // External RAM (A000-BFFF)
      when(ramEnabled) {
        val addr = io.cpuAddress - 0xA000.U
        extRam.write(addr, io.cpuWriteData)
      }

    }.elsewhen(io.cpuAddress < 0xE000.U) {
      // WRAM (C000-DFFF)
      val addr = io.cpuAddress - 0xC000.U
      wram.write(addr, io.cpuWriteData)

    }.elsewhen(io.cpuAddress < 0xFE00.U) {
      // Echo RAM (E000-FDFF) - mirrors WRAM
      val addr = io.cpuAddress - 0xE000.U
      wram.write(addr, io.cpuWriteData)

    }.elsewhen(io.cpuAddress < 0xFEA0.U) {
      // OAM (FE00-FE9F)
      val addr = io.cpuAddress - 0xFE00.U
      oam.write(addr, io.cpuWriteData)

    }.elsewhen(io.cpuAddress < 0xFF00.U) {
      // Unusable (FEA0-FEFF) - writes ignored

    }.elsewhen(io.cpuAddress < 0xFF80.U) {
      // I/O Registers (FF00-FF7F) - delegate to IORegisters module
      val ioAddr = io.cpuAddress - 0xFF00.U
      ioRegs.io.addr := ioAddr
      ioRegs.io.write := true.B
      ioRegs.io.writeData := io.cpuWriteData

    }.elsewhen(io.cpuAddress < 0xFFFF.U) {
      // HRAM (FF80-FFFE)
      val addr = io.cpuAddress - 0xFF80.U
      hram(addr) := io.cpuWriteData

    }.otherwise {
      // IE Register (FFFF)
      regIE := io.cpuWriteData
    }
  }

  // ============================================================
  // PPU VRAM/OAM ACCESS (for future PPU integration)
  // ============================================================
  io.ppuVramData := vram.read(io.ppuVramAddr, io.ppuVramRead)
  io.ppuOamData := oam.read(io.ppuOamAddr, io.ppuOamRead)

  // ============================================================
  // INTERRUPT REGISTERS OUTPUT
  // ============================================================
  io.ieReg := regIE
  io.ifReg := ioRegs.io.ifReg  // Fixed: Get IF from IORegisters module

  // ============================================================
  // PPU CONTROL REGISTERS OUTPUT
  // ============================================================
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
}