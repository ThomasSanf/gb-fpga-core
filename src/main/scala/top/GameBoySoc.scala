package top

import chisel3._
import cpu.LR35902_Core
import memory.MemoryMap
import ppu.PPU

/**
 * Game Boy SoC with Full PPU and Display Output
 *
 * This version exposes pixel data for Verilator+SDL visualization
 */
class GameBoySoC(romSize: Int, romPath: String) extends Module {
  val io = IO(new Bundle {
    // Debug outputs
    val dbg_pc     = Output(UInt(16.W))
    val dbg_opcode = Output(UInt(8.W))
    val dbg_a      = Output(UInt(8.W))
    val dbg_f      = Output(UInt(8.W))
    val dbg_b      = Output(UInt(8.W))
    val dbg_c      = Output(UInt(8.W))
    val dbg_d      = Output(UInt(8.W))
    val dbg_e      = Output(UInt(8.W))
    val dbg_h      = Output(UInt(8.W))
    val dbg_l      = Output(UInt(8.W))
    val dbg_state  = Output(UInt(8.W))
    val dbg_tcycle = Output(UInt(8.W))
    val dbg_mcycle = Output(UInt(8.W))
    val dbg_IR     = Output(UInt(8.W))
    val dbg_ly     = Output(UInt(8.W))

    // *** NEW: External ROM loader pins ***
    val extRomLoadAddr = Input(UInt(32.W))
    val extRomLoadData = Input(UInt(8.W))
    val extRomLoadEn   = Input(Bool())

    // PPU Pixel Output for SDL
    val pixelValid = Output(Bool())
    val pixelX     = Output(UInt(8.W))
    val pixelY     = Output(UInt(8.W))
    val pixelColor = Output(UInt(2.W))
  })

  // ================================
  // Instantiate CPU
  // ================================
  val cpu = Module(new LR35902_Core)

  // ================================
  // Instantiate FULL PPU
  // ================================
  val ppu = Module(new PPU)

  // ================================
  // Instantiate Memory Map
  // ================================
  val memory = Module(new MemoryMap(romSize, romPath))

  // ================================
  // CPU ↔ Memory wiring
  // ================================
  memory.io.cpuAddress   := cpu.io.memAddr
  memory.io.cpuRead      := cpu.io.memRead
  memory.io.cpuWrite     := cpu.io.memWrite
  memory.io.cpuWriteData := cpu.io.memWriteData
  cpu.io.memReadData     := memory.io.cpuReadData

  // ================================
  // Interrupt registers
  // ================================
  cpu.io.ieReg := memory.io.ieReg
  cpu.io.ifReg := memory.io.ifReg

  // ================================
  // PPU ↔ Memory wiring
  // ================================
  memory.io.ppuVramAddr := ppu.io.vramAddr
  memory.io.ppuVramRead := ppu.io.vramRead
  ppu.io.vramData       := memory.io.ppuVramData

  memory.io.ppuOamAddr  := ppu.io.oamAddr
  memory.io.ppuOamRead  := ppu.io.oamRead
  ppu.io.oamData        := memory.io.ppuOamData

  // PPU control registers from memory
  ppu.io.lcdc := memory.io.ppuLcdc
  ppu.io.stat := memory.io.ppuStat
  ppu.io.scy  := memory.io.ppuScy
  ppu.io.scx  := memory.io.ppuScx
  ppu.io.lyc  := memory.io.ppuLyc
  ppu.io.bgp  := memory.io.ppuBgp
  ppu.io.obp0 := memory.io.ppuObp0
  ppu.io.obp1 := memory.io.ppuObp1
  ppu.io.wy   := memory.io.ppuWy
  ppu.io.wx   := memory.io.ppuWx

  // PPU outputs to memory
  memory.io.ppuLY        := ppu.io.ly
  memory.io.ppuVblankIRQ := ppu.io.vblankIRQ
  memory.io.ppuLcdStatIRQ := ppu.io.lcdStatIRQ

  // ================================
  // *** NEW: External ROM loader wiring ***
  // ================================
  memory.io.extRomLoadAddr := io.extRomLoadAddr
  memory.io.extRomLoadData := io.extRomLoadData
  memory.io.extRomLoadEn   := io.extRomLoadEn

  // ================================
  // Expose Pixel Output
  // ================================
  io.pixelValid := ppu.io.pixelValid
  io.pixelX     := ppu.io.pixelX
  io.pixelY     := ppu.io.pixelY
  io.pixelColor := ppu.io.pixelColor

  // ================================
  // Debug passthrough
  // ================================
  io.dbg_pc     := cpu.io.dbg_pc
  io.dbg_opcode := cpu.io.dbg_opcode
  io.dbg_a      := cpu.io.dbg_a
  io.dbg_f      := cpu.io.dbg_f
  io.dbg_b      := cpu.io.dbg_b
  io.dbg_c      := cpu.io.dbg_c
  io.dbg_d      := cpu.io.dbg_d
  io.dbg_e      := cpu.io.dbg_e
  io.dbg_h      := cpu.io.dbg_h
  io.dbg_l      := cpu.io.dbg_l
  io.dbg_state  := cpu.io.dbg_state
  io.dbg_tcycle := cpu.io.dbg_tcycle
  io.dbg_mcycle := cpu.io.dbg_mcycle
  io.dbg_IR     := cpu.io.dbg_IR
  io.dbg_ly     := ppu.io.ly
}
