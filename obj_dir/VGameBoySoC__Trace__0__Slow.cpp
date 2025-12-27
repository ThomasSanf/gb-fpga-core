// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGameBoySoC__Syms.h"


VL_ATTR_COLD void VGameBoySoC___024root__trace_init_sub__TOP__0(VGameBoySoC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+361,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+363,0,"io_dbg_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+364,0,"io_dbg_opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+365,0,"io_dbg_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+366,0,"io_dbg_f",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+367,0,"io_dbg_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+368,0,"io_dbg_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+369,0,"io_dbg_d",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+370,0,"io_dbg_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+371,0,"io_dbg_h",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+372,0,"io_dbg_l",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+373,0,"io_dbg_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+374,0,"io_dbg_tcycle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+375,0,"io_dbg_mcycle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+376,0,"io_dbg_IR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+377,0,"io_dbg_ly",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+378,0,"io_extRomLoadAddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"io_extRomLoadData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+380,0,"io_extRomLoadEn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"io_pixelValid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+382,0,"io_pixelX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+383,0,"io_pixelY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+384,0,"io_pixelColor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+385,0,"io_hblank",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"io_vblank",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"io_lcdEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("GameBoySoC", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+363,0,"io_dbg_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+364,0,"io_dbg_opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+365,0,"io_dbg_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+366,0,"io_dbg_f",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+367,0,"io_dbg_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+368,0,"io_dbg_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+369,0,"io_dbg_d",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+370,0,"io_dbg_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+371,0,"io_dbg_h",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+372,0,"io_dbg_l",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+373,0,"io_dbg_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+374,0,"io_dbg_tcycle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+375,0,"io_dbg_mcycle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+364,0,"io_dbg_IR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+377,0,"io_dbg_ly",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+378,0,"io_extRomLoadAddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"io_extRomLoadData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+380,0,"io_extRomLoadEn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"io_pixelValid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+382,0,"io_pixelX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+377,0,"io_pixelY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+384,0,"io_pixelColor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+385,0,"io_hblank",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"io_vblank",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"io_lcdEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"cpu_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"cpu_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"cpu_io_memAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2,0,"cpu_io_memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"cpu_io_memWriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"cpu_io_memReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"cpu_io_ieReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"cpu_io_ifReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+363,0,"cpu_io_dbg_pc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+364,0,"cpu_io_dbg_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+365,0,"cpu_io_dbg_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+366,0,"cpu_io_dbg_f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+367,0,"cpu_io_dbg_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+368,0,"cpu_io_dbg_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+369,0,"cpu_io_dbg_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+370,0,"cpu_io_dbg_e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+371,0,"cpu_io_dbg_h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+372,0,"cpu_io_dbg_l",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"cpu_io_dbgBytes_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"cpu_io_dbgBytes_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"cpu_io_dbgBytes_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"cpu_io_dbgBytes_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+373,0,"cpu_io_dbg_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+374,0,"cpu_io_dbg_tcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+375,0,"cpu_io_dbg_mcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+364,0,"cpu_io_dbg_IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+361,0,"ppu_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"ppu_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"ppu_io_vramAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+12,0,"ppu_io_vramRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"ppu_io_lcdc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"ppu_io_scy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"ppu_io_scx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+377,0,"ppu_io_ly",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"ppu_io_bgp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+17,0,"ppu_io_vblankIRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"ppu_io_pixelValid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+382,0,"ppu_io_pixelX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+377,0,"ppu_io_pixelY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+384,0,"ppu_io_pixelColor",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+385,0,"ppu_io_hblank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"ppu_io_vblank",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"ppu_io_lcdEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"memory_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"memory_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"memory_io_cpuAddress",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2,0,"memory_io_cpuWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"memory_io_cpuWriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"memory_io_cpuReadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+363,0,"memory_io_dbgAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"memory_io_dbgReadData_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"memory_io_dbgReadData_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"memory_io_dbgReadData_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"memory_io_dbgReadData_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"memory_io_ieReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"memory_io_ifReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+377,0,"memory_io_ppuLY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+17,0,"memory_io_ppuVblankIRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"memory_io_ppuLcdc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"memory_io_ppuScy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"memory_io_ppuScx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"memory_io_ppuBgp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+378,0,"memory_io_extRomLoadAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"memory_io_extRomLoadData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+380,0,"memory_io_extRomLoadEn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("cpu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"io_memAddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2,0,"io_memWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_memWriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"io_memReadData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"io_ieReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"io_ifReg",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+363,0,"io_dbg_pc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+364,0,"io_dbg_opcode",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+365,0,"io_dbg_a",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+366,0,"io_dbg_f",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+367,0,"io_dbg_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+368,0,"io_dbg_c",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+369,0,"io_dbg_d",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+370,0,"io_dbg_e",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+371,0,"io_dbg_h",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+372,0,"io_dbg_l",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"io_dbgBytes_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"io_dbgBytes_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"io_dbgBytes_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"io_dbgBytes_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+373,0,"io_dbg_state",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+374,0,"io_dbg_tcycle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+375,0,"io_dbg_mcycle",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+364,0,"io_dbg_IR",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"intr_io_IE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"intr_io_IF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+18,0,"intr_io_IME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"intr_io_should_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"intr_io_irq_vector",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+21,0,"intr_io_irq_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+22,0,"u_alu_io_op",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"u_alu_io_a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"u_alu_io_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+25,0,"u_alu_io_carryIn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"u_alu_io_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+27,0,"u_alu_io_flagZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"u_alu_io_flagN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"u_alu_io_flagH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"u_alu_io_flagC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+32,0,"F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,0,"B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+34,0,"C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+35,0,"D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+36,0,"E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+37,0,"H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+38,0,"L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+39,0,"PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+40,0,"SP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+41,0,"IR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+42,0,"IR2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+43,0,"imm8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+44,0,"imm16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+45,0,"CB_imm8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+18,0,"IME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"IME_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"PC_sampled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+48,0,"SP_sampled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+49,0,"A_sampled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+50,0,"F_sampled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+51,0,"B_sampled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+52,0,"C_sampled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+53,0,"D_sampled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+54,0,"E_sampled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+55,0,"H_sampled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+56,0,"L_sampled",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+57,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+58,0,"tcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+59,0,"mcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+60,0,"canTakeInterrupt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"irqVectorLatched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+62,0,"irqIndexLatched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+63,0,"u_tmp8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+64,0,"u_HL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+65,0,"u_rr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+66,0,"u_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+67,0,"u_result_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+68,0,"u_operand",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+69,0,"u_result_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+70,0,"u_halfCarry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"u_oldVal",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+72,0,"u_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+43,0,"u_off",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+73,0,"u_regPair",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+74,0,"u_vec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+75,0,"u_cc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+76,0,"u_condition",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"u_N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"u_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+79,0,"u_upperCorrect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+80,0,"u_lowerCorrect",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+81,0,"u_upperCorrect_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+82,0,"u_lowerCorrect_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+83,0,"u_correction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+84,0,"u_newCarry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"u_adjusted",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+86,0,"u_newC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"u_newA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+88,0,"u_newC_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+89,0,"u_newA_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+90,0,"u_offset_signed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+91,0,"u_lower_sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBit(c+92,0,"u_hc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"u_cy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"u__done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"u__C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+96,0,"u__B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+97,0,"u__E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+98,0,"u__D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+99,0,"u__L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+100,0,"u__H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+101,0,"u__SP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+102,0,"u__F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+103,0,"u__A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,0,"u__next_mcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+105,0,"u__PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+106,0,"u__IME",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"u__IME_pending",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+108,0,"state_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+109,0,"mcycle_prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+110,0,"haltActive",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"nextPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+112,0,"isLDrImm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+113,0,"needsImm8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"needsImm16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"cbOut_group",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+116,0,"cbOut_bitIdx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+117,0,"cbOut_regIdx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+118,0,"cbOut_isHL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"cbOut_c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"cbOut_c_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+121,0,"cbOut_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+122,0,"cbOut_flagC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"cbOut_flagZ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"cbOut_flagN",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"cbOut_flagH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+126,0,"cbOut_F",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+127,0,"cbOut_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+128,0,"cbOut_C",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+129,0,"cbOut_D",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+130,0,"cbOut_E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+131,0,"cbOut_H",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+132,0,"cbOut_L",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+133,0,"cbOut_A",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+134,0,"cbOut_imm8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+135,0,"cbOut_next_mcycle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+136,0,"cbOut_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"mcBus_memAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+138,0,"mcBus_memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"mcBus_memWriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("intr", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"io_IE",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"io_IF",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+18,0,"io_IME",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"io_should_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+20,0,"io_irq_vector",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+21,0,"io_irq_index",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+140,0,"active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+141,0,"anyActive",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("u_alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+22,0,"io_op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+23,0,"io_a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+24,0,"io_b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+25,0,"io_carryIn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+26,0,"io_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+27,0,"io_flagZ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"io_flagN",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"io_flagH",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+30,0,"io_flagC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+142,0,"a9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+143,0,"b9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+144,0,"sum9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+145,0,"sumc9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+146,0,"diff9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+147,0,"diffc9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+148,0,"io_flagH_aNib",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+149,0,"io_flagH_bNib",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+150,0,"r",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+151,0,"r_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+152,0,"r_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+153,0,"r_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+154,0,"r_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("memory", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"io_cpuAddress",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+2,0,"io_cpuWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_cpuWriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"io_cpuReadData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+363,0,"io_dbgAddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+7,0,"io_dbgReadData_0",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,0,"io_dbgReadData_1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,0,"io_dbgReadData_2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,0,"io_dbgReadData_3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"io_ieReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"io_ifReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+377,0,"io_ppuLY",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+17,0,"io_ppuVblankIRQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"io_ppuLcdc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"io_ppuScy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"io_ppuScx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"io_ppuBgp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+378,0,"io_extRomLoadAddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+379,0,"io_extRomLoadData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+380,0,"io_extRomLoadEn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"ioRegs_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"ioRegs_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"ioRegs_io_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+156,0,"ioRegs_io_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"ioRegs_io_writeData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+158,0,"ioRegs_io_readData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"ioRegs_io_ifReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+17,0,"ioRegs_io_vblankIRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"ioRegs_io_timerIRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"ioRegs_io_ppuLcdc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"ioRegs_io_ppuScy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"ioRegs_io_ppuScx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+377,0,"ioRegs_io_ppuLy",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"ioRegs_io_ppuBgp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+361,0,"timer_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"timer_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"timer_io_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"timer_io_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+162,0,"timer_io_write",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"timer_io_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"timer_io_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+159,0,"timer_io_irq",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+389,0,"rom_cartRomOut_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"rom_cartRomOut_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+165,0,"rom_cartRomOut_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+166,0,"rom_io_dbgReadData_0_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+363,0,"rom_io_dbgReadData_0_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+167,0,"rom_io_dbgReadData_0_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+168,0,"rom_io_dbgReadData_0_MPORT_1_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"rom_io_dbgReadData_0_MPORT_1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+170,0,"rom_io_dbgReadData_0_MPORT_1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+171,0,"rom_io_dbgReadData_1_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+111,0,"rom_io_dbgReadData_1_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+172,0,"rom_io_dbgReadData_1_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+173,0,"rom_io_dbgReadData_1_MPORT_1_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+174,0,"rom_io_dbgReadData_1_MPORT_1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+175,0,"rom_io_dbgReadData_1_MPORT_1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+176,0,"rom_io_dbgReadData_2_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+177,0,"rom_io_dbgReadData_2_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+178,0,"rom_io_dbgReadData_2_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+179,0,"rom_io_dbgReadData_2_MPORT_1_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+180,0,"rom_io_dbgReadData_2_MPORT_1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+181,0,"rom_io_dbgReadData_2_MPORT_1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+182,0,"rom_io_dbgReadData_3_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+183,0,"rom_io_dbgReadData_3_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+184,0,"rom_io_dbgReadData_3_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+185,0,"rom_io_dbgReadData_3_MPORT_1_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"rom_io_dbgReadData_3_MPORT_1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+187,0,"rom_io_dbgReadData_3_MPORT_1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+188,0,"rom_rdata_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+189,0,"rom_rdata_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+190,0,"rom_rdata_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+379,0,"rom_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+388,0,"rom_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+389,0,"rom_MPORT_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+380,0,"rom_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+191,0,"wram_io_dbgReadData_0_MPORT_2_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,0,"wram_io_dbgReadData_0_MPORT_2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+193,0,"wram_io_dbgReadData_0_MPORT_2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+194,0,"wram_io_dbgReadData_0_MPORT_3_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+192,0,"wram_io_dbgReadData_0_MPORT_3_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+193,0,"wram_io_dbgReadData_0_MPORT_3_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+195,0,"wram_io_dbgReadData_1_MPORT_2_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"wram_io_dbgReadData_1_MPORT_2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+197,0,"wram_io_dbgReadData_1_MPORT_2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+198,0,"wram_io_dbgReadData_1_MPORT_3_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+196,0,"wram_io_dbgReadData_1_MPORT_3_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+197,0,"wram_io_dbgReadData_1_MPORT_3_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+199,0,"wram_io_dbgReadData_2_MPORT_2_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+200,0,"wram_io_dbgReadData_2_MPORT_2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+201,0,"wram_io_dbgReadData_2_MPORT_2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+202,0,"wram_io_dbgReadData_2_MPORT_3_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+200,0,"wram_io_dbgReadData_2_MPORT_3_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+201,0,"wram_io_dbgReadData_2_MPORT_3_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+203,0,"wram_io_dbgReadData_3_MPORT_2_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"wram_io_dbgReadData_3_MPORT_2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+205,0,"wram_io_dbgReadData_3_MPORT_2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+206,0,"wram_io_dbgReadData_3_MPORT_3_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+204,0,"wram_io_dbgReadData_3_MPORT_3_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+205,0,"wram_io_dbgReadData_3_MPORT_3_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+207,0,"wram_rdata_MPORT_1_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+208,0,"wram_rdata_MPORT_1_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+209,0,"wram_rdata_MPORT_1_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+210,0,"wram_rdata_MPORT_2_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+208,0,"wram_rdata_MPORT_2_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+209,0,"wram_rdata_MPORT_2_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"wram_MPORT_3_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+208,0,"wram_MPORT_3_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+389,0,"wram_MPORT_3_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+211,0,"wram_MPORT_3_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"wram_MPORT_4_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+208,0,"wram_MPORT_4_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+389,0,"wram_MPORT_4_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+212,0,"wram_MPORT_4_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+213,0,"oam_rdata_MPORT_3_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+214,0,"oam_rdata_MPORT_3_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+215,0,"oam_rdata_MPORT_3_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+389,0,"oam_io_ppuOamData_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+390,0,"oam_io_ppuOamData_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+216,0,"oam_io_ppuOamData_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"oam_MPORT_5_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+214,0,"oam_MPORT_5_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+389,0,"oam_MPORT_5_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+217,0,"oam_MPORT_5_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+218,0,"hram_rdata_MPORT_4_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+219,0,"hram_rdata_MPORT_4_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+220,0,"hram_rdata_MPORT_4_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"hram_MPORT_6_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+219,0,"hram_MPORT_6_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+389,0,"hram_MPORT_6_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+221,0,"hram_MPORT_6_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"regIE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+363,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+111,0,"a_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+177,0,"a_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+183,0,"a_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+222,0,"ioAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->pushPrefix("ioRegs", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+155,0,"io_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+156,0,"io_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+157,0,"io_writeData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+158,0,"io_readData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"io_ifReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+17,0,"io_vblankIRQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+159,0,"io_timerIRQ",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"io_ppuLcdc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"io_ppuScy",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"io_ppuScx",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+377,0,"io_ppuLy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"io_ppuBgp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+223,0,"regP1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+224,0,"regSB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+225,0,"regSC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+6,0,"regIF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+226,0,"regNR10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+227,0,"regNR11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+228,0,"regNR12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+229,0,"regNR13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+230,0,"regNR14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+231,0,"regNR21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+232,0,"regNR22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+233,0,"regNR23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+234,0,"regNR24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+235,0,"regNR30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+236,0,"regNR31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+237,0,"regNR32",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+238,0,"regNR33",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+239,0,"regNR34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+240,0,"regNR41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+241,0,"regNR42",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+242,0,"regNR43",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+243,0,"regNR44",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+244,0,"regNR50",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+245,0,"regNR51",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+246,0,"regNR52",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+13,0,"regLCDC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+247,0,"regSTAT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"regSCY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"regSCX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+248,0,"regLYC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+249,0,"regDMA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"regBGP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+250,0,"regOBP0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+251,0,"regOBP1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+252,0,"regWY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+253,0,"regWX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+254,0,"regBOOT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("timer", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+160,0,"io_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+161,0,"io_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+162,0,"io_write",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+163,0,"io_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+164,0,"io_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+159,0,"io_irq",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+255,0,"div",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+256,0,"tima",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+257,0,"tma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+258,0,"tac",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+259,0,"freqBit",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+260,0,"prev",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+261,0,"edge_",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ppu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"io_vramAddr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+12,0,"io_vramRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"io_lcdc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,0,"io_scy",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+15,0,"io_scx",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+377,0,"io_ly",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+16,0,"io_bgp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+17,0,"io_vblankIRQ",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+381,0,"io_pixelValid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+382,0,"io_pixelX",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+377,0,"io_pixelY",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+384,0,"io_pixelColor",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+385,0,"io_hblank",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+386,0,"io_vblank",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+387,0,"io_lcdEnable",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+361,0,"vram_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"vram_io_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+12,0,"vram_io_read",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"vram_io_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+361,0,"pixelFIFO_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"pixelFIFO_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"pixelFIFO_io_pushEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+264,0,"pixelFIFO_io_pushPixels_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+265,0,"pixelFIFO_io_pushPixels_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+266,0,"pixelFIFO_io_pushPixels_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+267,0,"pixelFIFO_io_pushPixels_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+268,0,"pixelFIFO_io_pushPixels_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+269,0,"pixelFIFO_io_pushPixels_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+270,0,"pixelFIFO_io_pushPixels_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+271,0,"pixelFIFO_io_pushPixels_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+272,0,"pixelFIFO_io_popEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"pixelFIFO_io_outPixel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+274,0,"pixelFIFO_io_hasData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"pixelFIFO_io_size",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+276,0,"pixelFIFO_io_clear",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+277,0,"dotCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+278,0,"lyReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+387,0,"lcdEnable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"vblankIRQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+279,0,"bgWindowTiles",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+280,0,"bgTileMap",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+281,0,"fetcherState",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+282,0,"fetcherX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+283,0,"tileNum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+284,0,"tileDataLow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+285,0,"tileDataHigh",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+286,0,"xPos",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+287,0,"discardPixels",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+288,0,"mode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+289,0,"mapBase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+290,0,"scrolledY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+291,0,"scrolledX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+292,0,"tileY",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+293,0,"tileX",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+294,0,"mapAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+295,0,"tileDataBase",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+296,0,"tileIndex",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8,0);
    tracep->declBus(c+297,0,"pixelRow",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+298,0,"tileAddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBus(c+299,0,"tileAddr_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 13,0);
    tracep->declBit(c+300,0,"lo",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"hi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"px_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+303,0,"lo_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+304,0,"hi_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+305,0,"lo_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+306,0,"hi_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+307,0,"lo_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+308,0,"hi_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+309,0,"lo_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+310,0,"hi_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+311,0,"lo_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+312,0,"hi_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+313,0,"lo_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+314,0,"hi_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+315,0,"lo_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+316,0,"hi_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+303,0,"px_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+317,0,"px_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+318,0,"px_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+319,0,"px_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+320,0,"px_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+321,0,"px_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+322,0,"px_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+323,0,"palShift",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+324,0,"palPx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("pixelFIFO", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+362,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+263,0,"io_pushEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+264,0,"io_pushPixels_0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+265,0,"io_pushPixels_1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+266,0,"io_pushPixels_2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+267,0,"io_pushPixels_3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+268,0,"io_pushPixels_4",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+269,0,"io_pushPixels_5",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+270,0,"io_pushPixels_6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+271,0,"io_pushPixels_7",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+272,0,"io_popEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+273,0,"io_outPixel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+274,0,"io_hasData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+275,0,"io_size",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+276,0,"io_clear",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+325,0,"fifo_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+326,0,"fifo_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+327,0,"fifo_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+328,0,"fifo_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+329,0,"fifo_4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+330,0,"fifo_5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+331,0,"fifo_6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+332,0,"fifo_7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+333,0,"fifo_8",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+334,0,"fifo_9",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+335,0,"fifo_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+336,0,"fifo_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+337,0,"fifo_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+338,0,"fifo_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+339,0,"fifo_14",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+340,0,"fifo_15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+341,0,"fifo_16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+342,0,"fifo_17",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+343,0,"fifo_18",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+344,0,"fifo_19",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+345,0,"fifo_20",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+346,0,"fifo_21",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+347,0,"fifo_22",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+348,0,"fifo_23",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+349,0,"fifo_24",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+350,0,"fifo_25",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+351,0,"fifo_26",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+352,0,"fifo_27",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+353,0,"fifo_28",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+354,0,"fifo_29",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+355,0,"fifo_30",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+356,0,"fifo_31",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+357,0,"head",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+358,0,"tail",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+275,0,"count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("vram", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+361,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"io_addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+12,0,"io_read",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+262,0,"io_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+359,0,"mem_io_rdata_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+360,0,"mem_io_rdata_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+262,0,"mem_io_rdata_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+390,0,"mem_MPORT_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+11,0,"mem_MPORT_addr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBit(c+389,0,"mem_MPORT_mask",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+391,0,"mem_MPORT_en",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+359,0,"mem_io_rdata_MPORT_en_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+360,0,"mem_io_rdata_MPORT_addr_pipe_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VGameBoySoC___024root__trace_init_top(VGameBoySoC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root__trace_init_top\n"); );
    // Body
    VGameBoySoC___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VGameBoySoC___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VGameBoySoC___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VGameBoySoC___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VGameBoySoC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VGameBoySoC___024root__trace_register(VGameBoySoC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VGameBoySoC___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VGameBoySoC___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VGameBoySoC___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VGameBoySoC___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VGameBoySoC___024root__trace_const_0_sub_0(VGameBoySoC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VGameBoySoC___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root__trace_const_0\n"); );
    // Init
    VGameBoySoC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VGameBoySoC___024root*>(voidSelf);
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VGameBoySoC___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VGameBoySoC___024root__trace_const_0_sub_0(VGameBoySoC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+389,(1U));
    bufp->fullCData(oldp+390,(0U),8);
    bufp->fullBit(oldp+391,(0U));
}

VL_ATTR_COLD void VGameBoySoC___024root__trace_full_0_sub_0(VGameBoySoC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VGameBoySoC___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root__trace_full_0\n"); );
    // Init
    VGameBoySoC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VGameBoySoC___024root*>(voidSelf);
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VGameBoySoC___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VGameBoySoC___024root__trace_full_0_sub_0(VGameBoySoC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr),16);
    bufp->fullBit(oldp+2,(vlSelf->GameBoySoC__DOT__cpu_io_memWrite));
    bufp->fullCData(oldp+3,(vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data),8);
    bufp->fullCData(oldp+4,(vlSelf->GameBoySoC__DOT__cpu_io_memReadData),8);
    bufp->fullCData(oldp+5,(vlSelf->GameBoySoC__DOT__memory__DOT__regIE),8);
    bufp->fullCData(oldp+6,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF),8);
    bufp->fullCData(oldp+7,(((0x8000U > (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))
                              ? vlSelf->GameBoySoC__DOT__memory__DOT__rom
                             [vlSelf->GameBoySoC__DOT__cpu__DOT__PC]
                              : ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_4)
                                  ? vlSelf->GameBoySoC__DOT__memory__DOT__rom
                                 [(0xffffU & ((IData)(0x4000U) 
                                              + ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC) 
                                                 - (IData)(0xc000U))))]
                                  : ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_7)
                                      ? vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                     [(0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))]
                                      : ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_10)
                                          ? vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                         [(0x1fffU 
                                           & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))]
                                          : 0U))))),8);
    bufp->fullCData(oldp+8,(((0x8000U > (0xffffU & 
                                         ((IData)(1U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))))
                              ? vlSelf->GameBoySoC__DOT__memory__DOT__rom
                             [(0xffffU & ((IData)(1U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                              : ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_14)
                                  ? vlSelf->GameBoySoC__DOT__memory__DOT__rom
                                 [(0xffffU & ((IData)(0x8001U) 
                                              + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                                  : ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_17)
                                      ? vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                     [(0x1fffU & ((IData)(1U) 
                                                  + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                                      : ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_20)
                                          ? vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                         [(0x1fffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                                          : 0U))))),8);
    bufp->fullCData(oldp+9,(((0x8000U > (0xffffU & 
                                         ((IData)(2U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))))
                              ? vlSelf->GameBoySoC__DOT__memory__DOT__rom
                             [(0xffffU & ((IData)(2U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                              : ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_24)
                                  ? vlSelf->GameBoySoC__DOT__memory__DOT__rom
                                 [(0xffffU & ((IData)(0x8002U) 
                                              + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                                  : ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_27)
                                      ? vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                     [(0x1fffU & ((IData)(2U) 
                                                  + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                                      : ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_30)
                                          ? vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                         [(0x1fffU 
                                           & ((IData)(2U) 
                                              + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                                          : 0U))))),8);
    bufp->fullCData(oldp+10,(((0x8000U > (0xffffU & 
                                          ((IData)(3U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))))
                               ? vlSelf->GameBoySoC__DOT__memory__DOT__rom
                              [(0xffffU & ((IData)(3U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                               : ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_34)
                                   ? vlSelf->GameBoySoC__DOT__memory__DOT__rom
                                  [(0xffffU & ((IData)(0x8003U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                                   : ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_37)
                                       ? vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                      [(0x1fffU & ((IData)(3U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                                       : ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_40)
                                           ? vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                          [(0x1fffU 
                                            & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                                           : 0U))))),8);
    bufp->fullSData(oldp+11,(((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT____VdfgTmp_ha309eb35__0)
                               ? (0x1fffU & ((0U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))
                                              ? (((
                                                   (8U 
                                                    & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC))
                                                    ? 0x1c00U
                                                    : 0x1800U) 
                                                  + 
                                                  (0x7ffU 
                                                   & VL_SHIFTL_III(11,11,32, 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__scrolledY) 
                                                                       >> 3U)), 5U))) 
                                                 + 
                                                 (0x1fU 
                                                  & (((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX) 
                                                      + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX)) 
                                                     >> 3U)))
                                              : ((2U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileAddr)
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))
                                                     ? 
                                                    ((IData)(1U) 
                                                     + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileAddr))
                                                     : 0U))))))
                               : 0U)),13);
    bufp->fullBit(oldp+12,(vlSelf->GameBoySoC__DOT__ppu__DOT__vram_io_read));
    bufp->fullCData(oldp+13,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC),8);
    bufp->fullCData(oldp+14,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY),8);
    bufp->fullCData(oldp+15,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX),8);
    bufp->fullCData(oldp+16,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP),8);
    bufp->fullBit(oldp+17,(vlSelf->GameBoySoC__DOT__ppu__DOT__vblankIRQ));
    bufp->fullBit(oldp+18,(vlSelf->GameBoySoC__DOT__cpu__DOT__IME));
    bufp->fullBit(oldp+19,(vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_should_irq));
    bufp->fullSData(oldp+20,(vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_irq_vector),16);
    bufp->fullCData(oldp+21,(vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_irq_index),3);
    bufp->fullCData(oldp+22,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op),4);
    bufp->fullCData(oldp+23,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_a),8);
    bufp->fullCData(oldp+24,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_b),8);
    bufp->fullBit(oldp+25,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn));
    bufp->fullCData(oldp+26,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out),8);
    bufp->fullBit(oldp+27,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ));
    bufp->fullBit(oldp+28,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_flagN));
    bufp->fullBit(oldp+29,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_flagH));
    bufp->fullBit(oldp+30,((1U & ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op))
                                   ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sum9) 
                                      >> 8U) : ((1U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op))
                                                 ? 
                                                ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sumc9) 
                                                 >> 8U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagC_T_2)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op))
                                                   ? 
                                                  ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_a) 
                                                   < 
                                                   (0xffU 
                                                    & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_b) 
                                                       + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn))))
                                                   : 
                                                  ((4U 
                                                    != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                   & ((5U 
                                                       != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                      & ((6U 
                                                          != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                         & ((7U 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                            & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagC_T_2))))))))))));
    bufp->fullCData(oldp+31,(vlSelf->GameBoySoC__DOT__cpu__DOT__A),8);
    bufp->fullCData(oldp+32,(vlSelf->GameBoySoC__DOT__cpu__DOT__F),8);
    bufp->fullCData(oldp+33,(vlSelf->GameBoySoC__DOT__cpu__DOT__B),8);
    bufp->fullCData(oldp+34,(vlSelf->GameBoySoC__DOT__cpu__DOT__C),8);
    bufp->fullCData(oldp+35,(vlSelf->GameBoySoC__DOT__cpu__DOT__D),8);
    bufp->fullCData(oldp+36,(vlSelf->GameBoySoC__DOT__cpu__DOT__E),8);
    bufp->fullCData(oldp+37,(vlSelf->GameBoySoC__DOT__cpu__DOT__H),8);
    bufp->fullCData(oldp+38,(vlSelf->GameBoySoC__DOT__cpu__DOT__L),8);
    bufp->fullSData(oldp+39,(vlSelf->GameBoySoC__DOT__cpu__DOT__PC),16);
    bufp->fullSData(oldp+40,(vlSelf->GameBoySoC__DOT__cpu__DOT__SP),16);
    bufp->fullCData(oldp+41,(vlSelf->GameBoySoC__DOT__cpu__DOT__IR),8);
    bufp->fullCData(oldp+42,(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2),8);
    bufp->fullCData(oldp+43,(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8),8);
    bufp->fullSData(oldp+44,(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16),16);
    bufp->fullCData(oldp+45,(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8),8);
    bufp->fullBit(oldp+46,(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending));
    bufp->fullSData(oldp+47,(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled),16);
    bufp->fullSData(oldp+48,(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled),16);
    bufp->fullCData(oldp+49,(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled),8);
    bufp->fullCData(oldp+50,(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled),8);
    bufp->fullCData(oldp+51,(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled),8);
    bufp->fullCData(oldp+52,(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled),8);
    bufp->fullCData(oldp+53,(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled),8);
    bufp->fullCData(oldp+54,(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled),8);
    bufp->fullCData(oldp+55,(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled),8);
    bufp->fullCData(oldp+56,(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled),8);
    bufp->fullCData(oldp+57,(vlSelf->GameBoySoC__DOT__cpu__DOT__state),3);
    bufp->fullCData(oldp+58,(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle),2);
    bufp->fullCData(oldp+59,(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle),3);
    bufp->fullBit(oldp+60,(vlSelf->GameBoySoC__DOT__cpu__DOT__canTakeInterrupt));
    bufp->fullSData(oldp+61,(vlSelf->GameBoySoC__DOT__cpu__DOT__irqVectorLatched),16);
    bufp->fullCData(oldp+62,(vlSelf->GameBoySoC__DOT__cpu__DOT__irqIndexLatched),3);
    bufp->fullCData(oldp+63,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8),8);
    bufp->fullSData(oldp+64,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL),16);
    bufp->fullCData(oldp+65,((3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                    >> 4U))),4);
    bufp->fullSData(oldp+66,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_result),16);
    bufp->fullSData(oldp+67,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_result_1),16);
    bufp->fullSData(oldp+68,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_operand),16);
    bufp->fullSData(oldp+69,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_result_2),16);
    bufp->fullBit(oldp+70,((0xfffU < (0xffffU & ((0xfffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL)) 
                                                 + 
                                                 (0xfffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_operand)))))));
    bufp->fullCData(oldp+71,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_oldVal),8);
    bufp->fullSData(oldp+72,((0xff00U | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled))),16);
    bufp->fullSData(oldp+73,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_regPair),16);
    bufp->fullCData(oldp+74,((0x38U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))),8);
    bufp->fullCData(oldp+75,((3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                    >> 3U))),5);
    bufp->fullBit(oldp+76,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_condition));
    bufp->fullBit(oldp+77,((1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                  >> 6U))));
    bufp->fullBit(oldp+78,((1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                  >> 5U))));
    bufp->fullCData(oldp+79,(((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h54193848__0)
                               ? 0x60U : 0U)),8);
    bufp->fullCData(oldp+80,(((1U & (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                      >> 5U) | (9U 
                                                < (0xfU 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)))))
                               ? 6U : 0U)),8);
    bufp->fullCData(oldp+81,(((0x10U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))
                               ? 0x60U : 0U)),8);
    bufp->fullCData(oldp+82,(((0x20U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))
                               ? 6U : 0U)),8);
    bufp->fullCData(oldp+83,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_correction),8);
    bufp->fullBit(oldp+84,((1U & ((0x40U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))
                                   ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                      >> 4U) : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h54193848__0) 
                                                | ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                   >> 4U))))));
    bufp->fullCData(oldp+85,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_adjusted),8);
    bufp->fullBit(oldp+86,((1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled) 
                                  >> 7U))));
    bufp->fullCData(oldp+87,(((0xfeU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled) 
                                        << 1U)) | (1U 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                      >> 4U)))),8);
    bufp->fullBit(oldp+88,((1U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled))));
    bufp->fullCData(oldp+89,(((0x80U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                        << 3U)) | (0x7fU 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled) 
                                                      >> 1U)))),8);
    bufp->fullSData(oldp+90,(((((0x80U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8))
                                 ? 0xffU : 0U) << 8U) 
                              | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8))),16);
    bufp->fullSData(oldp+91,((0x1ffU & ((0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)))),9);
    bufp->fullBit(oldp+92,((1U & (((0xfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)) 
                                   + (0xfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8))) 
                                  >> 4U))));
    bufp->fullBit(oldp+93,((1U & (((0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)) 
                                   + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)) 
                                  >> 8U))));
    bufp->fullBit(oldp+94,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05Fdone));
    bufp->fullCData(oldp+95,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC),8);
    bufp->fullCData(oldp+96,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB),8);
    bufp->fullCData(oldp+97,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE),8);
    bufp->fullCData(oldp+98,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD),8);
    bufp->fullCData(oldp+99,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL),8);
    bufp->fullCData(oldp+100,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH),8);
    bufp->fullSData(oldp+101,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP),16);
    bufp->fullCData(oldp+102,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF),8);
    bufp->fullCData(oldp+103,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA),8);
    bufp->fullCData(oldp+104,(((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                : ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                    : ((1U == (0xcfU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                        : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1864))))),3);
    bufp->fullSData(oldp+105,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FPC),16);
    bufp->fullBit(oldp+106,(((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                              : ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                  : ((1U == (0xcfU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                      : ((3U == (0xcfU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                          : ((0xbU 
                                              == (0xcfU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                              : ((9U 
                                                  == 
                                                  (0xcfU 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                  : 
                                                 ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                   : 
                                                  ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                    : 
                                                   ((0x34U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1708)))))))))))));
    bufp->fullBit(oldp+107,(((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                              : ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                  : ((1U == (0xcfU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                      : ((3U == (0xcfU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                          : ((0xbU 
                                              == (0xcfU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                              : ((9U 
                                                  == 
                                                  (0xcfU 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                  : 
                                                 ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                   : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1778))))))))));
    bufp->fullCData(oldp+108,(vlSelf->GameBoySoC__DOT__cpu__DOT__state_prev),3);
    bufp->fullCData(oldp+109,(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle_prev),3);
    bufp->fullBit(oldp+110,(((6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                             | (6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state_prev)))));
    bufp->fullSData(oldp+111,((0xffffU & ((IData)(1U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))),16);
    bufp->fullBit(oldp+112,((6U == (0xc7U & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)))));
    bufp->fullBit(oldp+113,(vlSelf->GameBoySoC__DOT__cpu__DOT__needsImm8));
    bufp->fullBit(oldp+114,(vlSelf->GameBoySoC__DOT__cpu__DOT__needsImm16));
    bufp->fullCData(oldp+115,((3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+116,((7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                     >> 3U))),3);
    bufp->fullCData(oldp+117,((7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2))),3);
    bufp->fullBit(oldp+118,((6U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))));
    bufp->fullBit(oldp+119,((1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                   >> 7U))));
    bufp->fullBit(oldp+120,((1U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8))));
    bufp->fullCData(oldp+121,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result),8);
    bufp->fullBit(oldp+122,((1U & ((0U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                 >> 6U)))
                                    ? ((0U == (7U & 
                                               ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                >> 3U)))
                                        ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                           >> 7U) : 
                                       ((1U == (7U 
                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                   >> 3U)))
                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8)
                                         : ((2U == 
                                             (7U & 
                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                               >> 3U)))
                                             ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                >> 7U)
                                             : ((3U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                     >> 3U)))
                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8)
                                                 : 
                                                ((4U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                      >> 3U)))
                                                  ? 
                                                 ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                  >> 7U)
                                                  : 
                                                 ((5U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                       >> 3U)))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8)
                                                   : 
                                                  ((6U 
                                                    != 
                                                    (7U 
                                                     & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                        >> 3U))) 
                                                   & ((7U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                           >> 3U)))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8)
                                                       : 
                                                      ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                       >> 4U)))))))))
                                    : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                       >> 4U)))));
    bufp->fullBit(oldp+123,((1U & ((0U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                 >> 6U)))
                                    ? (0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result))
                                    : ((1U == (3U & 
                                               ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                >> 6U)))
                                        ? (~ (0xffU 
                                              & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                     >> 3U)))))
                                        : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                           >> 7U))))));
    bufp->fullBit(oldp+124,(((0U != (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                           >> 6U))) 
                             & ((1U != (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                              >> 6U))) 
                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                   >> 6U)))));
    bufp->fullBit(oldp+125,(((0U != (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                           >> 6U))) 
                             & ((1U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                              >> 6U))) 
                                | ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                   >> 5U)))));
    bufp->fullCData(oldp+126,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_F),8);
    bufp->fullCData(oldp+127,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_B),8);
    bufp->fullCData(oldp+128,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_C),8);
    bufp->fullCData(oldp+129,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_D),8);
    bufp->fullCData(oldp+130,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_E),8);
    bufp->fullCData(oldp+131,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_H),8);
    bufp->fullCData(oldp+132,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_L),8);
    bufp->fullCData(oldp+133,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A),8);
    bufp->fullCData(oldp+134,(((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                ? ((6U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result)
                                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2115))
                                : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2115))),8);
    bufp->fullCData(oldp+135,(((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                ? ((6U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                    ? ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                        ? 3U : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_126))
                                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_126))
                                : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_126))),3);
    bufp->fullBit(oldp+136,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_done));
    bufp->fullSData(oldp+137,(((7U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1930)
                                : ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1930)
                                    : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1930)
                                        : ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1930)
                                            : ((3U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1930)
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1930)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((0xcbU 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? 
                                                     ((3U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                        ? 
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL)
                                                         : 0U)
                                                        : 0U))
                                                      : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1930))
                                                     : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1930))))))))),16);
    bufp->fullBit(oldp+138,(((7U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1934)
                              : ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1934)
                                  : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1934)
                                      : ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1934)
                                          : ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1934)
                                              : ((5U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1934)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((0xcbU 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? 
                                                   (3U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1934))
                                                   : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1934))))))))));
    bufp->fullCData(oldp+139,(((7U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1935)
                                : ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1935)
                                    : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1935)
                                        : ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1935)
                                            : ((3U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1935)
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1935)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((0xcbU 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? 
                                                     ((3U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8)
                                                       : 0U)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1935))
                                                     : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1935))))))))),8);
    bufp->fullCData(oldp+140,(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active),8);
    bufp->fullBit(oldp+141,((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))));
    bufp->fullSData(oldp+142,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_a),9);
    bufp->fullSData(oldp+143,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_b),9);
    bufp->fullSData(oldp+144,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sum9),9);
    bufp->fullSData(oldp+145,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sumc9),9);
    bufp->fullSData(oldp+146,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diff9),9);
    bufp->fullSData(oldp+147,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diffc9),9);
    bufp->fullCData(oldp+148,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__io_flagH_aNib),4);
    bufp->fullCData(oldp+149,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__io_flagH_bNib),4);
    bufp->fullCData(oldp+150,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r),8);
    bufp->fullCData(oldp+151,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_1),8);
    bufp->fullCData(oldp+152,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_2),8);
    bufp->fullCData(oldp+153,((0xffU & ((IData)(1U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_a)))),8);
    bufp->fullCData(oldp+154,((0xffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_a) 
                                        - (IData)(1U)))),8);
    bufp->fullCData(oldp+155,((0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_645))),8);
    bufp->fullBit(oldp+156,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_write));
    bufp->fullCData(oldp+157,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData),8);
    bufp->fullCData(oldp+158,(((0U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_645)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regP1)
                                : ((1U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_645)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSB)
                                    : ((2U == (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_645)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSC)
                                        : ((0xfU == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_645)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF)
                                            : ((0x10U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_645)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10)
                                                : (
                                                   (0x11U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_645)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11)
                                                    : 
                                                   ((0x12U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_645)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12)
                                                     : 
                                                    ((0x13U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_645)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13)
                                                      : 
                                                     ((0x14U 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_645)))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14)
                                                       : 
                                                      ((0x16U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_645)))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21)
                                                        : 
                                                       ((0x17U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_645)))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22)
                                                         : 
                                                        ((0x18U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_645)))
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23)
                                                          : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_27)))))))))))))),8);
    bufp->fullBit(oldp+159,(((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT____VdfgTmp_h3326f5f0__0) 
                             & (0xffU == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tima)))));
    bufp->fullBit(oldp+160,(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_enable));
    bufp->fullCData(oldp+161,((3U & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_641))),2);
    bufp->fullBit(oldp+162,(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_write));
    bufp->fullCData(oldp+163,(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_wdata),8);
    bufp->fullCData(oldp+164,((0xffU & ((3U == (3U 
                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_641)))
                                         ? (0xf8U | (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tac))
                                         : ((2U == 
                                             (3U & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_641)))
                                             ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tma)
                                             : ((1U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_641)))
                                                 ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tima)
                                                 : 
                                                ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__div) 
                                                 >> 8U)))))),8);
    bufp->fullCData(oldp+165,(vlSelf->GameBoySoC__DOT__memory__DOT__rom
                              [vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr]),8);
    bufp->fullBit(oldp+166,((0x8000U > (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))));
    bufp->fullCData(oldp+167,(vlSelf->GameBoySoC__DOT__memory__DOT__rom
                              [vlSelf->GameBoySoC__DOT__cpu__DOT__PC]),8);
    bufp->fullBit(oldp+168,(((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)) 
                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_4))));
    bufp->fullSData(oldp+169,((0xffffU & ((IData)(0x4000U) 
                                          + ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC) 
                                             - (IData)(0xc000U))))),16);
    bufp->fullCData(oldp+170,(vlSelf->GameBoySoC__DOT__memory__DOT__rom
                              [(0xffffU & ((IData)(0x4000U) 
                                           + ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC) 
                                              - (IData)(0xc000U))))]),8);
    bufp->fullBit(oldp+171,((0x8000U > (0xffffU & ((IData)(1U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))))));
    bufp->fullCData(oldp+172,(vlSelf->GameBoySoC__DOT__memory__DOT__rom
                              [(0xffffU & ((IData)(1U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]),8);
    bufp->fullBit(oldp+173,(((0x8000U <= (0xffffU & 
                                          ((IData)(1U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))) 
                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_14))));
    bufp->fullSData(oldp+174,((0xffffU & ((IData)(0x8001U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))),16);
    bufp->fullCData(oldp+175,(vlSelf->GameBoySoC__DOT__memory__DOT__rom
                              [(0xffffU & ((IData)(0x8001U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]),8);
    bufp->fullBit(oldp+176,((0x8000U > (0xffffU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))))));
    bufp->fullSData(oldp+177,((0xffffU & ((IData)(2U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))),16);
    bufp->fullCData(oldp+178,(vlSelf->GameBoySoC__DOT__memory__DOT__rom
                              [(0xffffU & ((IData)(2U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]),8);
    bufp->fullBit(oldp+179,(((0x8000U <= (0xffffU & 
                                          ((IData)(2U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))) 
                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_24))));
    bufp->fullSData(oldp+180,((0xffffU & ((IData)(0x8002U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))),16);
    bufp->fullCData(oldp+181,(vlSelf->GameBoySoC__DOT__memory__DOT__rom
                              [(0xffffU & ((IData)(0x8002U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]),8);
    bufp->fullBit(oldp+182,((0x8000U > (0xffffU & ((IData)(3U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))))));
    bufp->fullSData(oldp+183,((0xffffU & ((IData)(3U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))),16);
    bufp->fullCData(oldp+184,(vlSelf->GameBoySoC__DOT__memory__DOT__rom
                              [(0xffffU & ((IData)(3U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]),8);
    bufp->fullBit(oldp+185,(((0x8000U <= (0xffffU & 
                                          ((IData)(3U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))) 
                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_34))));
    bufp->fullSData(oldp+186,((0xffffU & ((IData)(0x8003U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))),16);
    bufp->fullCData(oldp+187,(vlSelf->GameBoySoC__DOT__memory__DOT__rom
                              [(0xffffU & ((IData)(0x8003U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]),8);
    bufp->fullBit(oldp+188,(((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_44))));
    bufp->fullSData(oldp+189,((0xffffU & ((IData)(0x4000U) 
                                          + ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr) 
                                             - (IData)(0xc000U))))),16);
    bufp->fullCData(oldp+190,(vlSelf->GameBoySoC__DOT__memory__DOT__rom
                              [(0xffffU & ((IData)(0x4000U) 
                                           + ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr) 
                                              - (IData)(0xc000U))))]),8);
    bufp->fullBit(oldp+191,(((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)) 
                             & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_4)) 
                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_7)))));
    bufp->fullSData(oldp+192,((0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))),13);
    bufp->fullCData(oldp+193,(vlSelf->GameBoySoC__DOT__memory__DOT__wram
                              [(0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))]),8);
    bufp->fullBit(oldp+194,(((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)) 
                             & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_4)) 
                                & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_7)) 
                                   & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_10))))));
    bufp->fullBit(oldp+195,(((0x8000U <= (0xffffU & 
                                          ((IData)(1U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))) 
                             & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_14)) 
                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_17)))));
    bufp->fullSData(oldp+196,((0x1fffU & ((IData)(1U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))),13);
    bufp->fullCData(oldp+197,(vlSelf->GameBoySoC__DOT__memory__DOT__wram
                              [(0x1fffU & ((IData)(1U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]),8);
    bufp->fullBit(oldp+198,(((0x8000U <= (0xffffU & 
                                          ((IData)(1U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))) 
                             & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_14)) 
                                & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_17)) 
                                   & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_20))))));
    bufp->fullBit(oldp+199,(((0x8000U <= (0xffffU & 
                                          ((IData)(2U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))) 
                             & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_24)) 
                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_27)))));
    bufp->fullSData(oldp+200,((0x1fffU & ((IData)(2U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))),13);
    bufp->fullCData(oldp+201,(vlSelf->GameBoySoC__DOT__memory__DOT__wram
                              [(0x1fffU & ((IData)(2U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]),8);
    bufp->fullBit(oldp+202,(((0x8000U <= (0xffffU & 
                                          ((IData)(2U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))) 
                             & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_24)) 
                                & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_27)) 
                                   & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_30))))));
    bufp->fullBit(oldp+203,(((0x8000U <= (0xffffU & 
                                          ((IData)(3U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))) 
                             & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_34)) 
                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_37)))));
    bufp->fullSData(oldp+204,((0x1fffU & ((IData)(3U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))),13);
    bufp->fullCData(oldp+205,(vlSelf->GameBoySoC__DOT__memory__DOT__wram
                              [(0x1fffU & ((IData)(3U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]),8);
    bufp->fullBit(oldp+206,(((0x8000U <= (0xffffU & 
                                          ((IData)(3U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))) 
                             & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_34)) 
                                & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_37)) 
                                   & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_40))))));
    bufp->fullBit(oldp+207,(((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                             & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_44)) 
                                & (0xe000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))))));
    bufp->fullSData(oldp+208,((0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))),13);
    bufp->fullCData(oldp+209,(vlSelf->GameBoySoC__DOT__memory__DOT__wram
                              [(0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))]),8);
    bufp->fullBit(oldp+210,(((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                             & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_44)) 
                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_193)))));
    bufp->fullBit(oldp+211,(((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
                             & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                   & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                      & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                         & ((0xa000U 
                                             <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                            & ((0xc000U 
                                                <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                               & (0xe000U 
                                                  > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)))))))))));
    bufp->fullBit(oldp+212,(((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
                             & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                   & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                      & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                         & ((0xa000U 
                                             <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                            & ((0xc000U 
                                                <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                               & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_193))))))))));
    bufp->fullBit(oldp+213,(((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                             & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_44)) 
                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_196)))));
    bufp->fullCData(oldp+214,((0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))),8);
    bufp->fullCData(oldp+215,(((0x9fU >= (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)))
                                ? vlSelf->GameBoySoC__DOT__memory__DOT__oam
                               [(0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))]
                                : 0U)),8);
    bufp->fullCData(oldp+216,(vlSelf->GameBoySoC__DOT__memory__DOT__oam
                              [0U]),8);
    bufp->fullBit(oldp+217,(((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
                             & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                   & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                      & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                         & ((0xa000U 
                                             <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                            & ((0xc000U 
                                                <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                               & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_196))))))))));
    bufp->fullBit(oldp+218,(((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                             & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_44)) 
                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_202)))));
    bufp->fullCData(oldp+219,((0x7fU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))),7);
    bufp->fullCData(oldp+220,(((0x7eU >= (0x7fU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)))
                                ? vlSelf->GameBoySoC__DOT__memory__DOT__hram
                               [(0x7fU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))]
                                : 0U)),8);
    bufp->fullBit(oldp+221,(((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
                             & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                   & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                      & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                         & ((0xa000U 
                                             <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                            & ((0xc000U 
                                                <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                               & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_202))))))))));
    bufp->fullSData(oldp+222,((0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr) 
                                          - (IData)(0xff00U)))),16);
    bufp->fullCData(oldp+223,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regP1),8);
    bufp->fullCData(oldp+224,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSB),8);
    bufp->fullCData(oldp+225,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSC),8);
    bufp->fullCData(oldp+226,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10),8);
    bufp->fullCData(oldp+227,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11),8);
    bufp->fullCData(oldp+228,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12),8);
    bufp->fullCData(oldp+229,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13),8);
    bufp->fullCData(oldp+230,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14),8);
    bufp->fullCData(oldp+231,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21),8);
    bufp->fullCData(oldp+232,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22),8);
    bufp->fullCData(oldp+233,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23),8);
    bufp->fullCData(oldp+234,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24),8);
    bufp->fullCData(oldp+235,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30),8);
    bufp->fullCData(oldp+236,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31),8);
    bufp->fullCData(oldp+237,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32),8);
    bufp->fullCData(oldp+238,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33),8);
    bufp->fullCData(oldp+239,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34),8);
    bufp->fullCData(oldp+240,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41),8);
    bufp->fullCData(oldp+241,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42),8);
    bufp->fullCData(oldp+242,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43),8);
    bufp->fullCData(oldp+243,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44),8);
    bufp->fullCData(oldp+244,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50),8);
    bufp->fullCData(oldp+245,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51),8);
    bufp->fullCData(oldp+246,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52),8);
    bufp->fullCData(oldp+247,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT),8);
    bufp->fullCData(oldp+248,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC),8);
    bufp->fullCData(oldp+249,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA),8);
    bufp->fullCData(oldp+250,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0),8);
    bufp->fullCData(oldp+251,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1),8);
    bufp->fullCData(oldp+252,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY),8);
    bufp->fullCData(oldp+253,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX),8);
    bufp->fullCData(oldp+254,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT),8);
    bufp->fullSData(oldp+255,(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__div),16);
    bufp->fullCData(oldp+256,(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tima),8);
    bufp->fullCData(oldp+257,(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tma),8);
    bufp->fullCData(oldp+258,(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tac),3);
    bufp->fullCData(oldp+259,(((3U == (3U & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tac)))
                                ? 7U : ((2U == (3U 
                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tac)))
                                         ? 5U : ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tac)))
                                                  ? 3U
                                                  : 9U)))),4);
    bufp->fullBit(oldp+260,(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__prev));
    bufp->fullBit(oldp+261,(((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT___prev_T)) 
                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__prev))));
    bufp->fullCData(oldp+262,(vlSelf->GameBoySoC__DOT__ppu__DOT__vram__DOT__mem_io_rdata_MPORT_data),8);
    bufp->fullBit(oldp+263,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable));
    bufp->fullCData(oldp+264,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0),2);
    bufp->fullCData(oldp+265,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1),2);
    bufp->fullCData(oldp+266,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2),2);
    bufp->fullCData(oldp+267,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3),2);
    bufp->fullCData(oldp+268,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4),2);
    bufp->fullCData(oldp+269,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5),2);
    bufp->fullCData(oldp+270,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6),2);
    bufp->fullCData(oldp+271,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7),2);
    bufp->fullBit(oldp+272,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_popEnable));
    bufp->fullCData(oldp+273,(((0x1fU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_31)
                                : ((0x1eU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_30)
                                    : ((0x1dU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_29)
                                        : ((0x1cU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_28)
                                            : ((0x1bU 
                                                == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_27)
                                                : (
                                                   (0x1aU 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_26)
                                                    : 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_25)
                                                     : 
                                                    ((0x18U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_24)
                                                      : 
                                                     ((0x17U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_23)
                                                       : 
                                                      ((0x16U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_22)
                                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_21)))))))))))),2);
    bufp->fullBit(oldp+274,((0U < (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count))));
    bufp->fullCData(oldp+275,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count),6);
    bufp->fullBit(oldp+276,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_clear));
    bufp->fullSData(oldp+277,(vlSelf->GameBoySoC__DOT__ppu__DOT__dotCounter),9);
    bufp->fullCData(oldp+278,(vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg),8);
    bufp->fullBit(oldp+279,((1U & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC) 
                                   >> 4U))));
    bufp->fullBit(oldp+280,((1U & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC) 
                                   >> 3U))));
    bufp->fullCData(oldp+281,(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState),3);
    bufp->fullCData(oldp+282,(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX),8);
    bufp->fullCData(oldp+283,(vlSelf->GameBoySoC__DOT__ppu__DOT__tileNum),8);
    bufp->fullCData(oldp+284,(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow),8);
    bufp->fullCData(oldp+285,(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh),8);
    bufp->fullCData(oldp+286,(vlSelf->GameBoySoC__DOT__ppu__DOT__xPos),8);
    bufp->fullCData(oldp+287,(vlSelf->GameBoySoC__DOT__ppu__DOT__discardPixels),4);
    bufp->fullCData(oldp+288,(vlSelf->GameBoySoC__DOT__ppu__DOT__mode),2);
    bufp->fullSData(oldp+289,(((8U & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC))
                                ? 0x1c00U : 0x1800U)),13);
    bufp->fullCData(oldp+290,(vlSelf->GameBoySoC__DOT__ppu__DOT__scrolledY),8);
    bufp->fullCData(oldp+291,((0xffU & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX)))),8);
    bufp->fullCData(oldp+292,((0x1fU & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__scrolledY) 
                                        >> 3U))),5);
    bufp->fullCData(oldp+293,((0x1fU & (((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX) 
                                         + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX)) 
                                        >> 3U))),5);
    bufp->fullSData(oldp+294,((0x1fffU & ((((8U & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC))
                                             ? 0x1c00U
                                             : 0x1800U) 
                                           + (0x7ffU 
                                              & VL_SHIFTL_III(11,11,32, 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__scrolledY) 
                                                                  >> 3U)), 5U))) 
                                          + (0x1fU 
                                             & (((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX)) 
                                                >> 3U))))),13);
    bufp->fullSData(oldp+295,(((0x10U & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC))
                                ? 0U : 0x800U)),12);
    bufp->fullSData(oldp+296,((0x1ffU & ((0x10U & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC))
                                          ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileNum)
                                          : ((IData)(0x80U) 
                                             + ((0x100U 
                                                 & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileNum) 
                                                    << 1U)) 
                                                | (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileNum)))))),9);
    bufp->fullCData(oldp+297,((7U & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__scrolledY))),8);
    bufp->fullSData(oldp+298,(vlSelf->GameBoySoC__DOT__ppu__DOT__tileAddr),14);
    bufp->fullSData(oldp+299,((0x3fffU & ((IData)(1U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileAddr)))),14);
    bufp->fullBit(oldp+300,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                   >> 7U))));
    bufp->fullBit(oldp+301,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh) 
                                   >> 7U))));
    bufp->fullCData(oldp+302,(((2U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh) 
                                      >> 6U)) | (1U 
                                                 & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                                    >> 7U)))),2);
    bufp->fullCData(oldp+303,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+304,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh) 
                                     >> 6U))),2);
    bufp->fullCData(oldp+305,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                     >> 5U))),3);
    bufp->fullCData(oldp+306,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh) 
                                     >> 5U))),3);
    bufp->fullCData(oldp+307,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                     >> 4U))),4);
    bufp->fullCData(oldp+308,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh) 
                                     >> 4U))),4);
    bufp->fullCData(oldp+309,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                     >> 3U))),5);
    bufp->fullCData(oldp+310,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh) 
                                     >> 3U))),5);
    bufp->fullCData(oldp+311,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                     >> 2U))),6);
    bufp->fullCData(oldp+312,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh) 
                                     >> 2U))),6);
    bufp->fullCData(oldp+313,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                     >> 1U))),7);
    bufp->fullCData(oldp+314,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh) 
                                     >> 1U))),7);
    bufp->fullCData(oldp+315,((1U & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow))),8);
    bufp->fullCData(oldp+316,((1U & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh))),8);
    bufp->fullCData(oldp+317,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                     >> 5U))),2);
    bufp->fullCData(oldp+318,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                     >> 4U))),2);
    bufp->fullCData(oldp+319,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                     >> 3U))),2);
    bufp->fullCData(oldp+320,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                     >> 2U))),2);
    bufp->fullCData(oldp+321,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                     >> 1U))),2);
    bufp->fullCData(oldp+322,((1U & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow))),2);
    bufp->fullCData(oldp+323,((((0x1fU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                 ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_31)
                                 : ((0x1eU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                     ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_30)
                                     : ((0x1dU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                         ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_29)
                                         : ((0x1cU 
                                             == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                             ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_28)
                                             : ((0x1bU 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                 ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_27)
                                                 : 
                                                ((0x1aU 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_26)
                                                  : 
                                                 ((0x19U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_25)
                                                   : 
                                                  ((0x18U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_24)
                                                    : 
                                                   ((0x17U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_23)
                                                     : 
                                                    ((0x16U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_22)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_21))))))))))) 
                               << 1U)),3);
    bufp->fullCData(oldp+324,((3U & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___palPx_T))),8);
    bufp->fullCData(oldp+325,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_0),2);
    bufp->fullCData(oldp+326,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_1),2);
    bufp->fullCData(oldp+327,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_2),2);
    bufp->fullCData(oldp+328,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_3),2);
    bufp->fullCData(oldp+329,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_4),2);
    bufp->fullCData(oldp+330,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_5),2);
    bufp->fullCData(oldp+331,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_6),2);
    bufp->fullCData(oldp+332,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_7),2);
    bufp->fullCData(oldp+333,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_8),2);
    bufp->fullCData(oldp+334,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_9),2);
    bufp->fullCData(oldp+335,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_10),2);
    bufp->fullCData(oldp+336,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_11),2);
    bufp->fullCData(oldp+337,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_12),2);
    bufp->fullCData(oldp+338,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_13),2);
    bufp->fullCData(oldp+339,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_14),2);
    bufp->fullCData(oldp+340,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_15),2);
    bufp->fullCData(oldp+341,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_16),2);
    bufp->fullCData(oldp+342,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_17),2);
    bufp->fullCData(oldp+343,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_18),2);
    bufp->fullCData(oldp+344,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_19),2);
    bufp->fullCData(oldp+345,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_20),2);
    bufp->fullCData(oldp+346,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_21),2);
    bufp->fullCData(oldp+347,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_22),2);
    bufp->fullCData(oldp+348,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_23),2);
    bufp->fullCData(oldp+349,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_24),2);
    bufp->fullCData(oldp+350,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_25),2);
    bufp->fullCData(oldp+351,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_26),2);
    bufp->fullCData(oldp+352,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_27),2);
    bufp->fullCData(oldp+353,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_28),2);
    bufp->fullCData(oldp+354,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_29),2);
    bufp->fullCData(oldp+355,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_30),2);
    bufp->fullCData(oldp+356,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_31),2);
    bufp->fullCData(oldp+357,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head),5);
    bufp->fullCData(oldp+358,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail),5);
    bufp->fullBit(oldp+359,(vlSelf->GameBoySoC__DOT__ppu__DOT__vram__DOT__mem_io_rdata_MPORT_en_pipe_0));
    bufp->fullSData(oldp+360,(vlSelf->GameBoySoC__DOT__ppu__DOT__vram__DOT__mem_io_rdata_MPORT_addr_pipe_0),13);
    bufp->fullBit(oldp+361,(vlSelf->clock));
    bufp->fullBit(oldp+362,(vlSelf->reset));
    bufp->fullSData(oldp+363,(vlSelf->io_dbg_pc),16);
    bufp->fullCData(oldp+364,(vlSelf->io_dbg_opcode),8);
    bufp->fullCData(oldp+365,(vlSelf->io_dbg_a),8);
    bufp->fullCData(oldp+366,(vlSelf->io_dbg_f),8);
    bufp->fullCData(oldp+367,(vlSelf->io_dbg_b),8);
    bufp->fullCData(oldp+368,(vlSelf->io_dbg_c),8);
    bufp->fullCData(oldp+369,(vlSelf->io_dbg_d),8);
    bufp->fullCData(oldp+370,(vlSelf->io_dbg_e),8);
    bufp->fullCData(oldp+371,(vlSelf->io_dbg_h),8);
    bufp->fullCData(oldp+372,(vlSelf->io_dbg_l),8);
    bufp->fullCData(oldp+373,(vlSelf->io_dbg_state),8);
    bufp->fullCData(oldp+374,(vlSelf->io_dbg_tcycle),8);
    bufp->fullCData(oldp+375,(vlSelf->io_dbg_mcycle),8);
    bufp->fullCData(oldp+376,(vlSelf->io_dbg_IR),8);
    bufp->fullCData(oldp+377,(vlSelf->io_dbg_ly),8);
    bufp->fullIData(oldp+378,(vlSelf->io_extRomLoadAddr),32);
    bufp->fullCData(oldp+379,(vlSelf->io_extRomLoadData),8);
    bufp->fullBit(oldp+380,(vlSelf->io_extRomLoadEn));
    bufp->fullBit(oldp+381,(vlSelf->io_pixelValid));
    bufp->fullCData(oldp+382,(vlSelf->io_pixelX),8);
    bufp->fullCData(oldp+383,(vlSelf->io_pixelY),8);
    bufp->fullCData(oldp+384,(vlSelf->io_pixelColor),2);
    bufp->fullBit(oldp+385,(vlSelf->io_hblank));
    bufp->fullBit(oldp+386,(vlSelf->io_vblank));
    bufp->fullBit(oldp+387,(vlSelf->io_lcdEnable));
    bufp->fullSData(oldp+388,((0xffffU & vlSelf->io_extRomLoadAddr)),16);
}
