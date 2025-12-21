// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGameBoySoC.h for the primary calling header

#include "VGameBoySoC__pch.h"
#include "VGameBoySoC___024root.h"

void VGameBoySoC___024root___eval_act(VGameBoySoC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root___eval_act\n"); );
}

VL_INLINE_OPT void VGameBoySoC___024root___nba_sequent__TOP__0(VGameBoySoC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root___nba_sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___u_result_T;
    GameBoySoC__DOT__cpu__DOT___u_result_T = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___u_result_T_3;
    GameBoySoC__DOT__cpu__DOT___u_result_T_3 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___u_operand_T_8;
    GameBoySoC__DOT__cpu__DOT___u_operand_T_8 = 0;
    CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_113;
    GameBoySoC__DOT__cpu__DOT___GEN_113 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_131;
    GameBoySoC__DOT__cpu__DOT___GEN_131 = 0;
    CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_134;
    GameBoySoC__DOT__cpu__DOT___GEN_134 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_136;
    GameBoySoC__DOT__cpu__DOT___GEN_136 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_139;
    GameBoySoC__DOT__cpu__DOT___GEN_139 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_140;
    GameBoySoC__DOT__cpu__DOT___GEN_140 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_141;
    GameBoySoC__DOT__cpu__DOT___GEN_141 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_233;
    GameBoySoC__DOT__cpu__DOT___GEN_233 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_236;
    GameBoySoC__DOT__cpu__DOT___GEN_236 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___u_T_137;
    GameBoySoC__DOT__cpu__DOT___u_T_137 = 0;
    CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_251;
    GameBoySoC__DOT__cpu__DOT___GEN_251 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_253;
    GameBoySoC__DOT__cpu__DOT___GEN_253 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_318;
    GameBoySoC__DOT__cpu__DOT___GEN_318 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_321;
    GameBoySoC__DOT__cpu__DOT___GEN_321 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_367;
    GameBoySoC__DOT__cpu__DOT___GEN_367 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_368;
    GameBoySoC__DOT__cpu__DOT___GEN_368 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_370;
    GameBoySoC__DOT__cpu__DOT___GEN_370 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_374;
    GameBoySoC__DOT__cpu__DOT___GEN_374 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_418;
    GameBoySoC__DOT__cpu__DOT___GEN_418 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_421;
    GameBoySoC__DOT__cpu__DOT___GEN_421 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_446;
    GameBoySoC__DOT__cpu__DOT___GEN_446 = 0;
    CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_531;
    GameBoySoC__DOT__cpu__DOT___GEN_531 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_533;
    GameBoySoC__DOT__cpu__DOT___GEN_533 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_581;
    GameBoySoC__DOT__cpu__DOT___GEN_581 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___u_out_H_T_8;
    GameBoySoC__DOT__cpu__DOT___u_out_H_T_8 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___u_out_F_T_36;
    GameBoySoC__DOT__cpu__DOT___u_out_F_T_36 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_681;
    GameBoySoC__DOT__cpu__DOT___GEN_681 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_765;
    GameBoySoC__DOT__cpu__DOT___GEN_765 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_768;
    GameBoySoC__DOT__cpu__DOT___GEN_768 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_781;
    GameBoySoC__DOT__cpu__DOT___GEN_781 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_784;
    GameBoySoC__DOT__cpu__DOT___GEN_784 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_806;
    GameBoySoC__DOT__cpu__DOT___GEN_806 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_808;
    GameBoySoC__DOT__cpu__DOT___GEN_808 = 0;
    CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_841;
    GameBoySoC__DOT__cpu__DOT___GEN_841 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1063;
    GameBoySoC__DOT__cpu__DOT___GEN_1063 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1068;
    GameBoySoC__DOT__cpu__DOT___GEN_1068 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1102;
    GameBoySoC__DOT__cpu__DOT___GEN_1102 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1195;
    GameBoySoC__DOT__cpu__DOT___GEN_1195 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1202;
    GameBoySoC__DOT__cpu__DOT___GEN_1202 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1208;
    GameBoySoC__DOT__cpu__DOT___GEN_1208 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1250;
    GameBoySoC__DOT__cpu__DOT___GEN_1250 = 0;
    CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1347;
    GameBoySoC__DOT__cpu__DOT___GEN_1347 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1396;
    GameBoySoC__DOT__cpu__DOT___GEN_1396 = 0;
    CData/*3:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1438;
    GameBoySoC__DOT__cpu__DOT___GEN_1438 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1477;
    GameBoySoC__DOT__cpu__DOT___GEN_1477 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1487;
    GameBoySoC__DOT__cpu__DOT___GEN_1487 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1582;
    GameBoySoC__DOT__cpu__DOT___GEN_1582 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1589;
    GameBoySoC__DOT__cpu__DOT___GEN_1589 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1610;
    GameBoySoC__DOT__cpu__DOT___GEN_1610 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1772;
    GameBoySoC__DOT__cpu__DOT___GEN_1772 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1791;
    GameBoySoC__DOT__cpu__DOT___GEN_1791 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1824;
    GameBoySoC__DOT__cpu__DOT___GEN_1824 = 0;
    CData/*3:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1849;
    GameBoySoC__DOT__cpu__DOT___GEN_1849 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1869;
    GameBoySoC__DOT__cpu__DOT___GEN_1869 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1880;
    GameBoySoC__DOT__cpu__DOT___GEN_1880 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1883;
    GameBoySoC__DOT__cpu__DOT___GEN_1883 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2104;
    GameBoySoC__DOT__cpu__DOT___GEN_2104 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___cbOut_out_F_T;
    GameBoySoC__DOT__cpu__DOT___cbOut_out_F_T = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2165;
    GameBoySoC__DOT__cpu__DOT___GEN_2165 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_h8feea624__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h8feea624__0 = 0;
    CData/*0:0*/ GameBoySoC__DOT__ppu__DOT___T_37;
    GameBoySoC__DOT__ppu__DOT___T_37 = 0;
    CData/*2:0*/ GameBoySoC__DOT__ppu__DOT___GEN_17;
    GameBoySoC__DOT__ppu__DOT___GEN_17 = 0;
    CData/*0:0*/ GameBoySoC__DOT__ppu__DOT____VdfgTmp_hada5b228__0;
    GameBoySoC__DOT__ppu__DOT____VdfgTmp_hada5b228__0 = 0;
    CData/*0:0*/ GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT____VdfgTmp_h48ab0a71__0;
    GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT____VdfgTmp_h48ab0a71__0 = 0;
    SData/*15:0*/ GameBoySoC__DOT__memory__DOT___GEN_84;
    GameBoySoC__DOT__memory__DOT___GEN_84 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_17;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_17 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_135;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_135 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_147;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_147 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_160;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_160 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_174;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_174 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_189;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_189 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_205;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_205 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_222;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_222 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_240;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_240 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_280;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_280 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_301;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_301 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_323;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_323 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_346;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_346 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_370;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_370 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_395;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_395 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_421;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_421 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_448;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_448 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_476;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_476 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_505;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_505 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_535;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_535 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_566;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_566 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_598;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_598 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_631;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_631 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_700;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_700 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_736;
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_736 = 0;
    CData/*2:0*/ __Vdly__GameBoySoC__DOT__cpu__DOT__state;
    __Vdly__GameBoySoC__DOT__cpu__DOT__state = 0;
    CData/*2:0*/ __Vdly__GameBoySoC__DOT__ppu__DOT__fetcherState;
    __Vdly__GameBoySoC__DOT__ppu__DOT__fetcherState = 0;
    SData/*8:0*/ __Vdly__GameBoySoC__DOT__ppu__DOT__dotCounter;
    __Vdly__GameBoySoC__DOT__ppu__DOT__dotCounter = 0;
    CData/*7:0*/ __Vdly__GameBoySoC__DOT__ppu__DOT__lyReg;
    __Vdly__GameBoySoC__DOT__ppu__DOT__lyReg = 0;
    SData/*12:0*/ __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__wram__v0;
    __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__wram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__GameBoySoC__DOT__memory__DOT__wram__v0;
    __Vdlyvval__GameBoySoC__DOT__memory__DOT__wram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__GameBoySoC__DOT__memory__DOT__wram__v0;
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__wram__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__wram__v1;
    __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__wram__v1 = 0;
    CData/*7:0*/ __Vdlyvval__GameBoySoC__DOT__memory__DOT__wram__v1;
    __Vdlyvval__GameBoySoC__DOT__memory__DOT__wram__v1 = 0;
    CData/*0:0*/ __Vdlyvset__GameBoySoC__DOT__memory__DOT__wram__v1;
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__wram__v1 = 0;
    CData/*6:0*/ __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__hram__v0;
    __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__hram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__GameBoySoC__DOT__memory__DOT__hram__v0;
    __Vdlyvval__GameBoySoC__DOT__memory__DOT__hram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__GameBoySoC__DOT__memory__DOT__hram__v0;
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__hram__v0 = 0;
    SData/*15:0*/ __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__rom__v0;
    __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__rom__v0 = 0;
    CData/*7:0*/ __Vdlyvval__GameBoySoC__DOT__memory__DOT__rom__v0;
    __Vdlyvval__GameBoySoC__DOT__memory__DOT__rom__v0 = 0;
    CData/*0:0*/ __Vdlyvset__GameBoySoC__DOT__memory__DOT__rom__v0;
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__rom__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__oam__v0;
    __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__oam__v0 = 0;
    CData/*7:0*/ __Vdlyvval__GameBoySoC__DOT__memory__DOT__oam__v0;
    __Vdlyvval__GameBoySoC__DOT__memory__DOT__oam__v0 = 0;
    CData/*0:0*/ __Vdlyvset__GameBoySoC__DOT__memory__DOT__oam__v0;
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__oam__v0 = 0;
    // Body
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__rom__v0 = 0U;
    __Vdly__GameBoySoC__DOT__ppu__DOT__fetcherState 
        = vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState;
    __Vdly__GameBoySoC__DOT__ppu__DOT__dotCounter = vlSelf->GameBoySoC__DOT__ppu__DOT__dotCounter;
    __Vdly__GameBoySoC__DOT__ppu__DOT__lyReg = vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg;
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__oam__v0 = 0U;
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__hram__v0 = 0U;
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__wram__v0 = 0U;
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__wram__v1 = 0U;
    __Vdly__GameBoySoC__DOT__cpu__DOT__state = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
    if (VL_UNLIKELY((((((7U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                        & (0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) 
                       & (~ ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__canTakeInterrupt) 
                             & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_should_irq)))) 
                      & (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"A: %x F: %x B: %x C: %x D: %x E: %x H: %x L: %x SP: %x PC: %x | %x\n",
                   8,vlSelf->GameBoySoC__DOT__cpu__DOT__A,
                   8,(IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F),
                   8,vlSelf->GameBoySoC__DOT__cpu__DOT__B,
                   8,(IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C),
                   8,vlSelf->GameBoySoC__DOT__cpu__DOT__D,
                   8,(IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E),
                   8,vlSelf->GameBoySoC__DOT__cpu__DOT__H,
                   8,(IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L),
                   16,vlSelf->GameBoySoC__DOT__cpu__DOT__SP,
                   16,(IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC),
                   8,vlSelf->GameBoySoC__DOT__cpu_io_memReadData);
    }
    if (vlSelf->io_extRomLoadEn) {
        __Vdlyvval__GameBoySoC__DOT__memory__DOT__rom__v0 
            = vlSelf->io_extRomLoadData;
        __Vdlyvset__GameBoySoC__DOT__memory__DOT__rom__v0 = 1U;
        __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__rom__v0 
            = (0xffffU & vlSelf->io_extRomLoadAddr);
    }
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
         & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
            & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
               & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                  & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                     & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                        & ((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                           & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_49))))))))) {
        vlSelf->GameBoySoC__DOT__memory__DOT____Vlvbound_h5559fb94__0 
            = vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data;
        if ((0x9fU >= (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)))) {
            __Vdlyvval__GameBoySoC__DOT__memory__DOT__oam__v0 
                = vlSelf->GameBoySoC__DOT__memory__DOT____Vlvbound_h5559fb94__0;
            __Vdlyvset__GameBoySoC__DOT__memory__DOT__oam__v0 = 1U;
            __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__oam__v0 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr));
        }
    }
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
         & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
            & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
               & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                  & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                     & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                        & ((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                           & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_53))))))))) {
        vlSelf->GameBoySoC__DOT__memory__DOT____Vlvbound_ha6cb93b5__0 
            = vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data;
        if ((0x7eU >= (0x7fU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)))) {
            __Vdlyvval__GameBoySoC__DOT__memory__DOT__hram__v0 
                = vlSelf->GameBoySoC__DOT__memory__DOT____Vlvbound_ha6cb93b5__0;
            __Vdlyvset__GameBoySoC__DOT__memory__DOT__hram__v0 = 1U;
            __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__hram__v0 
                = (0x7fU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr));
        }
    }
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
         & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
            & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
               & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                  & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                     & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                        & ((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                           & (0xe000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)))))))))) {
        __Vdlyvval__GameBoySoC__DOT__memory__DOT__wram__v0 
            = vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data;
        __Vdlyvset__GameBoySoC__DOT__memory__DOT__wram__v0 = 1U;
        __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__wram__v0 
            = (0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr));
    }
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
         & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
            & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
               & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                  & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                     & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                        & ((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                           & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_46))))))))) {
        __Vdlyvval__GameBoySoC__DOT__memory__DOT__wram__v1 
            = vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data;
        __Vdlyvset__GameBoySoC__DOT__memory__DOT__wram__v1 = 1U;
        __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__wram__v1 
            = (0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr));
    }
    vlSelf->GameBoySoC__DOT__ppu__DOT__vram__DOT__mem_io_rdata_MPORT_en_pipe_0 
        = vlSelf->GameBoySoC__DOT__ppu__DOT__vram_io_read;
    if ((1U & (~ (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_clear)))) {
        if (((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable) 
             & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_popEnable))) {
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_22 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_278;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_23 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_279;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_24 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_280;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_25 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_281;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_26 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_282;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_27 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_283;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_28 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_284;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_29 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_285;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_30 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_286;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_31 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_287;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_14 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_270;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_13 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_269;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_12 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_268;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_11 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_267;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_10 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_266;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_9 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_265;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_8 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_264;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_2 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_258;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_0 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_256;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_7 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_263;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_1 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_257;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_3 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_259;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_4 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_260;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_5 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_261;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_6 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_262;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_15 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_271;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_16 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_272;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_17 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_273;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_18 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_274;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_19 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_275;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_20 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_276;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_21 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_277;
        } else if (vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable) {
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_22 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_278;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_23 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_279;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_24 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_280;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_25 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_281;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_26 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_282;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_27 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_283;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_28 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_284;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_29 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_285;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_30 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_286;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_31 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_287;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_14 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_270;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_13 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_269;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_12 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_268;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_11 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_267;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_10 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_266;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_9 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_265;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_8 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_264;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_2 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_258;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_0 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_256;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_7 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_263;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_1 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_257;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_3 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_259;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_4 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_260;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_5 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_261;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_6 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_262;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_15 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_271;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_16 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_272;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_17 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_273;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_18 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_274;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_19 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_275;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_20 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_276;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_21 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_277;
        }
    }
    if (vlSelf->GameBoySoC__DOT__ppu__DOT__vram_io_read) {
        vlSelf->GameBoySoC__DOT__ppu__DOT__vram__DOT__mem_io_rdata_MPORT_addr_pipe_0 
            = ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT____VdfgTmp_ha309eb35__0)
                ? (0x1fffU & ((0U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))
                               ? ((((8U & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC))
                                     ? 0x1c00U : 0x1800U) 
                                   + (0x7ffU & VL_SHIFTL_III(11,11,32, 
                                                             (0x1fU 
                                                              & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__scrolledY) 
                                                                 >> 3U)), 5U))) 
                                  + (0x1fU & (((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX)) 
                                              >> 3U)))
                               : ((2U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))
                                   ? 0U : ((1U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileAddr)
                                            : ((4U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))
                                                ? 0U
                                                : (
                                                   (3U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileAddr))
                                                    : 0U))))))
                : 0U);
    }
    if (vlSelf->reset) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__divCounter = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail = 0U;
        __Vdly__GameBoySoC__DOT__ppu__DOT__dotCounter = 0U;
        __Vdly__GameBoySoC__DOT__ppu__DOT__lyReg = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__vblankIRQ = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__xPos = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSC = 0x7eU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV = 0xabU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12 = 0xf3U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10 = 0x80U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11 = 0xbfU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTMA = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTAC = 0xf8U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13 = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTIMA = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21 = 0x3fU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14 = 0xbfU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22 = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23 = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52 = 0xf1U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51 = 0xf3U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34 = 0xbfU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42 = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24 = 0xbfU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41 = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32 = 0x9fU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30 = 0x7fU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43 = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31 = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44 = 0xbfU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50 = 0x77U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33 = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0 = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT = 0x85U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1 = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP = 0xfcU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSB = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regP1 = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF = 0xe1U;
        vlSelf->GameBoySoC__DOT__memory__DOT__regIE = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8 = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__discardPixels = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count = 0U;
        __Vdly__GameBoySoC__DOT__ppu__DOT__fetcherState = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__tileNum = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC = 0x91U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__A = 1U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__F = 0xb0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__B = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__C = 0x13U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__D = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__E = 0xd8U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__H = 1U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__L = 0x4dU;
        vlSelf->GameBoySoC__DOT__cpu__DOT__PC = 0x100U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__SP = 0xfffeU;
        vlSelf->GameBoySoC__DOT__cpu__DOT__IR = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__IR2 = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__imm8 = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__imm16 = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8 = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__IME = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled = 0x100U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled = 0xfffeU;
        vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled = 1U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled = 0xb0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled = 0x13U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled = 0xd8U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled = 1U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled = 0x4dU;
        __Vdly__GameBoySoC__DOT__cpu__DOT__state = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__halted = 0U;
    } else {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__divCounter 
            = ((0xffU == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__divCounter))
                ? 0U : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___divCounter_T_1));
        if (vlSelf->io_lcdEnable) {
            if ((0x1c7U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__dotCounter))) {
                __Vdly__GameBoySoC__DOT__ppu__DOT__dotCounter = 0U;
                __Vdly__GameBoySoC__DOT__ppu__DOT__lyReg 
                    = ((0x99U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg))
                        ? 0U : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___lyReg_T_1));
                vlSelf->GameBoySoC__DOT__ppu__DOT__vblankIRQ 
                    = ((0x99U != (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg)) 
                       && (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___T_5));
            } else {
                __Vdly__GameBoySoC__DOT__ppu__DOT__dotCounter 
                    = vlSelf->GameBoySoC__DOT__ppu__DOT___dotCounter_T_1;
            }
        } else {
            __Vdly__GameBoySoC__DOT__ppu__DOT__dotCounter = 0U;
            __Vdly__GameBoySoC__DOT__ppu__DOT__lyReg = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__vblankIRQ = 0U;
        }
        if ((((3U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__mode)) 
              & (0x90U > (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg))) 
             & (IData)(vlSelf->io_lcdEnable))) {
            vlSelf->GameBoySoC__DOT__ppu__DOT__xPos 
                = (((0U < (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count)) 
                    & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___T_11))
                    ? ((0U < (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__discardPixels))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_15)
                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___xPos_T_1))
                    : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_15));
            if ((0U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
                __Vdly__GameBoySoC__DOT__ppu__DOT__fetcherState = 2U;
                vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX 
                    = vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_16;
            } else if ((2U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
                __Vdly__GameBoySoC__DOT__ppu__DOT__fetcherState = 1U;
                vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX 
                    = vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_16;
            } else {
                __Vdly__GameBoySoC__DOT__ppu__DOT__fetcherState 
                    = vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_87;
                vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX 
                    = vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_99;
            }
            if ((0U != (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
                if ((2U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
                    vlSelf->GameBoySoC__DOT__ppu__DOT__tileNum 
                        = vlSelf->GameBoySoC__DOT__ppu__DOT__vram__DOT__mem_io_rdata_MPORT_data;
                }
                if ((2U != (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
                    vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow 
                        = vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_88;
                    vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh 
                        = vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_89;
                }
            }
        } else {
            vlSelf->GameBoySoC__DOT__ppu__DOT__xPos 
                = vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_15;
            if ((((0U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__dotCounter)) 
                  & (0x90U > (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg))) 
                 & (IData)(vlSelf->io_lcdEnable))) {
                __Vdly__GameBoySoC__DOT__ppu__DOT__fetcherState = 0U;
            }
            vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX 
                = vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_16;
        }
        if (vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_clear) {
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count = 0U;
        } else if (((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable) 
                    & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_popEnable))) {
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___head_T_1;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___tail_T_1;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___count_T_1;
        } else {
            if ((1U & (~ (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable)))) {
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head 
                    = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_544;
            }
            if (vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable) {
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail 
                    = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___tail_T_1;
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count 
                    = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___count_T_3;
            } else {
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count 
                    = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_545;
            }
        }
        if (vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_write) {
            if ((0U != (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
                if ((1U != (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSC 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_801;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTMA 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_804;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTAC 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_805;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTIMA 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_803;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_839;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828;
                }
                if ((1U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSB 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                }
            }
            if ((0U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_0;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regP1 
                    = (0xcfU | (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData));
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2;
            } else if ((1U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_0;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2;
            } else if ((2U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_0;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2;
            } else if ((4U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV = 0U;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2;
            } else {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_0;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF 
                    = ((5U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2)
                        : ((6U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2)
                            : ((7U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2)
                                : ((0xfU == (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                    : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2)))));
            }
        } else {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_0;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2;
        }
        if (vlSelf->GameBoySoC__DOT__cpu_io_memWrite) {
            if ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))) {
                if ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))) {
                    vlSelf->GameBoySoC__DOT__memory__DOT__regIE 
                        = vlSelf->GameBoySoC__DOT__memory__DOT___GEN_335;
                }
            }
        }
        if ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            if ((0x76U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
                if ((1U != (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1855;
                }
            }
        }
        vlSelf->GameBoySoC__DOT__ppu__DOT__discardPixels 
            = (0xfU & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT____VdfgTmp_ha309eb35__0)
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_139)
                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_19)));
        if ((7U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
            if ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                if ((1U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__A 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2394;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__F 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2395;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__B 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2396;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__C 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2397;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__D 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2398;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__E 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2399;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__H 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2400;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__L 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2401;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__IR2 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2387;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__imm16 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2373;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2402;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2405;
                }
                if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__imm8 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2033;
                }
            }
            if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                if ((1U & (~ ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__canTakeInterrupt) 
                              & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_should_irq))))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__IR 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1997;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2002;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2003;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2004;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2005;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2006;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2007;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2008;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2009;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2010;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2011;
                }
                if (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__canTakeInterrupt) 
                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_should_irq))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__IME = 0U;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__halted = 0U;
                }
            } else {
                if ((1U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__IME 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2404;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__halted 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2406;
                }
                if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2037;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2038;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2039;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2040;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2041;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2042;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2043;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2044;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2045;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2046;
                } else {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2377;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2378;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2379;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2380;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2381;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2382;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2383;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2384;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2385;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2386;
                }
            }
        }
        if ((7U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_59)))) {
                if ((1U & (~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_61)))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__PC 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1944;
                    __Vdly__GameBoySoC__DOT__cpu__DOT__state 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1946;
                }
                vlSelf->GameBoySoC__DOT__cpu__DOT__SP 
                    = ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_61)
                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1934)
                        : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1943));
            }
            vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle 
                = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1932;
            if (vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_59) {
                if (vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_1) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle = 1U;
                }
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle 
                    = ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_61)
                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_115)
                        : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1945));
            }
        } else {
            if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                if ((1U & (~ ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__canTakeInterrupt) 
                              & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_should_irq))))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__PC 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1998;
                }
                if (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__canTakeInterrupt) 
                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_should_irq))) {
                    __Vdly__GameBoySoC__DOT__cpu__DOT__state = 7U;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle = 0U;
                } else {
                    __Vdly__GameBoySoC__DOT__cpu__DOT__state 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2001;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1938;
                }
                vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1932;
            } else if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__PC 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1998;
                __Vdly__GameBoySoC__DOT__cpu__DOT__state 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2036;
                vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1932;
                vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1938;
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT__PC 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2374;
                __Vdly__GameBoySoC__DOT__cpu__DOT__state 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2375;
                vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2407;
                vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2376;
            }
            if ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                if ((1U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__SP 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2403;
                }
            }
        }
    }
    if (__Vdlyvset__GameBoySoC__DOT__memory__DOT__rom__v0) {
        vlSelf->GameBoySoC__DOT__memory__DOT__rom[__Vdlyvdim0__GameBoySoC__DOT__memory__DOT__rom__v0] 
            = __Vdlyvval__GameBoySoC__DOT__memory__DOT__rom__v0;
    }
    if (__Vdlyvset__GameBoySoC__DOT__memory__DOT__oam__v0) {
        vlSelf->GameBoySoC__DOT__memory__DOT__oam[__Vdlyvdim0__GameBoySoC__DOT__memory__DOT__oam__v0] 
            = __Vdlyvval__GameBoySoC__DOT__memory__DOT__oam__v0;
    }
    if (__Vdlyvset__GameBoySoC__DOT__memory__DOT__hram__v0) {
        vlSelf->GameBoySoC__DOT__memory__DOT__hram[__Vdlyvdim0__GameBoySoC__DOT__memory__DOT__hram__v0] 
            = __Vdlyvval__GameBoySoC__DOT__memory__DOT__hram__v0;
    }
    if (__Vdlyvset__GameBoySoC__DOT__memory__DOT__wram__v0) {
        vlSelf->GameBoySoC__DOT__memory__DOT__wram[__Vdlyvdim0__GameBoySoC__DOT__memory__DOT__wram__v0] 
            = __Vdlyvval__GameBoySoC__DOT__memory__DOT__wram__v0;
    }
    if (__Vdlyvset__GameBoySoC__DOT__memory__DOT__wram__v1) {
        vlSelf->GameBoySoC__DOT__memory__DOT__wram[__Vdlyvdim0__GameBoySoC__DOT__memory__DOT__wram__v1] 
            = __Vdlyvval__GameBoySoC__DOT__memory__DOT__wram__v1;
    }
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___divCounter_T_1 
        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__divCounter)));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___head_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head)));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_21 
        = ((0x15U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_21)
            : ((0x14U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_20)
                : ((0x13U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_19)
                    : ((0x12U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_18)
                        : ((0x11U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_17)
                            : ((0x10U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_16)
                                : ((0xfU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_15)
                                    : ((0xeU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_14)
                                        : ((0xdU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_13)
                                            : ((0xcU 
                                                == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_12)
                                                : (
                                                   (0xbU 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_11)
                                                    : 
                                                   ((0xaU 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_10)
                                                     : 
                                                    ((9U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_9)
                                                      : 
                                                     ((8U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_8)
                                                       : 
                                                      ((7U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_7)
                                                        : 
                                                       ((6U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_6)
                                                         : 
                                                        ((5U 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_5)
                                                          : 
                                                         ((4U 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_4)
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_3)
                                                            : 
                                                           ((2U 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                             ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_2)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_1)
                                                              : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_0))))))))))))))))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___tail_T_1 
        = (0x1fU & ((IData)(8U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail)));
    vlSelf->io_pixelX = vlSelf->GameBoySoC__DOT__ppu__DOT__xPos;
    vlSelf->GameBoySoC__DOT__ppu__DOT___T_11 = (0xa0U 
                                                > (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__xPos));
    vlSelf->GameBoySoC__DOT__ppu__DOT___xPos_T_1 = 
        (0xffU & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__xPos)));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_0 
        = (0xffU & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV) 
                    + (0xffU == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__divCounter))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2 
        = ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__vblankIRQ)
            ? (1U | (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF))
            : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF));
    vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active 
        = ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF) 
           & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE));
    vlSelf->GameBoySoC__DOT__ppu__DOT___palPx_T = (0xffU 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP) 
                                                      >> 
                                                      (((0x1fU 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_31)
                                                         : 
                                                        ((0x1eU 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_30)
                                                          : 
                                                         ((0x1dU 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_29)
                                                           : 
                                                          ((0x1cU 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_28)
                                                            : 
                                                           ((0x1bU 
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
                                                       << 1U)));
    vlSelf->GameBoySoC__DOT__ppu__DOT__vram__DOT__mem_io_rdata_MPORT_data 
        = vlSelf->GameBoySoC__DOT__ppu__DOT__vram__DOT__mem
        [vlSelf->GameBoySoC__DOT__ppu__DOT__vram__DOT__mem_io_rdata_MPORT_addr_pipe_0];
    vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState 
        = __Vdly__GameBoySoC__DOT__ppu__DOT__fetcherState;
    vlSelf->GameBoySoC__DOT__ppu__DOT__dotCounter = __Vdly__GameBoySoC__DOT__ppu__DOT__dotCounter;
    vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg = __Vdly__GameBoySoC__DOT__ppu__DOT__lyReg;
    vlSelf->GameBoySoC__DOT__cpu__DOT__state = __Vdly__GameBoySoC__DOT__cpu__DOT__state;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___count_T_1 
        = (0x3fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count)));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___count_T_3 
        = (0x3fU & ((IData)(8U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count)));
    GameBoySoC__DOT__ppu__DOT___T_37 = ((0U < (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count)) 
                                        & (0xa0U > (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__xPos)));
    vlSelf->GameBoySoC__DOT__ppu__DOT___dotCounter_T_1 
        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__dotCounter)));
    vlSelf->GameBoySoC__DOT__ppu__DOT___lyReg_T_1 = 
        (0xffU & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg)));
    vlSelf->GameBoySoC__DOT__ppu__DOT___T_5 = (0x8fU 
                                               == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg));
    vlSelf->io_dbg_ly = vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg;
    vlSelf->GameBoySoC__DOT__ppu__DOT__scrolledY = 
        (0xffU & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY) 
                  + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg)));
    vlSelf->GameBoySoC__DOT__ppu__DOT__mode = ((0x90U 
                                                <= (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg))
                                                ? 1U
                                                : (
                                                   (0x50U 
                                                    > (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__dotCounter))
                                                    ? 2U
                                                    : 
                                                   (((0xa0U 
                                                      > (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__xPos)) 
                                                     & (0x90U 
                                                        > (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg)))
                                                     ? 3U
                                                     : 0U)));
    vlSelf->io_lcdEnable = (1U & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC) 
                                  >> 7U));
    vlSelf->io_dbg_a = vlSelf->GameBoySoC__DOT__cpu__DOT__A;
    vlSelf->io_dbg_f = vlSelf->GameBoySoC__DOT__cpu__DOT__F;
    vlSelf->io_dbg_b = vlSelf->GameBoySoC__DOT__cpu__DOT__B;
    vlSelf->io_dbg_c = vlSelf->GameBoySoC__DOT__cpu__DOT__C;
    vlSelf->io_dbg_d = vlSelf->GameBoySoC__DOT__cpu__DOT__D;
    vlSelf->io_dbg_e = vlSelf->GameBoySoC__DOT__cpu__DOT__E;
    vlSelf->io_dbg_h = vlSelf->GameBoySoC__DOT__cpu__DOT__H;
    vlSelf->io_dbg_l = vlSelf->GameBoySoC__DOT__cpu__DOT__L;
    vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_should_irq 
        = ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME) 
           & (0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active)));
    vlSelf->io_dbg_pc = vlSelf->GameBoySoC__DOT__cpu__DOT__PC;
    vlSelf->GameBoySoC__DOT__cpu__DOT___u_out_PC_T_4 
        = (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled) 
                      + ((0xff00U & ((- (IData)((1U 
                                                 & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8) 
                                                    >> 7U)))) 
                                     << 8U)) | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8))));
    GameBoySoC__DOT__cpu__DOT___u_result_T = (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled) 
                                               << 8U) 
                                              | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
    GameBoySoC__DOT__cpu__DOT___u_result_T_3 = (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled) 
                                                 << 8U) 
                                                | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
    GameBoySoC__DOT__cpu__DOT___GEN_2104 = (0xffU & 
                                            ((0U == 
                                              (7U & 
                                               ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                >> 3U)))
                                              ? ((0xfeU 
                                                  & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                       >> 7U)))
                                              : ((1U 
                                                  == 
                                                  (7U 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                      >> 3U)))
                                                  ? 
                                                 ((0x80U 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                      << 7U)) 
                                                  | (0x7fU 
                                                     & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                        >> 1U)))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                       >> 3U)))
                                                   ? 
                                                  ((0xfeU 
                                                    & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                         >> 4U)))
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                        >> 3U)))
                                                    ? 
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                        << 3U)) 
                                                    | (0x7fU 
                                                       & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                          >> 1U)))
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                         >> 3U)))
                                                     ? 
                                                    VL_SHIFTL_III(8,8,32, (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8), 1U)
                                                     : 
                                                    ((5U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                          >> 3U)))
                                                      ? 
                                                     ((0x80U 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8)) 
                                                      | (0x7fU 
                                                         & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                            >> 1U)))
                                                      : 
                                                     ((6U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                           >> 3U)))
                                                       ? 
                                                      ((0xf0U 
                                                        & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                           << 4U)) 
                                                       | (0xfU 
                                                          & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                             >> 4U)))
                                                       : 
                                                      ((7U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                            >> 3U)))
                                                        ? 
                                                       VL_SHIFTR_III(8,8,32, (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8), 1U)
                                                        : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8))))))))));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h54193848__0 
        = (1U & (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                  >> 4U) | (0x99U < (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled))));
    vlSelf->io_dbg_state = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
    GameBoySoC__DOT__cpu__DOT___u_out_F_T_36 = ((0x20U 
                                                 & (((0xfU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)) 
                                                     + 
                                                     (0xfU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8))) 
                                                    << 1U)) 
                                                | (0x10U 
                                                   & (((0xffU 
                                                        & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)) 
                                                       + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)) 
                                                      >> 4U)));
    GameBoySoC__DOT__cpu__DOT___u_out_H_T_8 = (0xffffU 
                                               & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                                  + 
                                                  ((((0x80U 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8))
                                                      ? 0xffU
                                                      : 0U) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8))));
    vlSelf->io_dbg_tcycle = vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle;
    if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_1 = 1U;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1932 = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2037 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2038 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2036 = 4U;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2039 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2040 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2041 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__B;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2042 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2043 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__D;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2044 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__E;
        GameBoySoC__DOT__cpu__DOT___GEN_321 = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2045 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__H;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2046 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__L;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1938 = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_115 = 2U;
        GameBoySoC__DOT__cpu__DOT___GEN_113 = 1U;
    } else {
        vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_1 = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1932 
            = (3U & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2037 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2038 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2036 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2039 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2040 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2041 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2042 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2043 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2044 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_321 = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2045 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2046 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1938 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_115 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
        GameBoySoC__DOT__cpu__DOT___GEN_113 = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
    }
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1934 = 
        (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP) 
                    - (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))));
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1998 = 
        (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC) 
                    + (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))));
    GameBoySoC__DOT__cpu__DOT___GEN_374 = (0xffffU 
                                           & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                              + (3U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))));
    vlSelf->GameBoySoC__DOT__cpu__DOT__canTakeInterrupt 
        = ((~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__halted)) 
           & ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
              & (0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))));
    GameBoySoC__DOT__cpu__DOT___u_T_137 = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)) 
                                           | ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)) 
                                              | ((2U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)) 
                                                 | (3U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)))));
    vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL = (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled) 
                                                << 8U) 
                                               | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    vlSelf->io_dbg_mcycle = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
    vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_59 = (0U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle));
    vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_61 = (1U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle));
    GameBoySoC__DOT__cpu__DOT___GEN_2165 = ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                            & ((6U 
                                                != 
                                                (7U 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2))) 
                                               & (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))));
    GameBoySoC__DOT__cpu__DOT___GEN_141 = ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                           & ((1U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                              & ((2U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                                 & (3U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)))));
    GameBoySoC__DOT__cpu__DOT___GEN_236 = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                           & (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)));
    GameBoySoC__DOT__cpu__DOT___GEN_253 = ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                           & ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                              & (3U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))));
    GameBoySoC__DOT__cpu__DOT___GEN_139 = ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                           & ((1U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                              & ((2U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                                 & (2U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)))));
    GameBoySoC__DOT__cpu__DOT___GEN_368 = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                           | (1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)));
    vlSelf->io_dbg_opcode = vlSelf->GameBoySoC__DOT__cpu__DOT__IR;
    GameBoySoC__DOT__cpu__DOT___GEN_1102 = ((0xc6U 
                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                             : ((0xceU 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                 : 
                                                ((0xd6U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                  : 
                                                 ((0xe6U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                   : 
                                                  ((0xeeU 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                    : 
                                                   ((0xf6U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                     : 
                                                    ((0xfeU 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                      : 
                                                     ((0x18U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                       : 
                                                      ((0x10U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                        : 
                                                       ((0xc5U 
                                                         == 
                                                         (0xcfU 
                                                          & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                         : 
                                                        ((0xc1U 
                                                          == 
                                                          (0xcfU 
                                                           & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                          : 
                                                         ((0xcdU 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                           : 
                                                          ((0xc9U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                            : 
                                                           ((0xd9U 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                             ? 
                                                            ((0U 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                              : 
                                                             ((1U 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                               ? 
                                                              ((3U 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)) 
                                                               | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME))
                                                               : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)))
                                                             : 
                                                            ((0xc7U 
                                                              == 
                                                              (0xc7U 
                                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                              : 
                                                             ((0xfbU 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                               : 
                                                              ((0xf3U 
                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME))))))))))))))))));
    vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_98 = ((7U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled)
                                                         : 0U)))))));
    vlSelf->GameBoySoC__DOT__cpu__DOT__u_oldVal = (
                                                   (7U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                        >> 3U)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                    : 
                                                   ((5U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                         >> 3U)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                          >> 3U)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled)
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                           >> 3U)))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                            >> 3U)))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled)
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                             >> 3U)))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)
                                                         : 
                                                        ((0U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                              >> 3U)))
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled)
                                                          : 0U)))))));
    vlSelf->GameBoySoC__DOT__cpu__DOT__u_condition 
        = (1U & ((3U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                               >> 3U))) ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                           >> 4U) : 
                 ((2U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                >> 3U))) ? (~ ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                               >> 4U))
                   : ((1U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                    >> 3U))) ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                >> 7U)
                       : (IData)(((~ ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                      >> 7U)) & (0U 
                                                 == 
                                                 (0x18U 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))))))));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0 
        = ((4U == (0xc7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
           & (6U != (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                           >> 3U))));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0 
        = ((5U == (0xc7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
           & (6U != (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                           >> 3U))));
    vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84 = ((
                                                   ((0x40U 
                                                     <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                    & ((0x7fU 
                                                        >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                       & (0x76U 
                                                          != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) 
                                                   & (6U 
                                                      != 
                                                      (7U 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) 
                                                  & (0x70U 
                                                     != 
                                                     (0xf8U 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0 
        = ((6U == (0xc7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
           & (6U != (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                           >> 3U))));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0 
        = (((0x70U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
            & (0x75U >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
           | (0x77U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0 
        = (((0x46U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
            | ((0x4eU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
               | ((0x56U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                  | (0x5eU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))))) 
           | ((0x66U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
              | ((0x6eU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                 | (0x7eU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0 
        = ((0x88U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0x8fU >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hbdd8dcae__0 
        = (((0x80U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
            & (0x85U >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
           | (0x87U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0 
        = ((0x98U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0x9fU >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0 
        = ((0x90U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0x97U >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0 
        = ((0xa0U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0xa7U >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0 
        = ((0xa8U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0xafU >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0 
        = (((0xb8U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
            & (0xbdU >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
           | (0xbfU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0 
        = ((0xb0U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0xb7U >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->io_pixelY = vlSelf->io_dbg_ly;
    vlSelf->GameBoySoC__DOT__ppu__DOT__tileAddr = (0x3fffU 
                                                   & ((((0x10U 
                                                         & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC))
                                                         ? 0U
                                                         : 0x800U) 
                                                       + 
                                                       VL_SHIFTL_III(14,14,32, 
                                                                     (0x1ffU 
                                                                      & ((0x10U 
                                                                          & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC))
                                                                          ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileNum)
                                                                          : 
                                                                         ((IData)(0x80U) 
                                                                          + 
                                                                          ((0x100U 
                                                                            & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileNum) 
                                                                               << 1U)) 
                                                                           | (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileNum))))), 4U)) 
                                                      + 
                                                      (0x3ffU 
                                                       & VL_SHIFTL_III(10,10,32, 
                                                                       (7U 
                                                                        & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__scrolledY)), 1U))));
    vlSelf->io_hblank = (0U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__mode));
    vlSelf->io_vblank = (1U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__mode));
    GameBoySoC__DOT__ppu__DOT____VdfgTmp_hada5b228__0 
        = ((0x90U > (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg)) 
           & (IData)(vlSelf->io_lcdEnable));
    vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result 
        = (0xffU & ((0U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                  >> 6U))) ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_2104)
                     : ((1U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                      >> 6U))) ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8)
                         : ((2U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                          >> 6U))) ? 
                            ((~ ((IData)(1U) << (7U 
                                                 & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                    >> 3U)))) 
                             & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8))
                             : ((3U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                              >> 6U)))
                                 ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                    | ((IData)(1U) 
                                       << (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                 >> 3U))))
                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8))))));
    if ((0x40U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_correction 
            = (0xffU & (((0x10U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))
                          ? 0x60U : 0U) + ((0x20U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))
                                            ? 6U : 0U)));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_adjusted 
            = (0xffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled) 
                        - (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_correction)));
    } else {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_correction 
            = (0xffU & (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h54193848__0)
                          ? 0x60U : 0U) + ((1U & (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                   >> 5U) 
                                                  | (9U 
                                                     < 
                                                     (0xfU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)))))
                                            ? 6U : 0U)));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_adjusted 
            = (0xffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled) 
                        + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_correction)));
    }
    if ((0xfbU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    } else if ((0xf3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    } else if ((0x20U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    } else if ((0xc2U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    } else if ((0xc4U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    } else if ((0xc0U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    } else if ((0xc3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    } else if ((0x37U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    } else if ((0x3fU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    } else if ((0x2fU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    } else if ((0x27U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    } else if ((0x17U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    } else if ((0x1fU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    } else if ((0xfaU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    } else if ((0xeaU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    } else if ((8U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    } else if ((0xf9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    } else if ((0xf8U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT___u_out_H_T_8) 
                        >> 8U));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(GameBoySoC__DOT__cpu__DOT___u_out_H_T_8));
    } else {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_805 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_806 = (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    }
    GameBoySoC__DOT__cpu__DOT___u_operand_T_8 = ((2U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                      >> 4U)))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                       >> 4U)))
                                                   ? (IData)(GameBoySoC__DOT__cpu__DOT___u_result_T_3)
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                        >> 4U)))
                                                    ? (IData)(GameBoySoC__DOT__cpu__DOT___u_result_T)
                                                    : 0U)));
    if ((3U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                      >> 4U)))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_result 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_result_1 
            = (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                          - (IData)(1U)));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_operand 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_regPair 
            = (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled) 
                << 8U) | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled));
    } else {
        if ((2U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                          >> 4U)))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u_result 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL)));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u_result_1 
                = (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL) 
                              - (IData)(1U)));
        } else if ((1U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                 >> 4U)))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u_result 
                = (0xffffU & ((IData)(1U) + (IData)(GameBoySoC__DOT__cpu__DOT___u_result_T_3)));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u_result_1 
                = (0xffffU & ((IData)(GameBoySoC__DOT__cpu__DOT___u_result_T_3) 
                              - (IData)(1U)));
        } else if ((0U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                 >> 4U)))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u_result 
                = (0xffffU & ((IData)(1U) + (IData)(GameBoySoC__DOT__cpu__DOT___u_result_T)));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u_result_1 
                = (0xffffU & ((IData)(GameBoySoC__DOT__cpu__DOT___u_result_T) 
                              - (IData)(1U)));
        } else {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u_result 
                = (0xffffU & 0U);
            vlSelf->GameBoySoC__DOT__cpu__DOT__u_result_1 
                = (0xffffU & 0U);
        }
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_operand 
            = GameBoySoC__DOT__cpu__DOT___u_operand_T_8;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_regPair 
            = GameBoySoC__DOT__cpu__DOT___u_operand_T_8;
    }
    GameBoySoC__DOT__cpu__DOT___GEN_318 = ((IData)(GameBoySoC__DOT__cpu__DOT___u_T_137)
                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL)
                                            : 0U);
    vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_done = 
        ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
          ? ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)) 
             | (IData)(GameBoySoC__DOT__cpu__DOT___GEN_2165))
          : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_2165));
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_126 = (
                                                   (1U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_115)
                                                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle));
    if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_252 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_370 = (0xffffU 
                                               & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                                  - (IData)(1U)));
        GameBoySoC__DOT__cpu__DOT___GEN_140 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_446 = (0xffU 
                                               & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled) 
                                                  >> 8U));
        GameBoySoC__DOT__cpu__DOT___GEN_136 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_581 = vlSelf->GameBoySoC__DOT__cpu__DOT__imm16;
        GameBoySoC__DOT__cpu__DOT___GEN_367 = (0xffffU 
                                               & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                                  - (IData)(1U)));
        GameBoySoC__DOT__cpu__DOT___GEN_418 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_421 = GameBoySoC__DOT__cpu__DOT___GEN_374;
        GameBoySoC__DOT__cpu__DOT___GEN_131 = vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL;
        GameBoySoC__DOT__cpu__DOT___GEN_233 = vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL;
        GameBoySoC__DOT__cpu__DOT___GEN_251 = GameBoySoC__DOT__cpu__DOT___GEN_113;
        GameBoySoC__DOT__cpu__DOT___GEN_134 = GameBoySoC__DOT__cpu__DOT___GEN_113;
    } else {
        if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_252 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8;
            GameBoySoC__DOT__cpu__DOT___GEN_140 = 0U;
            GameBoySoC__DOT__cpu__DOT___GEN_446 = (0xffU 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled));
            GameBoySoC__DOT__cpu__DOT___GEN_136 = vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8;
            GameBoySoC__DOT__cpu__DOT___GEN_367 = (0xffffU 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                                      - (IData)(1U)));
            GameBoySoC__DOT__cpu__DOT___GEN_418 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_421 = GameBoySoC__DOT__cpu__DOT___GEN_374;
            GameBoySoC__DOT__cpu__DOT___GEN_131 = 0U;
        } else {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_252 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
            if ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
                GameBoySoC__DOT__cpu__DOT___GEN_140 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8;
                GameBoySoC__DOT__cpu__DOT___GEN_131 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL;
            } else {
                GameBoySoC__DOT__cpu__DOT___GEN_140 = 0U;
                GameBoySoC__DOT__cpu__DOT___GEN_131 = 0U;
            }
            GameBoySoC__DOT__cpu__DOT___GEN_446 = (0xffU 
                                                   & 0U);
            GameBoySoC__DOT__cpu__DOT___GEN_136 = 0U;
            GameBoySoC__DOT__cpu__DOT___GEN_367 = (0xffffU 
                                                   & 0U);
            GameBoySoC__DOT__cpu__DOT___GEN_418 = 0U;
            GameBoySoC__DOT__cpu__DOT___GEN_421 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        }
        GameBoySoC__DOT__cpu__DOT___GEN_370 = (0xffffU 
                                               & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                                  - 
                                                  (1U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))));
        GameBoySoC__DOT__cpu__DOT___GEN_581 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_233 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_251 = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
        GameBoySoC__DOT__cpu__DOT___GEN_134 = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_126;
    }
    vlSelf->io_dbg_IR = vlSelf->io_dbg_opcode;
    if (vlSelf->GameBoySoC__DOT__cpu__DOT__u_condition) {
        GameBoySoC__DOT__cpu__DOT___GEN_533 = GameBoySoC__DOT__cpu__DOT___GEN_253;
        GameBoySoC__DOT__cpu__DOT___GEN_531 = GameBoySoC__DOT__cpu__DOT___GEN_251;
    } else {
        GameBoySoC__DOT__cpu__DOT___GEN_533 = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        GameBoySoC__DOT__cpu__DOT___GEN_531 = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
    }
    if ((0x20U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT___GEN_768 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_765 = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0xc2U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT___GEN_768 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_765 = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0xc4U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT___GEN_768 = (0xffU 
                                               & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_condition)
                                                   ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_446)
                                                   : 0U));
        GameBoySoC__DOT__cpu__DOT___GEN_765 = GameBoySoC__DOT__cpu__DOT___GEN_533;
    } else if ((0xc0U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT___GEN_768 = (0xffU 
                                               & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_765 = GameBoySoC__DOT__cpu__DOT___GEN_533;
    } else if ((0xc3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_768 = (0xffU 
                                               & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_765 = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0x37U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_768 = (0xffU 
                                               & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_765 = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0x3fU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_768 = (0xffU 
                                               & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_765 = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0x2fU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_768 = (0xffU 
                                               & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_765 = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0x27U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_768 = (0xffU 
                                               & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_765 = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0x17U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_768 = (0xffU 
                                               & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_765 = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0x1fU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_768 = (0xffU 
                                               & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_765 = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0xfaU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_768 = (0xffU 
                                               & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_765 = GameBoySoC__DOT__cpu__DOT___GEN_236;
    } else if ((0xeaU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_768 = (0xffU 
                                               & ((0U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                   : 0U));
        GameBoySoC__DOT__cpu__DOT___GEN_765 = GameBoySoC__DOT__cpu__DOT___GEN_236;
    } else if ((8U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_768 = (0xffU 
                                               & ((0U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                    ? 
                                                   ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                                    >> 8U)
                                                    : 0U)));
        GameBoySoC__DOT__cpu__DOT___GEN_765 = GameBoySoC__DOT__cpu__DOT___GEN_253;
    } else {
        GameBoySoC__DOT__cpu__DOT___GEN_768 = (0xffU 
                                               & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_765 = ((0xf9U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                ? (3U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                : (3U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)));
    }
    GameBoySoC__DOT__cpu__DOT___GEN_808 = ((0xc7U == 
                                            (0xc7U 
                                             & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                            ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_368)
                                            : ((0xfbU 
                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                               & ((0xf3U 
                                                   != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                  & ((0x20U 
                                                      != 
                                                      (0xe7U 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
                                                     & ((0xc2U 
                                                         != 
                                                         (0xe7U 
                                                          & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
                                                        & ((0xc4U 
                                                            == 
                                                            (0xe7U 
                                                             & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                            ? 
                                                           ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_condition) 
                                                            & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_368))
                                                            : 
                                                           ((0xc0U 
                                                             != 
                                                             (0xe7U 
                                                              & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
                                                            & ((0xc3U 
                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                               & ((0x37U 
                                                                   != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                  & ((0x3fU 
                                                                      != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                     & ((0x2fU 
                                                                         != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                        & ((0x27U 
                                                                            != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                           & ((0x17U 
                                                                               != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                              & ((0x1fU 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xfaU 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xeaU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                                                                & (2U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)))
                                                                                 : 
                                                                                ((8U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                                 ? 
                                                                                (2U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                                                                & (2U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)))))))))))))))))))));
    if ((0xf3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_781 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_784 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0x20U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT___GEN_781 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_784 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0xc2U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT___GEN_781 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_784 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0xc4U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        if (vlSelf->GameBoySoC__DOT__cpu__DOT__u_condition) {
            GameBoySoC__DOT__cpu__DOT___GEN_781 = (0xffffU 
                                                   & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_367));
            GameBoySoC__DOT__cpu__DOT___GEN_784 = GameBoySoC__DOT__cpu__DOT___GEN_370;
        } else {
            GameBoySoC__DOT__cpu__DOT___GEN_781 = (0xffffU 
                                                   & 0U);
            GameBoySoC__DOT__cpu__DOT___GEN_784 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        }
    } else if ((0xc0U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        if (vlSelf->GameBoySoC__DOT__cpu__DOT__u_condition) {
            GameBoySoC__DOT__cpu__DOT___GEN_781 = (0xffffU 
                                                   & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_418));
            GameBoySoC__DOT__cpu__DOT___GEN_784 = GameBoySoC__DOT__cpu__DOT___GEN_421;
        } else {
            GameBoySoC__DOT__cpu__DOT___GEN_781 = (0xffffU 
                                                   & 0U);
            GameBoySoC__DOT__cpu__DOT___GEN_784 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        }
    } else if ((0xc3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_781 = (0xffffU 
                                               & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_784 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0x37U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_781 = (0xffffU 
                                               & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_784 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0x3fU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_781 = (0xffffU 
                                               & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_784 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0x2fU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_781 = (0xffffU 
                                               & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_784 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0x27U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_781 = (0xffffU 
                                               & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_784 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0x17U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_781 = (0xffffU 
                                               & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_784 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0x1fU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_781 = (0xffffU 
                                               & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_784 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0xfaU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_781 = (0xffffU 
                                               & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_581));
        GameBoySoC__DOT__cpu__DOT___GEN_784 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0xeaU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_781 = (0xffffU 
                                               & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_581));
        GameBoySoC__DOT__cpu__DOT___GEN_784 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((8U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_781 = (0xffffU 
                                               & ((0U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16)
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16))
                                                    : 0U)));
        GameBoySoC__DOT__cpu__DOT___GEN_784 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else {
        GameBoySoC__DOT__cpu__DOT___GEN_781 = (0xffffU 
                                               & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_784 = ((0xf9U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL)
                                                : (
                                                   (0xf8U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                    : 
                                                   ((0xe8U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_H_T_8)
                                                     : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled))));
    }
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1700 = 
        ((0xe9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
          : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84)
              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
              : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)
                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                  : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                      : ((0x36U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                          : ((0x1aU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                              : ((0x2aU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                  : ((0x3aU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                      : ((0x22U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                          : ((0x32U 
                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                              : ((0xf2U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                  : 
                                                 ((0xe2U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                   : 
                                                  ((0xe0U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                    : 
                                                   ((0xf0U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                     : 
                                                    ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                      : 
                                                     ((0x86U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                       : 
                                                      ((0xaeU 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                        : 
                                                       ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hbdd8dcae__0)
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                         : 
                                                        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                          : 
                                                         ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                           : 
                                                          ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                            : 
                                                           ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0)
                                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                             : 
                                                            ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                              : 
                                                             ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)
                                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                               : 
                                                              ((0xbeU 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                                : 
                                                               ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0)
                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                                 : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1102)))))))))))))))))))))))))));
    GameBoySoC__DOT__cpu__DOT___GEN_1195 = ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)
                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                             : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)
                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                 : 
                                                ((0xbeU 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                  : 
                                                 ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0)
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                   : 
                                                  ((0xc6U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                    : 
                                                   ((0xceU 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                     : 
                                                    ((0xd6U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                      : 
                                                     ((0xe6U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                       : 
                                                      ((0xeeU 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                        : 
                                                       ((0xf6U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                         : 
                                                        ((0xfeU 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                          : 
                                                         ((0x18U 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                           : 
                                                          ((0x10U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                            : 
                                                           ((0xc5U 
                                                             == 
                                                             (0xcfU 
                                                              & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                             : 
                                                            ((0xc1U 
                                                              == 
                                                              (0xcfU 
                                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                              : 
                                                             ((0xcdU 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                               : 
                                                              ((0xc9U 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                                : 
                                                               ((0xd9U 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                                 : 
                                                                ((0xc7U 
                                                                  == 
                                                                  (0xc7U 
                                                                   & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                                  : 
                                                                 ((0xfbU 
                                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                  | ((0xf3U 
                                                                      != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending))))))))))))))))))))));
    if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1258 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1250 = (1U 
                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                   >> 4U));
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1258 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1250 = (1U 
                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                   >> 4U));
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1258 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1250 = (1U 
                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                   >> 4U));
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1258 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1250 = (1U 
                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                   >> 4U));
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1258 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1250 = (1U 
                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                   >> 4U));
    } else if ((0xbeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1258 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1250 = (1U 
                                                & ((3U 
                                                    != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)) 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                      >> 4U)));
    } else {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1258 
            = ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0)
                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)
                : ((0xc6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)
                    : ((0xceU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)
                        : ((0xd6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)
                            : ((0xe6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)
                                : ((0xeeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)
                                    : ((0xf6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)
                                        : ((0xfeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)
                                            : ((0x18U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)
                                                : (
                                                   (0x10U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)
                                                    : 
                                                   ((0xc5U 
                                                     == 
                                                     (0xcfU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)
                                                     : 
                                                    ((0xc1U 
                                                      == 
                                                      (0xcfU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                      ? 
                                                     ((0U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                        ? 
                                                       ((3U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                         ? 
                                                        ((0U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                              >> 4U)))
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8)
                                                          : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled))
                                                         : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled))
                                                        : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)))
                                                      : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)))))))))))));
        GameBoySoC__DOT__cpu__DOT___GEN_1250 = (1U 
                                                & ((~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0)) 
                                                   & ((0xc6U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? 
                                                      ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                       >> 4U)
                                                       : 
                                                      ((0xceU 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                        ? 
                                                       ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                        >> 4U)
                                                        : 
                                                       ((0xd6U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                         ? 
                                                        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                         >> 4U)
                                                         : 
                                                        ((0xe6U 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                          ? 
                                                         ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                          >> 4U)
                                                          : 
                                                         ((0xeeU 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                           ? 
                                                          ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                           >> 4U)
                                                           : 
                                                          ((0xf6U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                            ? 
                                                           ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                            >> 4U)
                                                            : 
                                                           ((0xfeU 
                                                             != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                            & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                               >> 4U))))))))));
    }
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1168 = 
        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)
          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
          : ((0xbeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
              : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0)
                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
                  : ((0xc6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
                      : ((0xceU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
                          : ((0xd6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
                              : ((0xe6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
                                  : ((0xeeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
                                      : ((0xf6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
                                          : ((0xfeU 
                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
                                              : ((0x18U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
                                                  : 
                                                 ((0x10U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
                                                   : 
                                                  ((0xc5U 
                                                    == 
                                                    (0xcfU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
                                                    : 
                                                   ((0xc1U 
                                                     == 
                                                     (0xcfU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                       ? 
                                                      ((3U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                        ? 
                                                       ((0U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                             >> 4U)))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
                                                         : 
                                                        ((1U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                              >> 4U)))
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8)
                                                          : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)))
                                                        : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled))
                                                       : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)))
                                                     : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)))))))))))))));
    GameBoySoC__DOT__cpu__DOT___GEN_1438 = ((0xe2U 
                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                             ? 0U : 
                                            ((0xe0U 
                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                              ? 0U : 
                                             ((0xf0U 
                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                               ? 0U
                                               : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                   ? 0U
                                                   : 
                                                  ((0x86U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? 0U
                                                    : 
                                                   ((0xaeU 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? 
                                                    ((3U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                      ? 6U
                                                      : 0U)
                                                     : 
                                                    ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hbdd8dcae__0)
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)
                                                       ? 1U
                                                       : 
                                                      ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)
                                                        ? 2U
                                                        : 
                                                       ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)
                                                         ? 3U
                                                         : 
                                                        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0)
                                                          ? 4U
                                                          : 
                                                         ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)
                                                           ? 6U
                                                           : 
                                                          ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)
                                                            ? 5U
                                                            : 
                                                           ((0xbeU 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                             ? 
                                                            ((3U 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                              ? 2U
                                                              : 0U)
                                                             : 
                                                            ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0)
                                                              ? 2U
                                                              : 
                                                             ((0xc6U 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                               ? 0U
                                                               : 
                                                              ((0xceU 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                ? 1U
                                                                : 
                                                               ((0xd6U 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                 ? 2U
                                                                 : 
                                                                ((0xe6U 
                                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                  ? 4U
                                                                  : 
                                                                 ((0xeeU 
                                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                   ? 6U
                                                                   : 
                                                                  ((0xf6U 
                                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                    ? 5U
                                                                    : 
                                                                   ((0xfeU 
                                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                     ? 2U
                                                                     : 0U))))))))))))))))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_clear 
        = ((0U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__dotCounter)) 
           & (IData)(GameBoySoC__DOT__ppu__DOT____VdfgTmp_hada5b228__0));
    vlSelf->GameBoySoC__DOT__ppu__DOT____VdfgTmp_ha309eb35__0 
        = ((3U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__mode)) 
           & (IData)(GameBoySoC__DOT__ppu__DOT____VdfgTmp_hada5b228__0));
    GameBoySoC__DOT__cpu__DOT___cbOut_out_F_T = ((0x80U 
                                                  & (((0U 
                                                       == 
                                                       (3U 
                                                        & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                           >> 6U)))
                                                       ? 
                                                      (0U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result))
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                            >> 6U)))
                                                        ? 
                                                       (~ 
                                                        (0xffU 
                                                         & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                            >> 
                                                            (7U 
                                                             & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                >> 3U)))))
                                                        : 
                                                       ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                        >> 7U))) 
                                                     << 7U)) 
                                                 | ((0xffffffc0U 
                                                     & (((0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                              >> 6U))) 
                                                         << 6U) 
                                                        & (((1U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                 >> 6U))) 
                                                            << 6U) 
                                                           & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)))) 
                                                    | ((((0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                              >> 6U))) 
                                                         << 5U) 
                                                        & (((1U 
                                                             == 
                                                             (3U 
                                                              & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                 >> 6U))) 
                                                            << 5U) 
                                                           | (0xffffffe0U 
                                                              & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)))) 
                                                       | (0x10U 
                                                          & (((0U 
                                                               == 
                                                               (3U 
                                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                   >> 6U)))
                                                               ? 
                                                              ((0U 
                                                                == 
                                                                (7U 
                                                                 & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                    >> 3U)))
                                                                ? 
                                                               ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                                >> 7U)
                                                                : 
                                                               ((1U 
                                                                 == 
                                                                 (7U 
                                                                  & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                     >> 3U)))
                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8)
                                                                 : 
                                                                ((2U 
                                                                  == 
                                                                  (7U 
                                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                      >> 3U)))
                                                                  ? 
                                                                 ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((3U 
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
                                                               : 
                                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                               >> 4U)) 
                                                             << 4U)))));
    if ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
        if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1946 = 0U;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1944 
                = ((1U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))
                    ? 0x40U : ((2U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))
                                ? 0x48U : ((4U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))
                                            ? 0x50U
                                            : ((8U 
                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))
                                                ? 0x58U
                                                : (
                                                   (0x10U 
                                                    & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))
                                                    ? 0x60U
                                                    : 0U)))));
        } else {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1946 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1944 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__PC;
        }
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1943 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1934;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1945 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1938;
        if ((6U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_B 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_C 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_D 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_E 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_H 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_L 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
        } else if ((0U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_B 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result;
            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_C 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_D 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_E 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_H 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_L 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
        } else {
            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_B 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled;
            if ((1U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_C 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result;
                vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_D 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
                vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_E 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
                vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_H 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
                vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_L 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
                vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_C 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
                if ((2U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_D 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_E 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_H 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_L 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
                } else {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_D 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
                    if ((3U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))) {
                        vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_E 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result;
                        vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_H 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
                        vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_L 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
                        vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
                    } else {
                        vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_E 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
                        if ((4U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))) {
                            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_H 
                                = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result;
                            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_L 
                                = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
                            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A 
                                = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
                        } else {
                            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_H 
                                = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
                            if ((5U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))) {
                                vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_L 
                                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result;
                                vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A 
                                    = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
                            } else {
                                vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_L 
                                    = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
                                vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A 
                                    = ((7U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result)
                                        : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                            }
                        }
                    }
                }
            }
        }
        vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_F 
            = GameBoySoC__DOT__cpu__DOT___cbOut_out_F_T;
    } else {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1946 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1944 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__PC;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1943 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1945 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
        vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_B 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_C 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_D 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_E 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_H 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_L 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_F 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
    }
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1009 = 
        ((0xeeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
          : ((0xf6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
              : ((0xfeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
                  : ((0x18U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
                      : ((0x10U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
                          : ((0xc5U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
                              : ((0xc1U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                  ? ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
                                      : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                          ? ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                              ? ((0U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                      >> 4U)))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
                                                  : 
                                                 ((1U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                       >> 4U)))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8)
                                                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled))))
                                              : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled))
                                          : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)))
                                  : ((0xcdU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
                                      : ((0xc9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
                                          : ((0xd9U 
                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
                                              : ((0xc7U 
                                                  == 
                                                  (0xc7U 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
                                                  : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_806))))))))))));
    GameBoySoC__DOT__cpu__DOT___GEN_1396 = ((0xf0U 
                                             != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                            & ((~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)) 
                                               & ((0x86U 
                                                   != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                  & ((0xaeU 
                                                      != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                     & ((~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hbdd8dcae__0)) 
                                                        & ((~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)) 
                                                           & ((~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)) 
                                                              & ((~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)) 
                                                                 & ((~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0)) 
                                                                    & ((~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)) 
                                                                       & ((~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)) 
                                                                          & ((0xbeU 
                                                                              != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                             & ((~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0)) 
                                                                                & ((0xc6U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xceU 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xd6U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xe6U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xeeU 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xf6U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xfeU 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0x18U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0x10U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xc5U 
                                                                                == 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_368)
                                                                                 : 
                                                                                ((0xc1U 
                                                                                != 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
                                                                                & ((0xcdU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_368)
                                                                                 : 
                                                                                ((0xc9U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xd9U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_808))))))))))))))))))))))))))));
    if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0xbeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = GameBoySoC__DOT__cpu__DOT___GEN_318;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0xc6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0xceU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0xd6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0xe6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0xeeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0xf6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0xfeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0x18U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0x10U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0xc5U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = GameBoySoC__DOT__cpu__DOT___GEN_367;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = GameBoySoC__DOT__cpu__DOT___GEN_370;
    } else if ((0xc1U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = GameBoySoC__DOT__cpu__DOT___GEN_418;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = GameBoySoC__DOT__cpu__DOT___GEN_421;
    } else if ((0xcdU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = GameBoySoC__DOT__cpu__DOT___GEN_367;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = GameBoySoC__DOT__cpu__DOT___GEN_370;
    } else if ((0xc9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = GameBoySoC__DOT__cpu__DOT___GEN_418;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = GameBoySoC__DOT__cpu__DOT___GEN_421;
    } else if ((0xd9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = GameBoySoC__DOT__cpu__DOT___GEN_418;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = GameBoySoC__DOT__cpu__DOT___GEN_421;
    } else if ((0xc7U == (0xc7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = GameBoySoC__DOT__cpu__DOT___GEN_367;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = GameBoySoC__DOT__cpu__DOT___GEN_370;
    } else if ((0xfbU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else {
        GameBoySoC__DOT__cpu__DOT___GEN_1202 = GameBoySoC__DOT__cpu__DOT___GEN_781;
        GameBoySoC__DOT__cpu__DOT___GEN_1208 = GameBoySoC__DOT__cpu__DOT___GEN_784;
    }
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1770 = 
        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
          : ((0x34U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
              : ((0x35U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                  : ((0xe9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                      : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84)
                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                          : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)
                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                              : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                  : ((0x36U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                      : ((0x1aU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                          : ((0x2aU 
                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                              : ((0x3aU 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                  : 
                                                 ((0x22U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                   : 
                                                  ((0x32U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                    : 
                                                   ((0xf2U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                     : 
                                                    ((0xe2U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                      : 
                                                     ((0xe0U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                       : 
                                                      ((0xf0U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                        : 
                                                       ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                         : 
                                                        ((0x86U 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                          : 
                                                         ((0xaeU 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                           : 
                                                          ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hbdd8dcae__0)
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                            : 
                                                           ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)
                                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                             : 
                                                            ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                              : 
                                                             ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)
                                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                               : 
                                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0)
                                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                                : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1195))))))))))))))))))))))))));
    GameBoySoC__DOT__cpu__DOT___GEN_1582 = (1U & ((0x1aU 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                   ? 
                                                  ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                   >> 4U)
                                                   : 
                                                  ((0x2aU 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? 
                                                   ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                    >> 4U)
                                                    : 
                                                   ((0x3aU 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? 
                                                    ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                     >> 4U)
                                                     : 
                                                    ((0x22U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? 
                                                     ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                      >> 4U)
                                                      : 
                                                     ((0x32U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? 
                                                      ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                       >> 4U)
                                                       : 
                                                      ((0xf2U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                        ? 
                                                       ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                        >> 4U)
                                                        : 
                                                       ((0xe2U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                         ? 
                                                        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                         >> 4U)
                                                         : 
                                                        ((0xe0U 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                          ? 
                                                         ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                          >> 4U)
                                                          : 
                                                         ((0xf0U 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                           ? 
                                                          ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                           >> 4U)
                                                           : 
                                                          ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                            ? 
                                                           ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                            >> 4U)
                                                            : 
                                                           ((0x86U 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                             ? 
                                                            ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                             >> 4U)
                                                             : 
                                                            ((0xaeU 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                              ? 
                                                             ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                              >> 4U)
                                                              : 
                                                             ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hbdd8dcae__0)
                                                               ? 
                                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                               >> 4U)
                                                               : 
                                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)
                                                                ? 
                                                               ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                                >> 4U)
                                                                : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1250))))))))))))))));
    GameBoySoC__DOT__cpu__DOT___GEN_1487 = ((0x32U 
                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                             ? 0U : 
                                            ((0xf2U 
                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                              ? 0U : 
                                             ((0xe2U 
                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                               ? 0U
                                               : ((0xe0U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                   ? 0U
                                                   : 
                                                  ((0xf0U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                     ? 0U
                                                     : 
                                                    ((0x86U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_321)
                                                      : 
                                                     ((0xaeU 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_321)
                                                       : 
                                                      ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hbdd8dcae__0)
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                        : 
                                                       ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                         : 
                                                        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                          : 
                                                         ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                           : 
                                                          ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0)
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                            : 
                                                           ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)
                                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                             : 
                                                            ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                              : 
                                                             ((0xbeU 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                               ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_321)
                                                               : 
                                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0)
                                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                                : 
                                                               ((0xc6U 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                                 : 
                                                                ((0xceU 
                                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                                  : 
                                                                 ((0xd6U 
                                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                                   : 
                                                                  ((0xe6U 
                                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                                    : 
                                                                   ((0xeeU 
                                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                                     : 
                                                                    ((0xf6U 
                                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                                      : 
                                                                     ((0xfeU 
                                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                                       : 0U))))))))))))))))))))))));
    if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0) {
        GameBoySoC__DOT__cpu__DOT___GEN_1772 = vlSelf->GameBoySoC__DOT__cpu__DOT__u_oldVal;
        GameBoySoC__DOT__cpu__DOT___GEN_1791 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0) {
        GameBoySoC__DOT__cpu__DOT___GEN_1772 = vlSelf->GameBoySoC__DOT__cpu__DOT__u_oldVal;
        GameBoySoC__DOT__cpu__DOT___GEN_1791 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0x34U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1772 = GameBoySoC__DOT__cpu__DOT___GEN_136;
        GameBoySoC__DOT__cpu__DOT___GEN_1791 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0x35U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1772 = GameBoySoC__DOT__cpu__DOT___GEN_136;
        GameBoySoC__DOT__cpu__DOT___GEN_1791 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0xe9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1772 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1791 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84) {
        GameBoySoC__DOT__cpu__DOT___GEN_1772 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1791 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0) {
        GameBoySoC__DOT__cpu__DOT___GEN_1772 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1791 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0) {
        GameBoySoC__DOT__cpu__DOT___GEN_1772 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1791 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0x36U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1772 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1791 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0x1aU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1772 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1791 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0x2aU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1772 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1791 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0x3aU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1772 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1791 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else if ((0x22U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1772 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1791 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else {
        GameBoySoC__DOT__cpu__DOT___GEN_1772 = GameBoySoC__DOT__cpu__DOT___GEN_1487;
        GameBoySoC__DOT__cpu__DOT___GEN_1791 = ((0x32U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                 : 
                                                ((0xf2U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                  : 
                                                 ((0xe2U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                   : 
                                                  ((0xe0U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                    : 
                                                   ((0xf0U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                     : 
                                                    ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                      : 
                                                     ((0x86U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                       : 
                                                      ((0xaeU 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                        : 
                                                       ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hbdd8dcae__0)
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                         : 
                                                        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                          : 
                                                         ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                           : 
                                                          ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                            : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1208)))))))))))));
    }
    if (vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_clear) {
        vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_15 = 0U;
        GameBoySoC__DOT__ppu__DOT___GEN_17 = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_16 = 0U;
    } else {
        vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_15 
            = vlSelf->GameBoySoC__DOT__ppu__DOT__xPos;
        GameBoySoC__DOT__ppu__DOT___GEN_17 = vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState;
        vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_16 
            = vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX;
    }
    if ((1U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
        vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_88 
            = vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow;
        vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_89 
            = vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh;
        vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_87 = 4U;
        vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_99 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_16));
    } else if ((4U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
        vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_88 
            = vlSelf->GameBoySoC__DOT__ppu__DOT__vram__DOT__mem_io_rdata_MPORT_data;
        vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_89 
            = vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh;
        vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_87 = 3U;
        vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_99 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_16));
    } else {
        vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_88 
            = vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow;
        if ((3U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
            vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_89 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh;
            vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_87 = 5U;
            vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_99 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_16));
        } else if ((5U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
            vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_89 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__vram__DOT__mem_io_rdata_MPORT_data;
            vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_87 = 6U;
            vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_99 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_16));
        } else {
            vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_89 
                = vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh;
            if ((6U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
                if ((0x10U >= (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count))) {
                    vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_87 = 0U;
                    vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_99 
                        = (0xffU & ((IData)(8U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX)));
                } else {
                    vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_87 
                        = GameBoySoC__DOT__ppu__DOT___GEN_17;
                    vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_99 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_16));
                }
            } else {
                vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_87 
                    = GameBoySoC__DOT__ppu__DOT___GEN_17;
                vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_99 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_16));
            }
        }
    }
    vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_19 = ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_clear)
                                                   ? 
                                                  (7U 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX))
                                                   : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__discardPixels));
    if (vlSelf->GameBoySoC__DOT__ppu__DOT____VdfgTmp_ha309eb35__0) {
        vlSelf->GameBoySoC__DOT__ppu__DOT__vram_io_read 
            = ((0U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState)) 
               | ((2U != (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState)) 
                  & ((1U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState)) 
                     | ((4U != (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState)) 
                        & (3U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))))));
        vlSelf->io_pixelValid = ((IData)(GameBoySoC__DOT__ppu__DOT___T_37) 
                                 & (0U >= (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__discardPixels)));
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable 
            = ((0U != (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState)) 
               & ((2U != (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState)) 
                  & ((1U != (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState)) 
                     & ((4U != (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState)) 
                        & ((3U != (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState)) 
                           & ((5U != (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState)) 
                              & ((6U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState)) 
                                 & (0x10U >= (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count)))))))));
        vlSelf->io_pixelColor = ((IData)(GameBoySoC__DOT__ppu__DOT___T_37)
                                  ? ((0U < (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__discardPixels))
                                      ? 0U : (3U & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___palPx_T)))
                                  : 0U);
        if ((0U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0U;
        } else if ((2U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0U;
        } else if ((1U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0U;
        } else if ((4U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0U;
        } else if ((3U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0U;
        } else if ((5U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0U;
        } else if ((6U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
            if ((0x10U >= (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count))) {
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 
                    = (1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                             >> 6U));
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 
                    = (1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                             >> 5U));
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 
                    = (1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                             >> 4U));
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 
                    = (1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                             >> 3U));
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 
                    = (1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                             >> 2U));
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 
                    = (1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                             >> 1U));
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 
                    = (1U & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow));
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 
                    = ((2U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh) 
                              >> 6U)) | (1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                               >> 7U)));
            } else {
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0U;
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0U;
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0U;
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0U;
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0U;
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0U;
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0U;
                vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0U;
            }
        } else {
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0U;
            vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0U;
        }
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_popEnable 
            = GameBoySoC__DOT__ppu__DOT___T_37;
    } else {
        vlSelf->GameBoySoC__DOT__ppu__DOT__vram_io_read = 0U;
        vlSelf->io_pixelValid = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable = 0U;
        vlSelf->io_pixelColor = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_popEnable = 0U;
    }
    GameBoySoC__DOT__cpu__DOT___GEN_681 = ((0x2fU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                            ? (0x60U 
                                               | (0x90U 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)))
                                            : ((0x27U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                ? (
                                                   ((0U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_adjusted)) 
                                                    << 7U) 
                                                   | ((0x40U 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)) 
                                                      | (0x10U 
                                                         & (((0x40U 
                                                              & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))
                                                              ? 
                                                             ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                              >> 4U)
                                                              : 
                                                             ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h54193848__0) 
                                                              | ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                                 >> 4U))) 
                                                            << 4U))))
                                                : (
                                                   (0x17U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? 
                                                   ((3U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                     ? 
                                                    (0x10U 
                                                     & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled) 
                                                        >> 3U))
                                                     : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))
                                                    : 
                                                   ((0x1fU 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? 
                                                    ((3U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                      ? 
                                                     (0x10U 
                                                      & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled) 
                                                         << 4U))
                                                      : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))
                                                     : 
                                                    ((0xfaU 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                      : 
                                                     ((0xeaU 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                       : 
                                                      ((8U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                        : 
                                                       ((0xf9U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                         : 
                                                        ((0xf8U 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                          ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_36)
                                                          : 
                                                         ((0xe8U 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                           ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_36)
                                                           : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)))))))))));
    vlSelf->GameBoySoC__DOT__cpu__DOT__u_result_2 = 
        (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL) 
                    + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_operand)));
    if ((0xceU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1068 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1063 = (3U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0xd6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1068 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1063 = (3U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0xe6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1068 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1063 = (3U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0xeeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1068 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1063 = (3U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0xf6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1068 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1063 = (3U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0xfeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1068 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1063 = (3U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0x18U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1068 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1063 = (3U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0x10U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1068 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1063 = (3U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0xc5U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1068 = (0xffU 
                                                & ((0U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                    ? 
                                                   ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_regPair) 
                                                    >> 8U)
                                                    : 
                                                   ((1U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_regPair)
                                                     : 0U)));
        GameBoySoC__DOT__cpu__DOT___GEN_1063 = GameBoySoC__DOT__cpu__DOT___GEN_253;
    } else if ((0xc1U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1068 = (0xffU 
                                                & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_1063 = GameBoySoC__DOT__cpu__DOT___GEN_253;
    } else if ((0xcdU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1068 = (0xffU 
                                                & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_446));
        GameBoySoC__DOT__cpu__DOT___GEN_1063 = GameBoySoC__DOT__cpu__DOT___GEN_141;
    } else if ((0xc9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1068 = (0xffU 
                                                & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_1063 = GameBoySoC__DOT__cpu__DOT___GEN_253;
    } else if ((0xd9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1068 = (0xffU 
                                                & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_1063 = GameBoySoC__DOT__cpu__DOT___GEN_253;
    } else if ((0xc7U == (0xc7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1068 = (0xffU 
                                                & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_446));
        GameBoySoC__DOT__cpu__DOT___GEN_1063 = GameBoySoC__DOT__cpu__DOT___GEN_253;
    } else if ((0xfbU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1068 = (0xffU 
                                                & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_1063 = (3U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0xf3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1068 = (0xffU 
                                                & 0U);
        GameBoySoC__DOT__cpu__DOT___GEN_1063 = (3U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else {
        GameBoySoC__DOT__cpu__DOT___GEN_1068 = (0xffU 
                                                & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_768));
        GameBoySoC__DOT__cpu__DOT___GEN_1063 = GameBoySoC__DOT__cpu__DOT___GEN_765;
    }
    GameBoySoC__DOT__cpu__DOT___GEN_1477 = ((0x32U 
                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                             ? (3U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                             : ((0xf2U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_253)
                                                 : 
                                                ((0xe2U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                  ? 
                                                 (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                  : 
                                                 ((0xe0U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                   ? 
                                                  (3U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                   : 
                                                  ((0xf0U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? 
                                                   (3U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                    : 
                                                   ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                     ? 
                                                    (3U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                     : 
                                                    ((0x86U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? 
                                                     (3U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                      : 
                                                     ((0xaeU 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? 
                                                      (3U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                       : 
                                                      ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hbdd8dcae__0)
                                                        ? 
                                                       (3U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                        : 
                                                       ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)
                                                         ? 
                                                        (3U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                         : 
                                                        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)
                                                          ? 
                                                         (3U 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                          : 
                                                         ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)
                                                           ? 
                                                          (3U 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                           : 
                                                          ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0)
                                                            ? 
                                                           (3U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                            : 
                                                           ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)
                                                             ? 
                                                            (3U 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                             : 
                                                            ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)
                                                              ? 
                                                             (3U 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                              : 
                                                             ((0xbeU 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                               ? 
                                                              (3U 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                               : 
                                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0)
                                                                ? 
                                                               (3U 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                                : 
                                                               ((0xc6U 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                 ? 
                                                                (3U 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                                 : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1063)))))))))))))))))));
    GameBoySoC__DOT__cpu__DOT___GEN_841 = ((0xc9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                            ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_251)
                                            : ((0xd9U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_251)
                                                : (
                                                   (0xc7U 
                                                    == 
                                                    (0xc7U 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                    ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_251)
                                                    : 
                                                   ((0xfbU 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                     : 
                                                    ((0xf3U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                      : 
                                                     ((0x20U 
                                                       == 
                                                       (0xe7U 
                                                        & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                       : 
                                                      ((0xc2U 
                                                        == 
                                                        (0xe7U 
                                                         & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                        : 
                                                       ((0xc4U 
                                                         == 
                                                         (0xe7U 
                                                          & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                         ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_531)
                                                         : 
                                                        ((0xc0U 
                                                          == 
                                                          (0xe7U 
                                                           & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                          ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_531)
                                                          : 
                                                         ((0xc3U 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                           : 
                                                          ((0x37U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                            : 
                                                           ((0x3fU 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                             : 
                                                            ((0x2fU 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                              : 
                                                             ((0x27U 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                               : 
                                                              ((0x17U 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                : 
                                                               ((0x1fU 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                 : 
                                                                ((0xfaU 
                                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                  : 
                                                                 ((0xeaU 
                                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                   : 
                                                                  ((8U 
                                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                    ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_251)
                                                                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))))))))))))))))))));
    GameBoySoC__DOT__cpu__DOT___GEN_1880 = ((1U != 
                                             (0xcfU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
                                            & ((3U 
                                                != 
                                                (0xcfU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
                                               & ((0xbU 
                                                   != 
                                                   (0xcfU 
                                                    & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
                                                  & ((9U 
                                                      != 
                                                      (0xcfU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
                                                     & ((~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)) 
                                                        & ((~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)) 
                                                           & ((0x34U 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                               ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_139)
                                                               : 
                                                              ((0x35U 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_139)
                                                                : 
                                                               ((0xe9U 
                                                                 != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                & ((~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84)) 
                                                                   & ((~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)) 
                                                                      & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
                                                                          ? 
                                                                         (2U 
                                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                                          : 
                                                                         ((0x36U 
                                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                           ? 
                                                                          (0U 
                                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                           : 
                                                                          ((0x1aU 
                                                                            != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                           & ((0x2aU 
                                                                               != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                              & ((0x3aU 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0x22U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 
                                                                                (2U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                                                 : 
                                                                                ((0x32U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 
                                                                                (2U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                                                 : 
                                                                                ((0xf2U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xe2U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 
                                                                                (2U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                                                 : 
                                                                                ((0xe0U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 
                                                                                (2U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                                                 : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1396))))))))))))))))))))));
    GameBoySoC__DOT__cpu__DOT___GEN_1610 = ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL)
                                             : ((0x36U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_233)
                                                 : 
                                                ((0x1aU 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                  ? 
                                                 ((IData)(GameBoySoC__DOT__cpu__DOT___u_T_137)
                                                   ? (IData)(GameBoySoC__DOT__cpu__DOT___u_result_T_3)
                                                   : 0U)
                                                  : 
                                                 ((0x2aU 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                   ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_233)
                                                   : 
                                                  ((0x3aU 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL)
                                                     : 0U)
                                                    : 
                                                   ((0x22U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL)
                                                     : 
                                                    ((0x32U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL)
                                                      : 
                                                     ((0xf2U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? 
                                                      ((0U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                        ? 
                                                       (0xff00U 
                                                        | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled))
                                                        : 0U)
                                                       : 
                                                      ((0xe2U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                        ? 
                                                       (0xff00U 
                                                        | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled))
                                                        : 
                                                       ((0xe0U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                         ? 
                                                        (0xff00U 
                                                         | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8))
                                                         : 
                                                        ((0xf0U 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                          ? 
                                                         ((IData)(GameBoySoC__DOT__cpu__DOT___u_T_137)
                                                           ? 
                                                          (0xff00U 
                                                           | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8))
                                                           : 0U)
                                                          : 
                                                         ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL)
                                                           : 
                                                          ((0x86U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                            ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_318)
                                                            : 
                                                           ((0xaeU 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                             ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_318)
                                                             : 
                                                            ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hbdd8dcae__0)
                                                              ? 0U
                                                              : 
                                                             ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)
                                                               ? 0U
                                                               : 
                                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)
                                                                ? 0U
                                                                : 
                                                               ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)
                                                                 ? 0U
                                                                 : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1202)))))))))))))))))));
    if ((1U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1883 = (1U 
                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                   >> 4U));
        GameBoySoC__DOT__cpu__DOT___GEN_1869 = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                     >> 4U)))
                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                      >> 4U)))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                       >> 4U)))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16)
                                                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)))));
    } else if ((3U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1883 = (1U 
                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                   >> 4U));
        GameBoySoC__DOT__cpu__DOT___GEN_1869 = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                     >> 4U)))
                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                      >> 4U)))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                       >> 4U)))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_result)
                                                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)))));
    } else if ((0xbU == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1883 = (1U 
                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                   >> 4U));
        GameBoySoC__DOT__cpu__DOT___GEN_1869 = ((0U 
                                                 == 
                                                 (3U 
                                                  & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                     >> 4U)))
                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                 : 
                                                ((1U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                      >> 4U)))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                       >> 4U)))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                        >> 4U)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_result_1)
                                                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)))));
    } else if ((9U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT___GEN_1883 = (1U 
                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                   >> 4U));
        GameBoySoC__DOT__cpu__DOT___GEN_1869 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    } else {
        GameBoySoC__DOT__cpu__DOT___GEN_1883 = (1U 
                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                                                    ? 
                                                   ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                    >> 4U)
                                                    : 
                                                   ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
                                                     ? 
                                                    ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                     >> 4U)
                                                     : 
                                                    ((0x34U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? 
                                                     ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                      >> 4U)
                                                      : 
                                                     ((0x35U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? 
                                                      ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                       >> 4U)
                                                       : 
                                                      ((0xe9U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                        ? 
                                                       ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                        >> 4U)
                                                        : 
                                                       ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84)
                                                         ? 
                                                        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                         >> 4U)
                                                         : 
                                                        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)
                                                          ? 
                                                         ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                          >> 4U)
                                                          : 
                                                         ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
                                                           ? 
                                                          ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                           >> 4U)
                                                           : 
                                                          ((0x36U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                            ? 
                                                           ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                            >> 4U)
                                                            : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1582)))))))))));
        GameBoySoC__DOT__cpu__DOT___GEN_1869 = GameBoySoC__DOT__cpu__DOT___GEN_1791;
    }
    vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_139 = ((IData)(GameBoySoC__DOT__ppu__DOT___T_37)
                                                    ? 
                                                   ((0U 
                                                     < (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__discardPixels))
                                                     ? 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__discardPixels) 
                                                        - (IData)(1U)))
                                                     : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_19))
                                                    : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_19));
    GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT____VdfgTmp_h48ab0a71__0 
        = ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_popEnable) 
           & (0U < (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count)));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_256 
        = ((0U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_0)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_257 
        = ((1U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((1U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((1U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((1U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((1U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((1U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((1U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((1U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_1)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_258 
        = ((2U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((2U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((2U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((2U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((2U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((2U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((2U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((2U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_2)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_259 
        = ((3U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((3U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((3U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((3U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((3U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((3U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((3U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((3U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_3)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_260 
        = ((4U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((4U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((4U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((4U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((4U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((4U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((4U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((4U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_4)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_261 
        = ((5U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((5U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((5U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((5U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((5U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((5U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((5U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((5U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_5)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_262 
        = ((6U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((6U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((6U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((6U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((6U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((6U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((6U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((6U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_6)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_263 
        = ((7U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((7U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((7U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((7U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((7U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((7U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((7U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((7U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_7)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_264 
        = ((8U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((8U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((8U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((8U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((8U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((8U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((8U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((8U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_8)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_265 
        = ((9U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((9U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((9U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((9U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((9U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((9U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((9U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((9U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_9)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_266 
        = ((0xaU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0xaU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0xaU == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0xaU == (0x1fU & ((IData)(4U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0xaU == (0x1fU & ((IData)(3U) 
                                              + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0xaU == (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0xaU == (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0xaU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_10)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_267 
        = ((0xbU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0xbU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0xbU == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0xbU == (0x1fU & ((IData)(4U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0xbU == (0x1fU & ((IData)(3U) 
                                              + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0xbU == (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0xbU == (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0xbU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_11)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_268 
        = ((0xcU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0xcU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0xcU == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0xcU == (0x1fU & ((IData)(4U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0xcU == (0x1fU & ((IData)(3U) 
                                              + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0xcU == (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0xcU == (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0xcU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_12)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_269 
        = ((0xdU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0xdU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0xdU == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0xdU == (0x1fU & ((IData)(4U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0xdU == (0x1fU & ((IData)(3U) 
                                              + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0xdU == (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0xdU == (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0xdU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_13)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_270 
        = ((0xeU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0xeU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0xeU == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0xeU == (0x1fU & ((IData)(4U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0xeU == (0x1fU & ((IData)(3U) 
                                              + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0xeU == (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0xeU == (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0xeU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_14)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_271 
        = ((0xfU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0xfU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0xfU == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0xfU == (0x1fU & ((IData)(4U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0xfU == (0x1fU & ((IData)(3U) 
                                              + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0xfU == (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0xfU == (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0xfU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_15)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_272 
        = ((0x10U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x10U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x10U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x10U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x10U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x10U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x10U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x10U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_16)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_273 
        = ((0x11U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x11U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x11U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x11U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x11U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x11U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x11U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x11U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_17)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_274 
        = ((0x12U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x12U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x12U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x12U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x12U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x12U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x12U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x12U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_18)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_275 
        = ((0x13U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x13U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x13U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x13U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x13U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x13U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x13U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x13U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_19)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_276 
        = ((0x14U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x14U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x14U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x14U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x14U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x14U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x14U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x14U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_20)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_277 
        = ((0x15U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x15U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x15U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x15U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x15U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x15U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x15U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x15U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_21)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_278 
        = ((0x16U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x16U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x16U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x16U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x16U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x16U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x16U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x16U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_22)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_279 
        = ((0x17U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x17U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x17U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x17U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x17U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x17U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x17U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x17U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_23)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_280 
        = ((0x18U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x18U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x18U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x18U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x18U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x18U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x18U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x18U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_24)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_281 
        = ((0x19U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x19U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x19U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x19U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x19U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x19U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x19U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x19U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_25)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_282 
        = ((0x1aU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x1aU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x1aU == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x1aU == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x1aU == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x1aU == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x1aU == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x1aU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_26)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_283 
        = ((0x1bU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x1bU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x1bU == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x1bU == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x1bU == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x1bU == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x1bU == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x1bU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_27)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_284 
        = ((0x1cU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x1cU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x1cU == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x1cU == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x1cU == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x1cU == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x1cU == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x1cU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_28)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_285 
        = ((0x1dU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x1dU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x1dU == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x1dU == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x1dU == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x1dU == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x1dU == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x1dU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_29)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_286 
        = ((0x1eU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x1eU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x1eU == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x1eU == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x1eU == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x1eU == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x1eU == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x1eU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_30)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_287 
        = ((0x1fU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x1fU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x1fU == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x1fU == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x1fU == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x1fU == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x1fU == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x1fU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_31)))))))));
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_879 = (
                                                   (0xc1U 
                                                    == 
                                                    (0xcfU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                      ? 
                                                     ((3U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                            >> 4U)))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                        : 
                                                       ((1U 
                                                         == 
                                                         (3U 
                                                          & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                             >> 4U)))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                         : 
                                                        ((2U 
                                                          == 
                                                          (3U 
                                                           & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                              >> 4U)))
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                          : 
                                                         ((3U 
                                                           == 
                                                           (3U 
                                                            & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                               >> 4U)))
                                                           ? 
                                                          (0xf0U 
                                                           & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8))
                                                           : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)))))
                                                       : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))
                                                      : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)))
                                                    : 
                                                   ((0xcdU 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                     : 
                                                    ((0xc9U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                      : 
                                                     ((0xd9U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                       : 
                                                      ((0xc7U 
                                                        == 
                                                        (0xc7U 
                                                         & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                        : 
                                                       ((0xfbU 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                         : 
                                                        ((0xf3U 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                          : 
                                                         ((0x20U 
                                                           == 
                                                           (0xe7U 
                                                            & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                           : 
                                                          ((0xc2U 
                                                            == 
                                                            (0xe7U 
                                                             & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                            : 
                                                           ((0xc4U 
                                                             == 
                                                             (0xe7U 
                                                              & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                             : 
                                                            ((0xc0U 
                                                              == 
                                                              (0xe7U 
                                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                              : 
                                                             ((0xc3U 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                               : 
                                                              ((0x37U 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                ? 
                                                               (0x10U 
                                                                | (0x80U 
                                                                   & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)))
                                                                : 
                                                               ((0x3fU 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                 ? 
                                                                ((0x80U 
                                                                  & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)) 
                                                                 | (0x10U 
                                                                    & ((~ 
                                                                        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                                         >> 4U)) 
                                                                       << 4U)))
                                                                 : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_681)))))))))))))));
    GameBoySoC__DOT__cpu__DOT___GEN_1589 = ((0x36U 
                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                             ? ((0U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                 : 0U)
                                             : ((0x1aU 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                 ? 0U
                                                 : 
                                                ((0x2aU 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                  ? 0U
                                                  : 
                                                 ((0x3aU 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                   ? 0U
                                                   : 
                                                  ((0x22U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                    : 
                                                   ((0x32U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                     : 
                                                    ((0xf2U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? 0U
                                                      : 
                                                     ((0xe2U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                       : 
                                                      ((0xe0U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                        : 
                                                       ((0xf0U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                          ? 0U
                                                          : 
                                                         ((0x86U 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                           ? 0U
                                                           : 
                                                          ((0xaeU 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                            ? 0U
                                                            : 
                                                           ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hbdd8dcae__0)
                                                             ? 0U
                                                             : 
                                                            ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)
                                                              ? 0U
                                                              : 
                                                             ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)
                                                               ? 0U
                                                               : 
                                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)
                                                                ? 0U
                                                                : 
                                                               ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0)
                                                                 ? 0U
                                                                 : 
                                                                ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)
                                                                  ? 0U
                                                                  : 
                                                                 ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)
                                                                   ? 0U
                                                                   : 
                                                                  ((0xbeU 
                                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                    ? 0U
                                                                    : 
                                                                   ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0)
                                                                     ? 0U
                                                                     : 
                                                                    ((0xc6U 
                                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                      ? 0U
                                                                      : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1068))))))))))))))))))))))));
    GameBoySoC__DOT__cpu__DOT___GEN_1849 = ((3U == 
                                             (0xcfU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                             ? 0U : 
                                            ((0xbU 
                                              == (0xcfU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                              ? 0U : 
                                             ((9U == 
                                               (0xcfU 
                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                               ? 0U
                                               : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                                                   ? 8U
                                                   : 
                                                  ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
                                                    ? 9U
                                                    : 
                                                   ((0x34U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                       ? 8U
                                                       : 0U))
                                                     : 
                                                    ((0x35U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? 
                                                     ((0U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                       ? 0U
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                        ? 9U
                                                        : 0U))
                                                      : 
                                                     ((0xe9U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84)
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)
                                                         ? 0U
                                                         : 
                                                        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
                                                          ? 0U
                                                          : 
                                                         ((0x36U 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                           ? 0U
                                                           : 
                                                          ((0x1aU 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                            ? 0U
                                                            : 
                                                           ((0x2aU 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                             ? 0U
                                                             : 
                                                            ((0x3aU 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                              ? 0U
                                                              : 
                                                             ((0x22U 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                               ? 0U
                                                               : 
                                                              ((0x32U 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                ? 0U
                                                                : 
                                                               ((0xf2U 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                 ? 0U
                                                                 : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1438)))))))))))))))))));
    GameBoySoC__DOT__cpu__DOT___GEN_1347 = ((0x86U 
                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                             : ((0xaeU 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                 : 
                                                ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hbdd8dcae__0)
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                  : 
                                                 ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                   : 
                                                  ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                    : 
                                                   ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                     : 
                                                    ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0)
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                      : 
                                                     ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                       : 
                                                      ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                        : 
                                                       ((0xbeU 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                         : 
                                                        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0)
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                          : 
                                                         ((0xc6U 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                           : 
                                                          ((0xceU 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                            : 
                                                           ((0xd6U 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                             : 
                                                            ((0xe6U 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                              : 
                                                             ((0xeeU 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                               : 
                                                              ((0xf6U 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                : 
                                                               ((0xfeU 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                 : 
                                                                ((0x18U 
                                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                  : 
                                                                 ((0x10U 
                                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                   : 
                                                                  ((0xc5U 
                                                                    == 
                                                                    (0xcfU 
                                                                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                    ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_251)
                                                                    : 
                                                                   ((0xc1U 
                                                                     == 
                                                                     (0xcfU 
                                                                      & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                     ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_251)
                                                                     : 
                                                                    ((0xcdU 
                                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                      ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_134)
                                                                      : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_841))))))))))))))))))))))));
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1856 = 
        ((3U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
          : ((0xbU == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
              : ((9U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                  : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                      : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                          : ((0x34U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                              ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_134)
                              : ((0x35U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                  ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_134)
                                  : ((0xe9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                      : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84)
                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                          : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)
                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                              : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                  : 
                                                 ((0x36U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                   : 
                                                  ((0x1aU 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                    : 
                                                   ((0x2aU 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_251)
                                                     : 
                                                    ((0x3aU 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                      : 
                                                     ((0x22U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                       : 
                                                      ((0x32U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                        : 
                                                       ((0xf2U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                         ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_251)
                                                         : 
                                                        ((0xe2U 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                          : 
                                                         ((0xe0U 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                           : 
                                                          ((0xf0U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                            : 
                                                           ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                             : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1347)))))))))))))))))))))));
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1926 = 
        ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
         & ((0x76U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
            & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1880)));
    vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op 
        = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
            ? 0U : ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                     ? 0U : ((1U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                              ? 0U : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1849))));
    vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_flagN 
        = ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
           & ((1U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
              & ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                 | ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                    | ((4U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                       & ((5U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                          & ((6U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                             & ((7U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                | ((8U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                   & (9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op)))))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_544 
        = (0x1fU & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head) 
                    + (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT____VdfgTmp_h48ab0a71__0)));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_545 
        = (0x3fU & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count) 
                    - (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT____VdfgTmp_h48ab0a71__0)));
    GameBoySoC__DOT__cpu__DOT___GEN_1824 = ((0xbU == 
                                             (0xcfU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                             ? (3U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                             : ((9U 
                                                 == 
                                                 (0xcfU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                 ? 
                                                (3U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                 : 
                                                ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                                                  ? 
                                                 (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                  : 
                                                 ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
                                                   ? 
                                                  (3U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                   : 
                                                  ((0x34U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_141)
                                                    : 
                                                   ((0x35U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_141)
                                                     : 
                                                    ((0xe9U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? 
                                                     (3U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                      : 
                                                     ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84)
                                                       ? 
                                                      (3U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                       : 
                                                      ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)
                                                        ? 
                                                       (3U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                        : 
                                                       ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
                                                         ? 
                                                        (3U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                         : 
                                                        ((0x36U 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                          ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_236)
                                                          : 
                                                         ((0x1aU 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                           ? 
                                                          (3U 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                           : 
                                                          ((0x2aU 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                            ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_253)
                                                            : 
                                                           ((0x3aU 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                             ? 
                                                            ((0U 
                                                              != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)) 
                                                             & ((1U 
                                                                 != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)) 
                                                                & ((2U 
                                                                    != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)) 
                                                                   & (3U 
                                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)))))
                                                             : 
                                                            ((0x22U 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                              ? 
                                                             (3U 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                              : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1477))))))))))))))));
    if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__io_flagH_aNib = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922 = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927 = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05Fdone 
            = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else if ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__io_flagH_aNib = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922 = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927 = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05Fdone 
            = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    } else {
        if ((1U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__io_flagH_aNib = 0U;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922 = 0U;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927 = 0U;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        } else if ((3U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__io_flagH_aNib = 0U;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922 = 0U;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927 = 0U;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        } else {
            if ((0xbU == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__io_flagH_aNib = 0U;
                vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922 = 0U;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927 = 0U;
            } else if ((9U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__io_flagH_aNib = 0U;
                vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922 = 0U;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927 = 0U;
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__io_flagH_aNib 
                    = (0xfU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1772));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_a 
                    = GameBoySoC__DOT__cpu__DOT___GEN_1772;
                if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922 = 0U;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927 = 0U;
                } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922 = 0U;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927 = 0U;
                } else if ((0x34U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922 
                        = GameBoySoC__DOT__cpu__DOT___GEN_131;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927 
                        = GameBoySoC__DOT__cpu__DOT___GEN_140;
                } else if ((0x35U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922 
                        = GameBoySoC__DOT__cpu__DOT___GEN_131;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927 
                        = GameBoySoC__DOT__cpu__DOT___GEN_140;
                } else if ((0xe9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922 = 0U;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927 = 0U;
                } else if (vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922 = 0U;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927 = 0U;
                } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922 = 0U;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927 = 0U;
                } else {
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922 
                        = GameBoySoC__DOT__cpu__DOT___GEN_1610;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927 
                        = ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_98)
                            : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1589));
                }
            }
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_1824;
        }
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1883));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = GameBoySoC__DOT__cpu__DOT___GEN_1869;
    }
    if ((7U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        vlSelf->GameBoySoC__DOT__cpu_io_memWrite = 
            ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
             | ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                | (2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))));
        if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                = (0xffffU & 0xff0fU);
            vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                = (0xffU & ((~ ((IData)(1U) << ((1U 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))
                                                 ? 0U
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))
                                                  ? 1U
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))
                                                   ? 2U
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))
                                                    ? 3U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))
                                                     ? 4U
                                                     : 0U))))))) 
                            & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF)));
        } else if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                = (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP) 
                              - (IData)(1U)));
            vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                = (0xffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC) 
                            >> 8U));
        } else if ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                = (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP) 
                              - (IData)(1U)));
            vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC));
        } else {
            vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                = (0xffffU & 0U);
            vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                = (0xffU & 0U);
        }
    } else {
        vlSelf->GameBoySoC__DOT__cpu_io_memWrite = 
            ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
             & ((1U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                & ((2U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                   & ((3U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                      & ((5U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                         & ((4U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                            & ((7U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1926)
                                : ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1926)
                                    : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1926)
                                        : ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1926)
                                            : ((3U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1926)
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1926)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((0xcbU 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? 
                                                     (3U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                      : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1926))
                                                     : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1926))))))))))))));
        if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                = (0xffffU & (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__canTakeInterrupt) 
                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_should_irq))
                               ? 0U : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)));
            vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                = (0xffU & 0U);
        } else if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC));
            vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                = (0xffU & 0U);
        } else if ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC));
            vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                = (0xffU & 0U);
        } else if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC));
            vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                = (0xffU & 0U);
        } else if ((5U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC));
            vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                = (0xffU & 0U);
        } else if ((4U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
            if ((7U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                    = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922));
                vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927));
            } else if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                    = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922));
                vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927));
            } else if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                    = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922));
                vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927));
            } else if ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                    = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922));
                vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927));
            } else if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                    = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922));
                vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927));
            } else if ((5U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                    = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922));
                vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927));
            } else if ((4U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                if ((0xcbU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
                    if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
                        vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL));
                        vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8));
                    } else {
                        vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                            = (0xffffU & ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                           ? ((6U == 
                                               (7U 
                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL)
                                               : 0U)
                                           : 0U));
                        vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                            = (0xffU & 0U);
                    }
                } else {
                    vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                        = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922));
                    vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927));
                }
            } else {
                vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                    = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922));
                vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927));
            }
        } else {
            vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr 
                = (0xffffU & 0U);
            vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
                = (0xffU & 0U);
        }
    }
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_46 = 
        ((0xe000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
         & (0xfe00U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)));
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_49 = 
        ((0xe000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
         & ((0xfe00U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
            & (0xfea0U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))));
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_53 = 
        ((0xe000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
         & ((0xfe00U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
            & ((0xfea0U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
               & ((0xff00U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                  & ((0xff80U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                     & (0xffffU > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_write 
        = ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
           & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
              & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                 & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                    & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                       & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                          & ((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                             & ((0xe000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                & ((0xfe00U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                   & ((0xfea0U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                      & ((0xff00U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                         & ((0x50U 
                                             != (0xffffU 
                                                 & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr) 
                                                    - (IData)(0xff00U)))) 
                                            & (0xff80U 
                                               > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT___T_4 = ((0xc000U 
                                                   <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                                  & (0xd000U 
                                                     > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)));
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_335 
        = ((0x6000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
            : ((0x8000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                : ((0xa000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                    : ((0xc000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                        : ((0xe000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                            : ((0xfe00U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                                : ((0xfea0U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                                    : ((0xff00U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                                        : ((0xff80U 
                                            > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                                            : ((0xffffU 
                                                > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                                                : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data)))))))))));
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h8feea624__0 
        = ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05Fdone) 
           & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending));
    if ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2406 
            = (1U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__halted));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2407 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1932;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2403 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2378 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2375 
            = ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                ? 3U : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2376 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2405 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2404 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__IME;
    } else if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2406 
            = (1U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__halted));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2407 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1932;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2403 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2378 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2038;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2375 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2036;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2376 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1938;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2405 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2404 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__IME;
    } else if ((5U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2406 
            = (1U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__halted));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2407 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1932;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2403 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2378 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2038;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2375 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2036;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2376 
            = GameBoySoC__DOT__cpu__DOT___GEN_113;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2405 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2404 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__IME;
    } else if ((4U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2406 
            = (1U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__halted));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2407 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1932;
        if ((0xcbU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2403 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2378 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
                if (vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_done) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2375 = 0U;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2376 = 0U;
                } else {
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2375 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2376 
                        = ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                            ? ((6U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                ? ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                    ? 3U : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_126))
                                : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_126))
                            : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_126));
                }
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2375 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2376 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
            }
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2405 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2404 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__IME;
        } else if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2403 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2378 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP;
            if (vlSelf->GameBoySoC__DOT__cpu__DOT__u___05Fdone) {
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2375 = 0U;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2376 = 0U;
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2375 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2376 
                    = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                        : ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                            : ((1U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1856))));
            }
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2405 
                = ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h8feea624__0)) 
                   & ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                       : ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                           : ((1U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                               : ((3U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                   : ((0xbU == (0xcfU 
                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                       : ((9U == (0xcfU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                           : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                               : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1770)))))))));
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2404 
                = ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h8feea624__0) 
                   | ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                       : ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                           : ((1U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                               : ((3U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                   : ((0xbU == (0xcfU 
                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                       : ((9U == (0xcfU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                           : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                               : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                   : 
                                                  ((0x34U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                    : 
                                                   ((0x35U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                     : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1700))))))))))));
        } else {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2403 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2378 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2375 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2376 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2405 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2404 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__IME;
        }
    } else {
        if ((6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2406 
                = (1U & (~ (IData)((0U != (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF)))));
            if ((0U != (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2407 = 0U;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2375 = 0U;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2376 = 0U;
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2407 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1932;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2375 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2376 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
            }
        } else {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2406 
                = (1U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__halted));
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2407 
                = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1932;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2375 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2376 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
        }
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2403 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2378 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2405 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2404 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__IME;
    }
    GameBoySoC__DOT__memory__DOT___GEN_84 = ((0x8000U 
                                              > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))
                                              ? 0U : 
                                             ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_4)
                                               ? 0U
                                               : ((0xe000U 
                                                   > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))
                                                   ? 0U
                                                   : 
                                                  ((0xfe00U 
                                                    > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))
                                                    ? 0U
                                                    : 
                                                   ((0xfea0U 
                                                     > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))
                                                     ? 0U
                                                     : 
                                                    ((0xff00U 
                                                      > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))
                                                      ? 0U
                                                      : 
                                                     ((0xff80U 
                                                       > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))
                                                       ? 
                                                      (0xffffU 
                                                       & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr) 
                                                          - (IData)(0xff00U)))
                                                       : 0U)))))));
    if (vlSelf->GameBoySoC__DOT__cpu_io_memWrite) {
        if ((0x2000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434 
                = (0xffffU & (IData)(GameBoySoC__DOT__memory__DOT___GEN_84));
        } else if ((0x4000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434 
                = (0xffffU & (IData)(GameBoySoC__DOT__memory__DOT___GEN_84));
        } else if ((0x6000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434 
                = (0xffffU & (IData)(GameBoySoC__DOT__memory__DOT___GEN_84));
        } else if ((0x8000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434 
                = (0xffffU & (IData)(GameBoySoC__DOT__memory__DOT___GEN_84));
        } else if ((0xa000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434 
                = (0xffffU & (IData)(GameBoySoC__DOT__memory__DOT___GEN_84));
        } else if ((0xc000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434 
                = (0xffffU & (IData)(GameBoySoC__DOT__memory__DOT___GEN_84));
        } else if ((0xe000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434 
                = (0xffffU & (IData)(GameBoySoC__DOT__memory__DOT___GEN_84));
        } else if ((0xfe00U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434 
                = (0xffffU & (IData)(GameBoySoC__DOT__memory__DOT___GEN_84));
        } else if ((0xfea0U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434 
                = (0xffffU & (IData)(GameBoySoC__DOT__memory__DOT___GEN_84));
        } else if ((0xff00U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434 
                = (0xffffU & (IData)(GameBoySoC__DOT__memory__DOT___GEN_84));
        } else if ((0xff80U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))) {
            if ((0x50U == (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr) 
                                      - (IData)(0xff00U))))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
                vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434 
                    = (0xffffU & (IData)(GameBoySoC__DOT__memory__DOT___GEN_84));
            } else {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data;
                vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434 
                    = (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr) 
                                  - (IData)(0xff00U)));
            }
        } else {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434 
                = (0xffffU & (IData)(GameBoySoC__DOT__memory__DOT___GEN_84));
        }
    } else {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434 
            = (0xffffU & (IData)(GameBoySoC__DOT__memory__DOT___GEN_84));
    }
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_598 
        = ((0x10U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33)
            : ((0x11U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33)
                : ((0x12U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33)
                    : ((0x13U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33)
                        : ((0x14U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33)
                            : ((0x16U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33)
                                : ((0x17U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33)
                                    : ((0x18U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33)
                                        : ((0x19U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33)
                                            : ((0x1aU 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33)
                                                : (
                                                   (0x1bU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33)
                                                    : 
                                                   ((0x1cU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33)
                                                     : 
                                                    ((0x1dU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33))))))))))))));
    if ((2U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_803 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTIMA;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_804 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTMA;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_805 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTAC;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_801 
            = (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
                & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                   & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                      & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                         & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                            & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                               & ((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                  & ((0xe000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                     & ((0xfe00U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                        & ((0xfea0U 
                                            <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                           & ((0xff00U 
                                               <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                              & ((0xff80U 
                                                  > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                                 & ((0x50U 
                                                     != 
                                                     (0xffffU 
                                                      & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr) 
                                                         - (IData)(0xff00U)))) 
                                                    & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data) 
                                                       >> 7U))))))))))))))
                ? (0x7fU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData))
                : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData));
    } else {
        if ((4U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_803 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTIMA;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_804 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTMA;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_805 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTAC;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
        } else if ((5U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_803 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_804 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTMA;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_805 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTAC;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
        } else {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_803 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTIMA;
            if ((6U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_804 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_805 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTAC;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
            } else {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_804 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTMA;
                if ((7U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_805 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                } else {
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_805 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTAC;
                    if ((0xfU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                    } else if ((0x10U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                    } else {
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10;
                        if ((0x11U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                        } else {
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
                            if ((0x12U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                            } else {
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
                                if ((0x13U == (0xffU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                                } else {
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
                                    if ((0x14U == (0xffU 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                                    } else {
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                                        if ((0x16U 
                                             == (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                                        } else {
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                                            if ((0x17U 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                                            } else {
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                                                    = 
                                                    ((0x18U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_801 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSC;
    }
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_370 
        = ((0x19U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
            : ((0x1aU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                : ((0x1bU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                    : ((0x1cU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                        : ((0x1dU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                            : ((0x1eU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                                : ((0x20U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                                    : ((0x21U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                                        : ((0x22U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                                            : ((0x23U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                                                : (
                                                   (0x24U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                                                    : 
                                                   ((0x25U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                                                     : 
                                                    ((0x26U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
        = ((2U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
            : ((4U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                : ((5U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                    : ((6U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                        : ((7U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                            : ((0xfU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                                : ((0x10U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                                    : ((0x11U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                                        : ((0x12U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                                            : ((0x13U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                                                : (
                                                   (0x14U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                                                      : 
                                                     ((0x18U 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                                                       : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_370)))))))))))))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_395 
        = ((0x18U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
            : ((0x19U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                : ((0x1aU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                    : ((0x1bU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                        : ((0x1cU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                            : ((0x1dU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                                : ((0x1eU == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                                    : ((0x20U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                                        : ((0x21U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                                            : ((0x22U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                                                    : 
                                                   ((0x24U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                                                     : 
                                                    ((0x25U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
        = ((2U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
            : ((4U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                : ((5U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                    : ((6U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                        : ((7U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                            : ((0xfU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                                : ((0x10U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                                    : ((0x11U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                                        : ((0x12U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                                            : ((0x13U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                                                : (
                                                   (0x14U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                                                      : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_395))))))))))))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_421 
        = ((0x17U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
            : ((0x18U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                : ((0x19U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                    : ((0x1aU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                        : ((0x1bU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                            : ((0x1cU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                                : ((0x1dU == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                                    : ((0x1eU == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                                        : ((0x20U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                                            : ((0x21U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                                                : (
                                                   (0x22U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                                                     : 
                                                    ((0x24U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
        = ((2U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
            : ((4U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                : ((5U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                    : ((6U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                        : ((7U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                            : ((0xfU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                                : ((0x10U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                                    : ((0x11U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                                        : ((0x12U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                                            : ((0x13U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                                                : (
                                                   (0x14U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                                                    : 
                                                   ((0x16U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                                                     : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_421)))))))))))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_448 
        = ((0x16U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
            : ((0x17U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                : ((0x18U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                    : ((0x19U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                        : ((0x1aU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                            : ((0x1bU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                                : ((0x1cU == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                                    : ((0x1dU == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                                        : ((0x1eU == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                                            : ((0x20U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                                                : (
                                                   (0x21U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                                                    : 
                                                   ((0x22U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
        = ((2U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
            : ((4U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                : ((5U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                    : ((6U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                        : ((7U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                            : ((0xfU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                                : ((0x10U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                                    : ((0x11U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                                        : ((0x12U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                                            : ((0x13U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                                                : (
                                                   (0x14U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                                                    : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_448))))))))))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_476 
        = ((0x14U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
            : ((0x16U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                : ((0x17U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                    : ((0x18U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                        : ((0x19U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                            : ((0x1aU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                                : ((0x1bU == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                                    : ((0x1cU == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                                        : ((0x1dU == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                                            : ((0x1eU 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                                                : (
                                                   (0x20U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                                                    : 
                                                   ((0x21U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                                                     : 
                                                    ((0x22U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
        = ((2U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
            : ((4U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                : ((5U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                    : ((6U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                        : ((7U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                            : ((0xfU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                                : ((0x10U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                                    : ((0x11U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                                        : ((0x12U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                                            : ((0x13U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                                                : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_476)))))))))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_505 
        = ((0x13U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
            : ((0x14U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                : ((0x16U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                    : ((0x17U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                        : ((0x18U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                            : ((0x19U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                                : ((0x1aU == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                                    : ((0x1bU == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                                        : ((0x1cU == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                                            : ((0x1dU 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                                                : (
                                                   (0x1eU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                                                     : 
                                                    ((0x21U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
        = ((2U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
            : ((4U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                : ((5U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                    : ((6U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                        : ((7U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                            : ((0xfU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                                : ((0x10U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                                    : ((0x11U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                                        : ((0x12U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                                            : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_505))))))))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_535 
        = ((0x12U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
            : ((0x13U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                : ((0x14U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                    : ((0x16U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                        : ((0x17U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                            : ((0x18U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                                : ((0x19U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                                    : ((0x1aU == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                                        : ((0x1bU == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                                            : ((0x1cU 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                                                    : 
                                                   ((0x1eU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
        = ((2U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
            : ((4U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                : ((5U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                    : ((6U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                        : ((7U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                            : ((0xfU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                                : ((0x10U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                                    : ((0x11U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                                        : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_535)))))))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_566 
        = ((0x11U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34)
            : ((0x12U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34)
                : ((0x13U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34)
                    : ((0x14U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34)
                        : ((0x16U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34)
                            : ((0x17U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34)
                                : ((0x18U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34)
                                    : ((0x19U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34)
                                        : ((0x1aU == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34)
                                            : ((0x1bU 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34)
                                                : (
                                                   (0x1cU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34)
                                                    : 
                                                   ((0x1dU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34)
                                                     : 
                                                    ((0x1eU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34))))))))))))));
    if ((2U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
    } else if ((4U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
    } else if ((5U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
    } else if ((6U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
    } else if ((7U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
    } else if ((0xfU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
    } else {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
            = ((0x10U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34)
                : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_566));
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
            = GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_598;
    }
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_631 
        = ((0xfU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32)
            : ((0x10U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32)
                : ((0x11U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32)
                    : ((0x12U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32)
                        : ((0x13U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32)
                            : ((0x14U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32)
                                : ((0x16U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32)
                                    : ((0x17U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32)
                                        : ((0x18U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32)
                                            : ((0x19U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32)
                                                : (
                                                   (0x1aU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32)
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32)
                                                     : 
                                                    ((0x1cU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
        = ((2U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32)
            : ((4U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32)
                : ((5U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32)
                    : ((6U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32)
                        : ((7U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32)
                            : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_631))))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
        = ((7U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31)
            : ((0xfU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31)
                : ((0x10U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31)
                    : ((0x11U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31)
                        : ((0x12U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31)
                            : ((0x13U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31)
                                : ((0x14U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31)
                                    : ((0x16U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31)
                                        : ((0x17U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31)
                                            : ((0x18U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31)
                                                : (
                                                   (0x19U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31)
                                                    : 
                                                   ((0x1aU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31)
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
        = ((2U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31)
            : ((4U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31)
                : ((5U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31)
                    : ((6U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31)
                        : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665)))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_700 
        = ((6U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30)
            : ((7U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30)
                : ((0xfU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30)
                    : ((0x10U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30)
                        : ((0x11U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30)
                            : ((0x12U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30)
                                : ((0x13U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30)
                                    : ((0x14U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30)
                                        : ((0x16U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30)
                                            : ((0x17U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30)
                                                : (
                                                   (0x18U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30)
                                                    : 
                                                   ((0x19U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30)
                                                     : 
                                                    ((0x1aU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
        = ((2U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30)
            : ((4U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30)
                : ((5U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30)
                    : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_700))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_736 
        = ((5U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24)
            : ((6U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24)
                : ((7U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24)
                    : ((0xfU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24)
                        : ((0x10U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24)
                            : ((0x11U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24)
                                : ((0x12U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24)
                                    : ((0x13U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24)
                                        : ((0x14U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24)
                                            : ((0x16U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24)
                                                : (
                                                   (0x17U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24)
                                                    : 
                                                   ((0x18U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24)
                                                     : 
                                                    ((0x19U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 
        = ((2U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24)
            : ((4U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24)
                : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_736)));
    if ((0x40U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_135 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_17 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
    } else if ((0x41U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_135 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_17 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
    } else if ((0x42U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_135 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_17 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
    } else if ((0x43U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_135 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_17 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
    } else if ((0x44U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_135 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_17 
            = vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg;
    } else if ((0x45U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_135 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_17 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
    } else if ((0x46U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_135 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_17 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
    } else if ((0x47U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_135 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_17 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
    } else if ((0x48U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_135 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_17 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
    } else if ((0x49U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_135 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_17 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
    } else if ((0x4aU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_135 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_17 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
    } else if ((0x4bU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_135 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_17 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
    } else if ((0x50U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_135 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_17 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
    } else {
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_135 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_17 = 0xffU;
    }
    if ((0x19U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_382 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_30 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
    } else if ((0x1aU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_382 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_30 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
    } else if ((0x1bU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_382 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_30 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
    } else if ((0x1cU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_382 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_30 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
    } else if ((0x1dU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_382 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_30 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
    } else if ((0x1eU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_382 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_30 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
    } else if ((0x20U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_382 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_30 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
    } else if ((0x21U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_382 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_30 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
    } else if ((0x22U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_382 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_30 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
    } else if ((0x23U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_382 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_30 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
    } else if ((0x24U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_382 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_30 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
    } else if ((0x25U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_382 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_30 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
    } else if ((0x26U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_382 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_30 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
    } else {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_382 
            = GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_135;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_30 
            = GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_17;
    }
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_147 
        = ((0x26U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
            : ((0x40U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                : ((0x41U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                    : ((0x42U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                        : ((0x43U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                            : ((0x44U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                                : ((0x45U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                                    : ((0x46U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                                        : ((0x47U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                                            : ((0x48U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                                                : (
                                                   (0x49U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                                                    : 
                                                   ((0x4aU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                                                     : 
                                                    ((0x4bU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_407 
        = ((0x18U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
            : ((0x19U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                : ((0x1aU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                    : ((0x1bU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                        : ((0x1cU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                            : ((0x1dU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                                : ((0x1eU == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                                    : ((0x20U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                                        : ((0x21U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                                            : ((0x22U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                                                : (
                                                   (0x23U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                                                    : 
                                                   ((0x24U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                                                     : 
                                                    ((0x25U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                                                      : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_147))))))))))))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_160 
        = ((0x25U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
            : ((0x26U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                : ((0x40U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                    : ((0x41U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                        : ((0x42U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                            : ((0x43U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                                : ((0x44U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                                    : ((0x45U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                                        : ((0x46U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                                            : ((0x47U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                                                : (
                                                   (0x48U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                                                    : 
                                                   ((0x49U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                                                     : 
                                                    ((0x4aU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_433 
        = ((0x17U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
            : ((0x18U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                : ((0x19U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                    : ((0x1aU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                        : ((0x1bU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                            : ((0x1cU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                                : ((0x1dU == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                                    : ((0x1eU == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                                        : ((0x20U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                                            : ((0x21U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                                                : (
                                                   (0x22U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                                                     : 
                                                    ((0x24U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                                                      : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_160))))))))))))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_174 
        = ((0x24U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
            : ((0x25U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                : ((0x26U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                    : ((0x40U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                        : ((0x41U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                            : ((0x42U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                                : ((0x43U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                                    : ((0x44U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                                        : ((0x45U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                                            : ((0x46U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                                                : (
                                                   (0x47U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                                                    : 
                                                   ((0x48U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                                                     : 
                                                    ((0x49U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_460 
        = ((0x16U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
            : ((0x17U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                : ((0x18U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                    : ((0x19U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                        : ((0x1aU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                            : ((0x1bU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                                : ((0x1cU == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                                    : ((0x1dU == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                                        : ((0x1eU == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                                            : ((0x20U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                                                : (
                                                   (0x21U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                                                    : 
                                                   ((0x22U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                                                     : 
                                                    ((0x23U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                                                      : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_174))))))))))))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_189 
        = ((0x23U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
            : ((0x24U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                : ((0x25U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                    : ((0x26U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                        : ((0x40U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                            : ((0x41U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                                : ((0x42U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                                    : ((0x43U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                                        : ((0x44U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                                            : ((0x45U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                                                : (
                                                   (0x46U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                                                    : 
                                                   ((0x47U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                                                     : 
                                                    ((0x48U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_488 
        = ((0x14U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
            : ((0x16U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                : ((0x17U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                    : ((0x18U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                        : ((0x19U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                            : ((0x1aU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                                : ((0x1bU == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                                    : ((0x1cU == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                                        : ((0x1dU == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                                            : ((0x1eU 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                                                : (
                                                   (0x20U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                                                    : 
                                                   ((0x21U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                                                     : 
                                                    ((0x22U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                                                      : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_189))))))))))))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_205 
        = ((0x22U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
            : ((0x23U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                : ((0x24U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                    : ((0x25U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                        : ((0x26U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                            : ((0x40U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                                : ((0x41U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                                    : ((0x42U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                                        : ((0x43U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                                            : ((0x44U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                                                : (
                                                   (0x45U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                                                    : 
                                                   ((0x46U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                                                     : 
                                                    ((0x47U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_517 
        = ((0x13U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
            : ((0x14U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                : ((0x16U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                    : ((0x17U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                        : ((0x18U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                            : ((0x19U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                                : ((0x1aU == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                                    : ((0x1bU == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                                        : ((0x1cU == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                                            : ((0x1dU 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                                                : (
                                                   (0x1eU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                                                    : 
                                                   ((0x20U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                                                     : 
                                                    ((0x21U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                                                      : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_205))))))))))))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_222 
        = ((0x21U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
            : ((0x22U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                : ((0x23U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                    : ((0x24U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                        : ((0x25U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                            : ((0x26U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                                : ((0x40U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                                    : ((0x41U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                                        : ((0x42U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                                            : ((0x43U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                                                : (
                                                   (0x44U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                                                    : 
                                                   ((0x45U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                                                     : 
                                                    ((0x46U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_547 
        = ((0x12U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
            : ((0x13U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                : ((0x14U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                    : ((0x16U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                        : ((0x17U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                            : ((0x18U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                                : ((0x19U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                                    : ((0x1aU == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                                        : ((0x1bU == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                                            : ((0x1cU 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                                                : (
                                                   (0x1dU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                                                    : 
                                                   ((0x1eU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                                                     : 
                                                    ((0x20U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                                                      : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_222))))))))))))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_240 
        = ((0x20U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
            : ((0x21U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                : ((0x22U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                    : ((0x23U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                        : ((0x24U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                            : ((0x25U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                                : ((0x26U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                                    : ((0x40U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                                        : ((0x41U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                                            : ((0x42U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                                                : (
                                                   (0x43U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                                                    : 
                                                   ((0x44U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                                                     : 
                                                    ((0x45U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_578 
        = ((0x11U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
            : ((0x12U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                : ((0x13U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                    : ((0x14U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                        : ((0x16U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                            : ((0x17U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                                : ((0x18U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                                    : ((0x19U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                                        : ((0x1aU == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                                            : ((0x1bU 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                                                : (
                                                   (0x1cU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                                                    : 
                                                   ((0x1dU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                                                     : 
                                                    ((0x1eU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                                                      : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_240))))))))))))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_280 
        = ((0x1dU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
            : ((0x1eU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                : ((0x20U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                    : ((0x21U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                        : ((0x22U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                            : ((0x23U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                                : ((0x24U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                                    : ((0x25U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                                        : ((0x26U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                                            : ((0x40U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                                                : (
                                                   (0x41U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                                                    : 
                                                   ((0x42U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                                                     : 
                                                    ((0x43U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_644 
        = ((0xfU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
            : ((0x10U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                : ((0x11U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                    : ((0x12U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                        : ((0x13U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                            : ((0x14U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                                : ((0x16U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                                    : ((0x17U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                                        : ((0x18U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                                            : ((0x19U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                                                : (
                                                   (0x1aU 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                                                    : 
                                                   ((0x1bU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                                                     : 
                                                    ((0x1cU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                                                      : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_280))))))))))))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_301 
        = ((0x1cU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
            : ((0x1dU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                : ((0x1eU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                    : ((0x20U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                        : ((0x21U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                            : ((0x22U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                                : ((0x23U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                                    : ((0x24U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                                        : ((0x25U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                                            : ((0x26U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                                                : (
                                                   (0x40U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                                                    : 
                                                   ((0x41U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                                                     : 
                                                    ((0x42U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
        = ((7U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
            : ((0xfU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                : ((0x10U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                    : ((0x11U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                        : ((0x12U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                            : ((0x13U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                                : ((0x14U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                                    : ((0x16U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                                        : ((0x17U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                                            : ((0x18U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                                                : (
                                                   (0x19U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                                                    : 
                                                   ((0x1aU 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                                                     : 
                                                    ((0x1bU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                                                      : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_301))))))))))))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_323 
        = ((0x1bU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
            : ((0x1cU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                : ((0x1dU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                    : ((0x1eU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                        : ((0x20U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                            : ((0x21U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                                : ((0x22U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                                    : ((0x23U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                                        : ((0x24U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                                            : ((0x25U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                                                : (
                                                   (0x26U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                                                    : 
                                                   ((0x40U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                                                     : 
                                                    ((0x41U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_713 
        = ((6U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
            : ((7U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                : ((0xfU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                    : ((0x10U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                        : ((0x11U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                            : ((0x12U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                                : ((0x13U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                                    : ((0x14U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                                        : ((0x16U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                                            : ((0x17U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                                                : (
                                                   (0x18U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                                                    : 
                                                   ((0x19U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                                                     : 
                                                    ((0x1aU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                                                      : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_323))))))))))))));
    GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_346 
        = ((0x1aU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
            : ((0x1bU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                : ((0x1cU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                    : ((0x1dU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                        : ((0x1eU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                            : ((0x20U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                                : ((0x21U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                                    : ((0x22U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                                        : ((0x23U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                                            : ((0x24U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                                                : (
                                                   (0x25U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                                                    : 
                                                   ((0x26U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                                                     : 
                                                    ((0x40U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_749 
        = ((5U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
            : ((6U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                : ((7U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                    : ((0xfU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                        : ((0x10U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                            : ((0x11U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                                : ((0x12U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                                    : ((0x13U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                                        : ((0x14U == 
                                            (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                                            : ((0x16U 
                                                == 
                                                (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                                                : (
                                                   (0x17U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                                                    : 
                                                   ((0x18U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                                                     : 
                                                    ((0x19U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                                                      : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_346))))))))))))));
}
