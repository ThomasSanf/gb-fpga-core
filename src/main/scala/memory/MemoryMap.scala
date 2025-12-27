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

  // ============================================================
  // DEBUG ROM PEEK (read-only, no side effects)
  // ============================================================
  val dbgAddr     = Input(UInt(16.W))
  val dbgReadData = Output(Vec(4, UInt(8.W)))

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
  // TIMER
  // ============================================================
  val timer = Module(new Timer)
  timer.io.enable := false.B  // will be set when accessing timer registers
  timer.io.addr := 0.U
  timer.io.read := false.B
  timer.io.write := false.B
  timer.io.wdata := 0.U
  timer.io.tick := true.B  // You'll need to connect this to your clock divider

  // Connect timer IRQ to IO registers
  ioRegs.io.timerIRQ := timer.io.irq  // ← FIX: Connect the actual timer interrupt

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
  // DEBUG ROM LOOKAHEAD (PC, PC+1, PC+2, PC+3)
  // NOTE: debug reads ONLY cartridge ROM (no Boot ROM)
  // ============================================================
  for (i <- 0 until 4) {
    val a = io.dbgAddr + i.U

    when(a < "h8000".U) {
      // Cartridge ROM
      val ra =
        if (romAddrWidth < 16) a(romAddrWidth - 1, 0)
        else a
      io.dbgReadData(i) := rom(ra)

    }.elsewhen(a >= "hC000".U && a < "hD000".U) {
        // BLARGG ROM MIRROR: ROM[4000–4FFF] → C000–CFFF
        io.dbgReadData(i) := rom((a - "hC000".U) + "h4000".U)

      }.elsewhen(a >= "hD000".U && a < "hE000".U) {
        // REAL WRAM
        io.dbgReadData(i) := wram(a - "hC000".U)
      }
      .elsewhen(a >= "hE000".U && a < "hFE00".U) {
      // WRAM mirror
      io.dbgReadData(i) := wram(a - "hE000".U)

    }.otherwise {
      // Anything else → unknown / not relevant for instruction fetch
      io.dbgReadData(i) := "h00".U
    }
  }

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
    when(ioAddr >= "h04".U && ioAddr <= "h07".U) {
      timer.io.enable := true.B
      timer.io.addr := ioAddr - "h04".U
      timer.io.read := true.B
      rdata := timer.io.rdata
    }.elsewhen(ioAddr === "h44".U) {
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
      // Add timer handling
      when(ioAddr >= "h04".U && ioAddr <= "h07".U) {
        timer.io.enable := true.B
        timer.io.addr := ioAddr - "h04".U
        timer.io.write := true.B
        timer.io.wdata := io.cpuWriteData
      }.elsewhen(ioAddr === "h50".U) {
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
