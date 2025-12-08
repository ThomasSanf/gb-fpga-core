package top

import chisel3._
import cpu.LR35902_Core
import memory.MemoryMap
import ppu.MinimalPPU

/**
 * Complete Game Boy SoC - Ready to run .gb ROMs
 *
 * Components:
 * - LR35902 CPU (with boot ROM bypass)
 * - Complete memory map
 * - Minimal PPU (VBLANK generation)
 * - I/O register stubs
 * - Interrupt controller
 */
class GameBoySoC(romSize: Int, romPath: String) extends Module {
  val io = IO(new Bundle {
    // Debug outputs
    val dbg_pc     = Output(UInt(16.W))
    val dbg_opcode = Output(UInt(8.W))

    val dbg_a = Output(UInt(8.W))
    val dbg_f = Output(UInt(8.W))
    val dbg_b = Output(UInt(8.W))
    val dbg_c = Output(UInt(8.W))
    val dbg_d = Output(UInt(8.W))
    val dbg_e = Output(UInt(8.W))
    val dbg_h = Output(UInt(8.W))
    val dbg_l = Output(UInt(8.W))

    val dbg_state  = Output(UInt(8.W))
    val dbg_tcycle = Output(UInt(8.W))
    val dbg_mcycle = Output(UInt(8.W))
    val dbg_IR     = Output(UInt(8.W))

    // PPU debug
    val dbg_ly     = Output(UInt(8.W))
  })

  // ================================
  // Instantiate CPU
  // ================================
  val cpu = Module(new LR35902_Core)

  // ================================
  // Instantiate Minimal PPU
  // ================================
  val ppu = Module(new MinimalPPU)

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
  memory.io.ppuVramAddr := 0.U
  memory.io.ppuVramRead := false.B
  memory.io.ppuOamAddr  := 0.U
  memory.io.ppuOamRead  := false.B

  // PPU registers
  memory.io.ppuLY := ppu.io.lyReg
  memory.io.ppuVblankIRQ := ppu.io.vblankIRQ
  memory.io.ppuLcdStatIRQ := ppu.io.lcdStatIRQ

  // ================================
  // Debug passthrough
  // ================================
  io.dbg_pc     := cpu.io.dbg_pc
  io.dbg_opcode := cpu.io.dbg_opcode

  io.dbg_a := cpu.io.dbg_a
  io.dbg_f := cpu.io.dbg_f
  io.dbg_b := cpu.io.dbg_b
  io.dbg_c := cpu.io.dbg_c
  io.dbg_d := cpu.io.dbg_d
  io.dbg_e := cpu.io.dbg_e
  io.dbg_h := cpu.io.dbg_h
  io.dbg_l := cpu.io.dbg_l

  io.dbg_state  := cpu.io.dbg_state
  io.dbg_tcycle := cpu.io.dbg_tcycle
  io.dbg_mcycle := cpu.io.dbg_mcycle
  io.dbg_IR     := cpu.io.dbg_IR

  io.dbg_ly := ppu.io.lyReg
}