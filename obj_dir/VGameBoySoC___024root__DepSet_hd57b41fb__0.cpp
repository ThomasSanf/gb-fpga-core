// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGameBoySoC.h for the primary calling header

#include "VGameBoySoC__pch.h"
#include "VGameBoySoC___024root.h"

VL_INLINE_OPT void VGameBoySoC___024root___ico_sequent__TOP__0(VGameBoySoC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_174 = ((IData)(vlSelf->reset)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT____VdfgTmp_ha309eb35__0)
                                                     ? 
                                                    ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___T_37)
                                                      ? 
                                                     ((0U 
                                                       < (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__discardPixels))
                                                       ? 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__discardPixels) 
                                                          - (IData)(1U)))
                                                       : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_19))
                                                      : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_19))
                                                     : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_19)));
}

void VGameBoySoC___024root___eval_ico(VGameBoySoC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VGameBoySoC___024root___ico_sequent__TOP__0(vlSelf);
    }
}

void VGameBoySoC___024root___eval_triggers__ico(VGameBoySoC___024root* vlSelf);

bool VGameBoySoC___024root___eval_phase__ico(VGameBoySoC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VGameBoySoC___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VGameBoySoC___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

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
    CData/*3:0*/ GameBoySoC__DOT__cpu__DOT__u_alu_io_op;
    GameBoySoC__DOT__cpu__DOT__u_alu_io_op = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_alu_io_a;
    GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_alu_io_b;
    GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn;
    GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ;
    GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__u_alu_io_flagN;
    GameBoySoC__DOT__cpu__DOT__u_alu_io_flagN = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__u_alu_io_flagH;
    GameBoySoC__DOT__cpu__DOT__u_alu_io_flagH = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___u_result_T;
    GameBoySoC__DOT__cpu__DOT___u_result_T = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___u_result_T_3;
    GameBoySoC__DOT__cpu__DOT___u_result_T_3 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___u_operand_T_8;
    GameBoySoC__DOT__cpu__DOT___u_operand_T_8 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT__u_operand;
    GameBoySoC__DOT__cpu__DOT__u_operand = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_oldVal;
    GameBoySoC__DOT__cpu__DOT__u_oldVal = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___u_out_F_T_1;
    GameBoySoC__DOT__cpu__DOT___u_out_F_T_1 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_112;
    GameBoySoC__DOT__cpu__DOT___GEN_112 = 0;
    CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_113;
    GameBoySoC__DOT__cpu__DOT___GEN_113 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_118;
    GameBoySoC__DOT__cpu__DOT___GEN_118 = 0;
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
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_236;
    GameBoySoC__DOT__cpu__DOT___GEN_236 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___u_T_137;
    GameBoySoC__DOT__cpu__DOT___u_T_137 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_248;
    GameBoySoC__DOT__cpu__DOT___GEN_248 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_326;
    GameBoySoC__DOT__cpu__DOT___GEN_326 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___u_out_F_T_5;
    GameBoySoC__DOT__cpu__DOT___u_out_F_T_5 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_329;
    GameBoySoC__DOT__cpu__DOT___GEN_329 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_330;
    GameBoySoC__DOT__cpu__DOT___GEN_330 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___u_out_F_T_8;
    GameBoySoC__DOT__cpu__DOT___u_out_F_T_8 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___u_out_F_T_14;
    GameBoySoC__DOT__cpu__DOT___u_out_F_T_14 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___u_out_PC_T_4;
    GameBoySoC__DOT__cpu__DOT___u_out_PC_T_4 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT__u_regPair;
    GameBoySoC__DOT__cpu__DOT__u_regPair = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_375;
    GameBoySoC__DOT__cpu__DOT___GEN_375 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_376;
    GameBoySoC__DOT__cpu__DOT___GEN_376 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_378;
    GameBoySoC__DOT__cpu__DOT___GEN_378 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_382;
    GameBoySoC__DOT__cpu__DOT___GEN_382 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_426;
    GameBoySoC__DOT__cpu__DOT___GEN_426 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_429;
    GameBoySoC__DOT__cpu__DOT___GEN_429 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_454;
    GameBoySoC__DOT__cpu__DOT___GEN_454 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_475;
    GameBoySoC__DOT__cpu__DOT___GEN_475 = 0;
    CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_539;
    GameBoySoC__DOT__cpu__DOT___GEN_539 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_541;
    GameBoySoC__DOT__cpu__DOT___GEN_541 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_correction;
    GameBoySoC__DOT__cpu__DOT__u_correction = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_589;
    GameBoySoC__DOT__cpu__DOT___GEN_589 = 0;
    CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_607;
    GameBoySoC__DOT__cpu__DOT___GEN_607 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_608;
    GameBoySoC__DOT__cpu__DOT___GEN_608 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___u_out_F_T_36;
    GameBoySoC__DOT__cpu__DOT___u_out_F_T_36 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__u___05Fdone;
    GameBoySoC__DOT__cpu__DOT__u___05Fdone = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT__u___05FSP;
    GameBoySoC__DOT__cpu__DOT__u___05FSP = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1930;
    GameBoySoC__DOT__cpu__DOT___GEN_1930 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1934;
    GameBoySoC__DOT__cpu__DOT___GEN_1934 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1935;
    GameBoySoC__DOT__cpu__DOT___GEN_1935 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT__u___05FPC;
    GameBoySoC__DOT__cpu__DOT__u___05FPC = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__needsImm8;
    GameBoySoC__DOT__cpu__DOT__needsImm8 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__needsImm16;
    GameBoySoC__DOT__cpu__DOT__needsImm16 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2115;
    GameBoySoC__DOT__cpu__DOT___GEN_2115 = 0;
    CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2116;
    GameBoySoC__DOT__cpu__DOT___GEN_2116 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__cbOut_result;
    GameBoySoC__DOT__cpu__DOT__cbOut_result = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2192;
    GameBoySoC__DOT__cpu__DOT___GEN_2192 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__cbOut_done;
    GameBoySoC__DOT__cpu__DOT__cbOut_done = 0;
    CData/*5:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_h70885a45__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h70885a45__0 = 0;
    CData/*5:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_ha5f069ea__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_ha5f069ea__0 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_h54193848__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h54193848__0 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb01f930e__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb01f930e__0 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__intr__DOT__active;
    GameBoySoC__DOT__cpu__DOT__intr__DOT__active = 0;
    SData/*8:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sum9;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sum9 = 0;
    SData/*8:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sumc9;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sumc9 = 0;
    SData/*8:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diff9;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diff9 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_3;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_3 = 0;
    CData/*4:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_14;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_14 = 0;
    CData/*4:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT___GEN_53;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT___GEN_53 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_15;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_15 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagC_T_2;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagC_T_2 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_1;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_1 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_2;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_2 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT____VdfgTmp_h9e8ac2f3__0;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT____VdfgTmp_h9e8ac2f3__0 = 0;
    CData/*1:0*/ GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0;
    GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0;
    CData/*1:0*/ GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1;
    GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0;
    CData/*1:0*/ GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2;
    GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0;
    CData/*1:0*/ GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3;
    GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0;
    CData/*1:0*/ GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4;
    GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0;
    CData/*1:0*/ GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5;
    GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0;
    CData/*1:0*/ GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6;
    GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0;
    CData/*1:0*/ GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7;
    GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0;
    CData/*1:0*/ GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_outPixel;
    GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_outPixel = 0;
    CData/*2:0*/ GameBoySoC__DOT__ppu__DOT___GEN_17;
    GameBoySoC__DOT__ppu__DOT___GEN_17 = 0;
    CData/*0:0*/ GameBoySoC__DOT__ppu__DOT____VdfgTmp_hada5b228__0;
    GameBoySoC__DOT__ppu__DOT____VdfgTmp_hada5b228__0 = 0;
    CData/*0:0*/ GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT____VdfgTmp_h48ab0a71__0;
    GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT____VdfgTmp_h48ab0a71__0 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs_io_readData;
    GameBoySoC__DOT__memory__DOT__ioRegs_io_readData = 0;
    CData/*0:0*/ GameBoySoC__DOT__memory__DOT___T_44;
    GameBoySoC__DOT__memory__DOT___T_44 = 0;
    CData/*0:0*/ GameBoySoC__DOT__memory__DOT___T_52;
    GameBoySoC__DOT__memory__DOT___T_52 = 0;
    CData/*0:0*/ GameBoySoC__DOT__memory__DOT___GEN_198;
    GameBoySoC__DOT__memory__DOT___GEN_198 = 0;
    SData/*15:0*/ GameBoySoC__DOT__memory__DOT___GEN_235;
    GameBoySoC__DOT__memory__DOT___GEN_235 = 0;
    CData/*0:0*/ GameBoySoC__DOT__memory__DOT___GEN_236;
    GameBoySoC__DOT__memory__DOT___GEN_236 = 0;
    SData/*15:0*/ GameBoySoC__DOT__memory__DOT___GEN_237;
    GameBoySoC__DOT__memory__DOT___GEN_237 = 0;
    CData/*7:0*/ __VdfgTmp_h5eed7589__0;
    __VdfgTmp_h5eed7589__0 = 0;
    CData/*7:0*/ __VdfgTmp_hefb31099__0;
    __VdfgTmp_hefb31099__0 = 0;
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
    if (VL_UNLIKELY((((6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                      & (6U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state_prev))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"\n>>> ENTER HALT at PC=%x IF=%x IE=%x IME=%1#\n",
                   16,vlSelf->GameBoySoC__DOT__cpu__DOT__PC,
                   8,(IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF),
                   8,vlSelf->GameBoySoC__DOT__memory__DOT__regIE,
                   1,(IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME));
    }
    if (VL_UNLIKELY((((6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state_prev)) 
                      & (6U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"\n<<< EXIT HALT at PC=%x IF=%x IE=%x IME=%1#\n",
                   16,vlSelf->GameBoySoC__DOT__cpu__DOT__PC,
                   8,(IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF),
                   8,vlSelf->GameBoySoC__DOT__memory__DOT__regIE,
                   1,(IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME));
    }
    if (VL_UNLIKELY((((((7U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                        & (0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) 
                       & (~ ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__canTakeInterrupt) 
                             & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_should_irq)))) 
                      & (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"A: %x F: %x B: %x C: %x D: %x E: %x H: %x L: %x SP: %x PC: 00:%x (%x %x %x %x)\n",
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
                   8,((0x8000U > (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))
                       ? vlSelf->GameBoySoC__DOT__memory__DOT__rom
                      [vlSelf->GameBoySoC__DOT__cpu__DOT__PC]
                       : (((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)) 
                           & (0xd000U > (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))
                           ? vlSelf->GameBoySoC__DOT__memory__DOT__rom
                          [(0xffffU & ((IData)(0x4000U) 
                                       + ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC) 
                                          - (IData)(0xc000U))))]
                           : (((0xd000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)) 
                               & (0xe000U > (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))
                               ? vlSelf->GameBoySoC__DOT__memory__DOT__wram
                              [(0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))]
                               : (((0xe000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)) 
                                   & (0xfe00U > (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))
                                   ? vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                  [(0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))]
                                   : 0U)))),8,((0x8000U 
                                                > (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))))
                                                ? vlSelf->GameBoySoC__DOT__memory__DOT__rom
                                               [(0xffffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                                                : (
                                                   ((0xc000U 
                                                     <= 
                                                     (0xffffU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))) 
                                                    & (0xd000U 
                                                       > 
                                                       (0xffffU 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))))
                                                    ? 
                                                   vlSelf->GameBoySoC__DOT__memory__DOT__rom
                                                   [
                                                   (0xffffU 
                                                    & ((IData)(0x8001U) 
                                                       + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                                                    : 
                                                   (((0xd000U 
                                                      <= 
                                                      (0xffffU 
                                                       & ((IData)(1U) 
                                                          + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))) 
                                                     & (0xe000U 
                                                        > 
                                                        (0xffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))))
                                                     ? 
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                                                     : 
                                                    (((0xe000U 
                                                       <= 
                                                       (0xffffU 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))) 
                                                      & (0xfe00U 
                                                         > 
                                                         (0xffffU 
                                                          & ((IData)(1U) 
                                                             + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))))
                                                      ? 
                                                     vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                                     [
                                                     (0x1fffU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                                                      : 0U)))),
                   8,((0x8000U > (0xffffU & ((IData)(2U) 
                                             + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))))
                       ? vlSelf->GameBoySoC__DOT__memory__DOT__rom
                      [(0xffffU & ((IData)(2U) + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                       : (((0xc000U <= (0xffffU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))) 
                           & (0xd000U > (0xffffU & 
                                         ((IData)(2U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))))
                           ? vlSelf->GameBoySoC__DOT__memory__DOT__rom
                          [(0xffffU & ((IData)(0x8002U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                           : (((0xd000U <= (0xffffU 
                                            & ((IData)(2U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))) 
                               & (0xe000U > (0xffffU 
                                             & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))))
                               ? vlSelf->GameBoySoC__DOT__memory__DOT__wram
                              [(0x1fffU & ((IData)(2U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                               : (((0xe000U <= (0xffffU 
                                                & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))) 
                                   & (0xfe00U > (0xffffU 
                                                 & ((IData)(2U) 
                                                    + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))))
                                   ? vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                  [(0x1fffU & ((IData)(2U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                                   : 0U)))),8,((0x8000U 
                                                > (0xffffU 
                                                   & ((IData)(3U) 
                                                      + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))))
                                                ? vlSelf->GameBoySoC__DOT__memory__DOT__rom
                                               [(0xffffU 
                                                 & ((IData)(3U) 
                                                    + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                                                : (
                                                   ((0xc000U 
                                                     <= 
                                                     (0xffffU 
                                                      & ((IData)(3U) 
                                                         + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))) 
                                                    & (0xd000U 
                                                       > 
                                                       (0xffffU 
                                                        & ((IData)(3U) 
                                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))))
                                                    ? 
                                                   vlSelf->GameBoySoC__DOT__memory__DOT__rom
                                                   [
                                                   (0xffffU 
                                                    & ((IData)(0x8003U) 
                                                       + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                                                    : 
                                                   (((0xd000U 
                                                      <= 
                                                      (0xffffU 
                                                       & ((IData)(3U) 
                                                          + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))) 
                                                     & (0xe000U 
                                                        > 
                                                        (0xffffU 
                                                         & ((IData)(3U) 
                                                            + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))))
                                                     ? 
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                                    [
                                                    (0x1fffU 
                                                     & ((IData)(3U) 
                                                        + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                                                     : 
                                                    (((0xe000U 
                                                       <= 
                                                       (0xffffU 
                                                        & ((IData)(3U) 
                                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))) 
                                                      & (0xfe00U 
                                                         > 
                                                         (0xffffU 
                                                          & ((IData)(3U) 
                                                             + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))))
                                                      ? 
                                                     vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                                     [
                                                     (0x1fffU 
                                                      & ((IData)(3U) 
                                                         + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))]
                                                      : 0U)))));
    }
    if (vlSelf->io_extRomLoadEn) {
        __Vdlyvval__GameBoySoC__DOT__memory__DOT__rom__v0 
            = vlSelf->io_extRomLoadData;
        __Vdlyvset__GameBoySoC__DOT__memory__DOT__rom__v0 = 1U;
        __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__rom__v0 
            = (0xffffU & vlSelf->io_extRomLoadAddr);
    }
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
         & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
            & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
               & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                  & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                     & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                        & ((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                           & ((0xe000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                              & ((0xfe00U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                 & (0xfea0U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)))))))))))) {
        vlSelf->GameBoySoC__DOT__memory__DOT____Vlvbound_h5559fb94__0 
            = vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data;
        if ((0x9fU >= (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)))) {
            __Vdlyvval__GameBoySoC__DOT__memory__DOT__oam__v0 
                = vlSelf->GameBoySoC__DOT__memory__DOT____Vlvbound_h5559fb94__0;
            __Vdlyvset__GameBoySoC__DOT__memory__DOT__oam__v0 = 1U;
            __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__oam__v0 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr));
        }
    }
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
         & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
            & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
               & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                  & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                     & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                        & ((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                           & ((0xe000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                              & ((0xfe00U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                 & ((0xfea0U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                    & ((0xff00U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                       & ((0xff80U 
                                           <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                          & (0xffffU 
                                             > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))))))))))))))) {
        vlSelf->GameBoySoC__DOT__memory__DOT____Vlvbound_ha6cb93b5__0 
            = vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data;
        if ((0x7eU >= (0x7fU & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)))) {
            __Vdlyvval__GameBoySoC__DOT__memory__DOT__hram__v0 
                = vlSelf->GameBoySoC__DOT__memory__DOT____Vlvbound_ha6cb93b5__0;
            __Vdlyvset__GameBoySoC__DOT__memory__DOT__hram__v0 = 1U;
            __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__hram__v0 
                = (0x7fU & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr));
        }
    }
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
         & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
            & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
               & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                  & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                     & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                        & ((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                           & (0xe000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)))))))))) {
        __Vdlyvval__GameBoySoC__DOT__memory__DOT__wram__v0 
            = vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data;
        __Vdlyvset__GameBoySoC__DOT__memory__DOT__wram__v0 = 1U;
        __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__wram__v0 
            = (0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr));
    }
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
         & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
            & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
               & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                  & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                     & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                        & ((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                           & ((0xe000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                              & (0xfe00U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))))))))))) {
        __Vdlyvval__GameBoySoC__DOT__memory__DOT__wram__v1 
            = vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data;
        __Vdlyvset__GameBoySoC__DOT__memory__DOT__wram__v1 = 1U;
        __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__wram__v1 
            = (0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr));
    }
    vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__prev 
        = ((1U & (~ (IData)(vlSelf->reset))) && (1U 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT___prev_T)));
    if ((1U & (~ (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_clear)))) {
        if (((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable) 
             & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_popEnable))) {
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
        } else if (vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable) {
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
        }
    }
    if (vlSelf->GameBoySoC__DOT__ppu_io_vramRead) {
        vlSelf->GameBoySoC__DOT__ppu__DOT__vram__DOT__mem_io_rdata_MPORT_addr_pipe_0 
            = ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT____VdfgTmp_ha309eb35__0)
                ? (0x1fffU & ((0U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))
                               ? (((8U & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC))
                                    ? 0x1c00U : 0x1800U) 
                                  + ((0x7ffU & VL_SHIFTL_III(11,11,32, 
                                                             (0x1fU 
                                                              & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__scrolledY) 
                                                                 >> 3U)), 5U)) 
                                     + (0x1fU & (((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX) 
                                                  + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX)) 
                                                 >> 3U))))
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
    vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle_prev 
        = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
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
    if (vlSelf->reset) {
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head = 0U;
    } else if (vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_clear) {
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head = 0U;
    } else if (((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable) 
                & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_popEnable))) {
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head 
            = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___head_T_1;
    } else if ((1U & (~ (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable)))) {
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head 
            = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_544;
    }
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___head_T_1 
        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head)));
    GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_outPixel 
        = ((0x1fU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_31)
            : ((0x1eU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_30)
                : ((0x1dU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_29)
                    : ((0x1cU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_28)
                        : ((0x1bU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_27)
                            : ((0x1aU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_26)
                                : ((0x19U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_25)
                                    : ((0x18U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_24)
                                        : ((0x17U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_23)
                                            : ((0x16U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_22)
                                                : (
                                                   (0x15U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_21)
                                                    : 
                                                   ((0x14U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_20)
                                                     : 
                                                    ((0x13U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_19)
                                                      : 
                                                     ((0x12U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_18)
                                                       : 
                                                      ((0x11U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_17)
                                                        : 
                                                       ((0x10U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_16)
                                                         : 
                                                        ((0xfU 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_15)
                                                          : 
                                                         ((0xeU 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_14)
                                                           : 
                                                          ((0xdU 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_13)
                                                            : 
                                                           ((0xcU 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                             ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_12)
                                                             : 
                                                            ((0xbU 
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
                                                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_0))))))))))))))))))))))))))))))));
    if (vlSelf->reset) {
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail = 0U;
    } else if (vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_clear) {
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail = 0U;
    } else if (((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable) 
                & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_popEnable))) {
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail 
            = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___tail_T_1;
    } else if (vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable) {
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail 
            = vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___tail_T_1;
    }
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___tail_T_1 
        = (0x1fU & ((IData)(8U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail)));
    if (vlSelf->reset) {
        vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tma = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__div = 0U;
    } else if (((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_enable) 
                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_write))) {
        if ((0U != (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr))) {
            if ((1U != (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tma 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT___GEN_6;
            }
        }
        vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__div 
            = ((0U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr))
                ? 0U : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT___div_T_1));
    } else {
        vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__div 
            = vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT___div_T_1;
    }
    vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT___div_T_1 
        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__div)));
    if (vlSelf->reset) {
        vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tac = 0U;
    } else if (((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_enable) 
                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_write))) {
        if ((0U != (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr))) {
            if ((1U != (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tac 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT___GEN_7;
            }
        }
    }
    vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT___prev_T 
        = (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__div) 
                      >> ((3U == (3U & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tac)))
                           ? 7U : ((2U == (3U & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tac)))
                                    ? 5U : ((1U == 
                                             (3U & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tac)))
                                             ? 3U : 9U)))));
    if (vlSelf->reset) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0 = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT = 0x85U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22 = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52 = 0xf1U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21 = 0x3fU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14 = 0xbfU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13 = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44 = 0xbfU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43 = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50 = 0x77U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23 = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1 = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10 = 0x80U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41 = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42 = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12 = 0xf3U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51 = 0xf3U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11 = 0xbfU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33 = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30 = 0x7fU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24 = 0xbfU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31 = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32 = 0x9fU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34 = 0xbfU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSC = 0x7eU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP = 0xfcU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSB = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regP1 = 0xffU;
        vlSelf->GameBoySoC__DOT__ppu__DOT__xPos = 0U;
    } else {
        if (vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_write) {
            if ((0U != (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                if ((1U != (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_656;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_655;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_654;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_653;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_657;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_650;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_652;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_651;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_662;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_659;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_658;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_660;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_661;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_663;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSC 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_648;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673;
                }
                if ((1U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSB 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                }
            }
            if ((0U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regP1 
                    = (0xcfU | (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData));
            }
        }
        vlSelf->GameBoySoC__DOT__ppu__DOT__xPos = (
                                                   (((3U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__mode)) 
                                                     & (0x90U 
                                                        > (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg))) 
                                                    & (IData)(vlSelf->io_lcdEnable))
                                                    ? 
                                                   (((0U 
                                                      < (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count)) 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___T_11))
                                                     ? 
                                                    ((0U 
                                                      < (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__discardPixels))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_15)
                                                      : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___xPos_T_1))
                                                     : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_15))
                                                    : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_15));
    }
    vlSelf->GameBoySoC__DOT__ppu__DOT__discardPixels 
        = (0xfU & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_174));
    vlSelf->io_pixelX = vlSelf->GameBoySoC__DOT__ppu__DOT__xPos;
    vlSelf->GameBoySoC__DOT__ppu__DOT___T_11 = (0xa0U 
                                                > (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__xPos));
    vlSelf->GameBoySoC__DOT__ppu__DOT___xPos_T_1 = 
        (0xffU & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__xPos)));
    vlSelf->GameBoySoC__DOT__cpu__DOT__state_prev = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
    if (vlSelf->reset) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8 = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF = 0xe1U;
    } else {
        if ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            if ((0x76U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
                if ((1U != (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1863;
                }
            }
        }
        if (((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT____VdfgTmp_h3326f5f0__0) 
             & (0xffU == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tima)))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___regIF_T_2;
        } else if (vlSelf->GameBoySoC__DOT__ppu__DOT__vblankIRQ) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___regIF_T;
        } else if (vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_write) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_726;
        }
    }
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___regIF_T_2 
        = (4U | (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___regIF_T 
        = (1U | (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF));
    if (vlSelf->reset) {
        vlSelf->GameBoySoC__DOT__memory__DOT__regIE = 0U;
    } else if (vlSelf->GameBoySoC__DOT__cpu_io_memWrite) {
        if ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            if ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__regIE 
                    = vlSelf->GameBoySoC__DOT__memory__DOT___GEN_534;
            }
        }
    }
    GameBoySoC__DOT__cpu__DOT__intr__DOT__active = 
        ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF) 
         & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE));
    vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT____VdfgTmp_h3326f5f0__0 
        = (((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tac) 
            >> 2U) & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT___prev_T)) 
                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__prev)));
    if (vlSelf->reset) {
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC = 0x91U;
        __Vdly__GameBoySoC__DOT__ppu__DOT__fetcherState = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__tileNum = 0U;
    } else {
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count 
            = ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_clear)
                ? 0U : (((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable) 
                         & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_popEnable))
                         ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___count_T_1)
                         : ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable)
                             ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___count_T_3)
                             : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_545))));
        if (vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_write) {
            if ((0U != (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                if ((1U != (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671;
                }
            }
        }
        if ((((3U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__mode)) 
              & (0x90U > (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg))) 
             & (IData)(vlSelf->io_lcdEnable))) {
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
                        = vlSelf->GameBoySoC__DOT__ppu__DOT__vram_io_rdata;
                }
            }
        } else {
            if ((((0U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__dotCounter)) 
                  & (0x90U > (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg))) 
                 & (IData)(vlSelf->io_lcdEnable))) {
                __Vdly__GameBoySoC__DOT__ppu__DOT__fetcherState = 0U;
            }
            vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX 
                = vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_16;
        }
    }
    vlSelf->GameBoySoC__DOT__ppu__DOT__vram_io_rdata 
        = vlSelf->GameBoySoC__DOT__ppu__DOT__vram__DOT__mem
        [vlSelf->GameBoySoC__DOT__ppu__DOT__vram__DOT__mem_io_rdata_MPORT_addr_pipe_0];
    if (vlSelf->reset) {
        vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState 
            = __Vdly__GameBoySoC__DOT__ppu__DOT__fetcherState;
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
        vlSelf->GameBoySoC__DOT__cpu__DOT__irqVectorLatched = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__irqIndexLatched = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__state = __Vdly__GameBoySoC__DOT__cpu__DOT__state;
        vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tima = 0U;
        __Vdly__GameBoySoC__DOT__ppu__DOT__dotCounter = 0U;
        __Vdly__GameBoySoC__DOT__ppu__DOT__lyReg = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__vblankIRQ = 0U;
    } else {
        if ((((3U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__mode)) 
              & (0x90U > (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg))) 
             & (IData)(vlSelf->io_lcdEnable))) {
            if ((0U != (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
                if ((2U != (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
                    vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow 
                        = vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_88;
                    vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh 
                        = vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_89;
                }
            }
        }
        vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState 
            = __Vdly__GameBoySoC__DOT__ppu__DOT__fetcherState;
        if ((7U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
            if ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                if ((1U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__A 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2439;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__F 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2440;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__B 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2441;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__C 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2442;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__D 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2443;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__E 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2444;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__H 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2445;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__L 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2446;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__IR2 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2432;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__imm16 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2418;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2447;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2450;
                }
                if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__imm8 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2060;
                }
            }
            if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                if ((1U & (~ ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__canTakeInterrupt) 
                              & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_should_irq))))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__IR 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2020;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2026;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2027;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2028;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2029;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2030;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2031;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2032;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2033;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2034;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2035;
                }
                if (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__canTakeInterrupt) 
                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_should_irq))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__IME = 0U;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__irqVectorLatched 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_irq_vector;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__irqIndexLatched 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_irq_index;
                }
            } else {
                if ((1U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__IME 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2449;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__irqVectorLatched 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2452;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__irqIndexLatched 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2453;
                }
                if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2064;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2065;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2066;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2067;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2068;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2069;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2070;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2071;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2072;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2073;
                } else {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2422;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2423;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2424;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2425;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2426;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2427;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2428;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2429;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2430;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2431;
                }
            }
        }
        if ((7U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_59)))) {
                if ((1U & (~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_61)))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__PC 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1954;
                    __Vdly__GameBoySoC__DOT__cpu__DOT__state 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1956;
                }
                vlSelf->GameBoySoC__DOT__cpu__DOT__SP 
                    = ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_61)
                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1944)
                        : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1953));
            }
            vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle 
                = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1942;
            if (vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_59) {
                if (vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_1) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle = 1U;
                }
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle 
                    = ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_61)
                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_115)
                        : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1955));
            }
        } else {
            if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                if ((1U & (~ ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__canTakeInterrupt) 
                              & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_should_irq))))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__PC 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2021;
                }
                if (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__canTakeInterrupt) 
                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_should_irq))) {
                    __Vdly__GameBoySoC__DOT__cpu__DOT__state = 7U;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle = 0U;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle = 0U;
                } else {
                    __Vdly__GameBoySoC__DOT__cpu__DOT__state 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2024;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1942;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1948;
                }
            } else if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__PC 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2021;
                __Vdly__GameBoySoC__DOT__cpu__DOT__state 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2063;
                vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1942;
                vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1948;
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT__PC 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2419;
                __Vdly__GameBoySoC__DOT__cpu__DOT__state 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2420;
                vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2454;
                vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2421;
            }
            if ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                if ((1U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__SP 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2448;
                }
            }
        }
        vlSelf->GameBoySoC__DOT__cpu__DOT__state = __Vdly__GameBoySoC__DOT__cpu__DOT__state;
        vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tima 
            = (((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_enable) 
                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_write))
                ? ((0U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT___GEN_3)
                    : ((1U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_wdata)
                        : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT___GEN_3)))
                : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT___GEN_3));
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
    }
    vlSelf->GameBoySoC__DOT__ppu__DOT__dotCounter = __Vdly__GameBoySoC__DOT__ppu__DOT__dotCounter;
    vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg = __Vdly__GameBoySoC__DOT__ppu__DOT__lyReg;
    if ((1U & (IData)(GameBoySoC__DOT__cpu__DOT__intr__DOT__active))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_irq_vector = 0x40U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_irq_index = 0U;
    } else if ((2U & (IData)(GameBoySoC__DOT__cpu__DOT__intr__DOT__active))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_irq_vector = 0x48U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_irq_index = 1U;
    } else if ((4U & (IData)(GameBoySoC__DOT__cpu__DOT__intr__DOT__active))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_irq_vector = 0x50U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_irq_index = 2U;
    } else if ((8U & (IData)(GameBoySoC__DOT__cpu__DOT__intr__DOT__active))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_irq_vector = 0x58U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_irq_index = 3U;
    } else if ((0x10U & (IData)(GameBoySoC__DOT__cpu__DOT__intr__DOT__active))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_irq_vector = 0x60U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_irq_index = 4U;
    } else {
        vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_irq_vector = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_irq_index = 0U;
    }
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___count_T_1 
        = (0x3fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count)));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___count_T_3 
        = (0x3fU & ((IData)(8U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count)));
    vlSelf->GameBoySoC__DOT__ppu__DOT___T_37 = ((0U 
                                                 < (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count)) 
                                                & (0xa0U 
                                                   > (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__xPos)));
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
           & (0U != (IData)(GameBoySoC__DOT__cpu__DOT__intr__DOT__active)));
    vlSelf->io_dbg_pc = vlSelf->GameBoySoC__DOT__cpu__DOT__PC;
    GameBoySoC__DOT__cpu__DOT___u_out_PC_T_4 = (0xffffU 
                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled) 
                                                   + 
                                                   ((0xff00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8) 
                                                                       >> 7U)))) 
                                                        << 8U)) 
                                                    | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8))));
    GameBoySoC__DOT__cpu__DOT___u_result_T = (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled) 
                                               << 8U) 
                                              | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
    GameBoySoC__DOT__cpu__DOT___u_result_T_3 = (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled) 
                                                 << 8U) 
                                                | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h54193848__0 
        = (1U & (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                  >> 4U) | (0x99U < (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled))));
    GameBoySoC__DOT__cpu__DOT__cbOut_result = (0xffU 
                                               & ((0U 
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
                                                   ((0xfeU 
                                                     & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                          >> 7U)))
                                                    : 
                                                   ((1U 
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
                                                           : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8)))))))))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                        >> 6U)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8)
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                         >> 6U)))
                                                     ? 
                                                    ((~ 
                                                      ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                           >> 3U)))) 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8))
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                          >> 6U)))
                                                      ? 
                                                     ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                      | ((IData)(1U) 
                                                         << 
                                                         (7U 
                                                          & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                             >> 3U))))
                                                      : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8))))));
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
    vlSelf->GameBoySoC__DOT__cpu__DOT___u_out_H_T_8 
        = (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                      + ((((0x80U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8))
                            ? 0xffU : 0U) << 8U) | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8))));
    vlSelf->io_dbg_state = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
    vlSelf->io_dbg_tcycle = vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle;
    vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_1 = (3U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1944 = 
        (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP) 
                    - (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))));
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2021 = 
        (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC) 
                    + (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))));
    GameBoySoC__DOT__cpu__DOT___GEN_382 = (0xffffU 
                                           & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                              + (3U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))));
    vlSelf->GameBoySoC__DOT__cpu__DOT__canTakeInterrupt 
        = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
           & (0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)));
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
    if ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
        if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1956 = 0U;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1954 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__irqVectorLatched;
        } else {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1956 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1954 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__PC;
        }
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
                = GameBoySoC__DOT__cpu__DOT__cbOut_result;
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
                    = GameBoySoC__DOT__cpu__DOT__cbOut_result;
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
                        = GameBoySoC__DOT__cpu__DOT__cbOut_result;
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
                            = GameBoySoC__DOT__cpu__DOT__cbOut_result;
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
                                = GameBoySoC__DOT__cpu__DOT__cbOut_result;
                            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_L 
                                = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
                            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A 
                                = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
                        } else {
                            vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_H 
                                = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
                            if ((5U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))) {
                                vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_L 
                                    = GameBoySoC__DOT__cpu__DOT__cbOut_result;
                                vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A 
                                    = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
                            } else {
                                vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_L 
                                    = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
                                vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A 
                                    = ((7U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                        ? (IData)(GameBoySoC__DOT__cpu__DOT__cbOut_result)
                                        : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                            }
                        }
                    }
                }
            }
        }
        vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_F 
            = ((0x80U & (((0U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                        >> 6U))) ? 
                          (0U == (IData)(GameBoySoC__DOT__cpu__DOT__cbOut_result))
                           : ((1U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                            >> 6U)))
                               ? (~ (0xffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                              >> (7U 
                                                  & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                     >> 3U)))))
                               : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                  >> 7U))) << 7U)) 
               | ((0xffffffc0U & (((0U != (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                 >> 6U))) 
                                   << 6U) & (((1U != 
                                               (3U 
                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                   >> 6U))) 
                                              << 6U) 
                                             & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)))) 
                  | ((((0U != (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                     >> 6U))) << 5U) 
                      & (((1U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                        >> 6U))) << 5U) 
                         | (0xffffffe0U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)))) 
                     | (0x10U & (((0U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                >> 6U)))
                                   ? ((0U == (7U & 
                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                               >> 3U)))
                                       ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                          >> 7U) : 
                                      ((1U == (7U & 
                                               ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                >> 3U)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8)
                                        : ((2U == (7U 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                      >> 3U)))
                                            ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                               >> 7U)
                                            : ((3U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                    >> 3U)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8)
                                                : (
                                                   (4U 
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
                                      >> 4U)) << 4U)))));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1953 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1944;
    } else {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1956 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1954 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__PC;
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
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1953 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
    }
    if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2064 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2065 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2066 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2067 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2068 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__B;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2069 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2070 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__D;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2071 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__E;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2063 = 4U;
        GameBoySoC__DOT__cpu__DOT___GEN_329 = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2072 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__H;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2073 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__L;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1948 = 0U;
    } else {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2064 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2065 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2066 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2067 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2068 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2069 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2070 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2071 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2063 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
        GameBoySoC__DOT__cpu__DOT___GEN_329 = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2072 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2073 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1948 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
    }
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1955 = 
        ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1948)
          : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle));
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1942 = 
        (3U & (((~ (IData)((0U != (IData)(GameBoySoC__DOT__cpu__DOT__intr__DOT__active)))) 
                & ((6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                   | (6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state_prev))))
                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)
                : ((((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state) 
                     != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state_prev)) 
                    | ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle) 
                       != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle_prev)))
                    ? 0U : ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                             ? 0U : ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))))));
    GameBoySoC__DOT__cpu__DOT___GEN_2192 = ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
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
    GameBoySoC__DOT__cpu__DOT___GEN_608 = ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                           & ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                              & (3U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))));
    GameBoySoC__DOT__cpu__DOT___GEN_376 = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                           | (1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)));
    GameBoySoC__DOT__cpu__DOT___GEN_118 = ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                           & (2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)));
    vlSelf->io_dbg_opcode = vlSelf->GameBoySoC__DOT__cpu__DOT__IR;
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
    GameBoySoC__DOT__cpu__DOT__u_oldVal = ((7U == (7U 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                      >> 3U)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                            : ((5U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                    >> 3U)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
                                                : (
                                                   (4U 
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
    vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84 = ((0x40U 
                                                   <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                  & ((0x7fU 
                                                      >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                     & ((0x76U 
                                                         != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                        & ((6U 
                                                            != 
                                                            (7U 
                                                             & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
                                                           & (0x70U 
                                                              != 
                                                              (0xf8U 
                                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))))));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0 
        = ((4U == (0xc7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
           & (6U != (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                           >> 3U))));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0 
        = ((5U == (0xc7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
           & (6U != (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                           >> 3U))));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0 
        = ((6U == (0xc7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
           & (6U != (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                           >> 3U))));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0 
        = (((0x70U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
            & (0x75U >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
           | (0x77U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0 
        = ((0x46U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           | ((0x4eU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
              | ((0x56U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                 | ((0x5eU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                    | ((0x66U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                       | ((0x6eU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                          | (0x7eU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))))))));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hbdd8dcae__0 
        = (((0x80U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
            & (0x85U >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
           | (0x87U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0 
        = ((0x88U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0x8fU >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0 
        = ((0x90U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0x97U >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0 
        = ((0x98U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0x9fU >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0 
        = ((0xa0U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0xa7U >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0 
        = ((0xa8U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0xafU >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0 
        = ((0xb0U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0xb7U >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0 
        = (((0xb8U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
            & (0xbdU >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
           | (0xbfU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT___GEN_3 
        = (0xffU & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT____VdfgTmp_h3326f5f0__0)
                     ? ((0xffU == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tima))
                         ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tma)
                         : ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tima)))
                     : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tima)));
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
    GameBoySoC__DOT__ppu__DOT____VdfgTmp_hada5b228__0 
        = ((0x90U > (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg)) 
           & (IData)(vlSelf->io_lcdEnable));
    if ((0x40U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))) {
        GameBoySoC__DOT__cpu__DOT__u_correction = (0xffU 
                                                   & (((0x10U 
                                                        & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))
                                                        ? 0x60U
                                                        : 0U) 
                                                      + 
                                                      ((0x20U 
                                                        & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))
                                                        ? 6U
                                                        : 0U)));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_adjusted 
            = (0xffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled) 
                        - (IData)(GameBoySoC__DOT__cpu__DOT__u_correction)));
    } else {
        GameBoySoC__DOT__cpu__DOT__u_correction = (0xffU 
                                                   & (((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h54193848__0)
                                                        ? 0x60U
                                                        : 0U) 
                                                      + 
                                                      ((1U 
                                                        & (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                            >> 5U) 
                                                           | (9U 
                                                              < 
                                                              (0xfU 
                                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)))))
                                                        ? 6U
                                                        : 0U)));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_adjusted 
            = (0xffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled) 
                        + (IData)(GameBoySoC__DOT__cpu__DOT__u_correction)));
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
        GameBoySoC__DOT__cpu__DOT__u_operand = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT__u_regPair = (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled) 
                                                 << 8U) 
                                                | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled));
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
        GameBoySoC__DOT__cpu__DOT__u_operand = GameBoySoC__DOT__cpu__DOT___u_operand_T_8;
        GameBoySoC__DOT__cpu__DOT__u_regPair = GameBoySoC__DOT__cpu__DOT___u_operand_T_8;
    }
    GameBoySoC__DOT__cpu__DOT___GEN_326 = ((IData)(GameBoySoC__DOT__cpu__DOT___u_T_137)
                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL)
                                            : 0U);
    GameBoySoC__DOT__cpu__DOT__cbOut_done = ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                              ? ((3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)) 
                                                 | (IData)(GameBoySoC__DOT__cpu__DOT___GEN_2192))
                                              : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_2192));
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_115 = (
                                                   (3U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                    ? 2U
                                                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle));
    GameBoySoC__DOT__cpu__DOT___GEN_2116 = ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_115)
                                             : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle));
    GameBoySoC__DOT__cpu__DOT___GEN_139 = ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                           & ((1U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                              & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_118)));
    vlSelf->io_dbg_IR = vlSelf->io_dbg_opcode;
    GameBoySoC__DOT__cpu__DOT___GEN_541 = ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_condition)
                                            ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_608)
                                            : (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)));
    if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
        GameBoySoC__DOT__cpu__DOT___GEN_378 = (0xffffU 
                                               & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                                  - (IData)(1U)));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_254 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_140 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_454 = (0xffU 
                                               & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled) 
                                                  >> 8U));
        GameBoySoC__DOT__cpu__DOT___GEN_136 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_375 = (0xffffU 
                                               & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                                  - (IData)(1U)));
        GameBoySoC__DOT__cpu__DOT___GEN_426 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_589 = vlSelf->GameBoySoC__DOT__cpu__DOT__imm16;
        GameBoySoC__DOT__cpu__DOT___GEN_429 = GameBoySoC__DOT__cpu__DOT___GEN_382;
        GameBoySoC__DOT__cpu__DOT___GEN_131 = vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL;
        GameBoySoC__DOT__cpu__DOT___GEN_248 = vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL;
    } else {
        GameBoySoC__DOT__cpu__DOT___GEN_378 = (0xffffU 
                                               & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                                  - 
                                                  (1U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))));
        if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_254 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8;
            GameBoySoC__DOT__cpu__DOT___GEN_140 = 0U;
            GameBoySoC__DOT__cpu__DOT___GEN_454 = (0xffU 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled));
            GameBoySoC__DOT__cpu__DOT___GEN_136 = vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8;
            GameBoySoC__DOT__cpu__DOT___GEN_375 = (0xffffU 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                                      - (IData)(1U)));
            GameBoySoC__DOT__cpu__DOT___GEN_426 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_429 = GameBoySoC__DOT__cpu__DOT___GEN_382;
            GameBoySoC__DOT__cpu__DOT___GEN_131 = 0U;
        } else {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_254 
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
            GameBoySoC__DOT__cpu__DOT___GEN_454 = (0xffU 
                                                   & 0U);
            GameBoySoC__DOT__cpu__DOT___GEN_136 = 0U;
            GameBoySoC__DOT__cpu__DOT___GEN_375 = (0xffffU 
                                                   & 0U);
            GameBoySoC__DOT__cpu__DOT___GEN_426 = 0U;
            GameBoySoC__DOT__cpu__DOT___GEN_429 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        }
        GameBoySoC__DOT__cpu__DOT___GEN_589 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_248 = 0U;
    }
    GameBoySoC__DOT__cpu__DOT___GEN_113 = ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                            ? 1U : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle));
    GameBoySoC__DOT__cpu__DOT___GEN_607 = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                            ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_113)
                                            : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle));
    GameBoySoC__DOT__cpu__DOT___GEN_539 = ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_condition)
                                            ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_607)
                                            : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle));
    __VdfgTmp_h5eed7589__0 = ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                               ? (IData)(GameBoySoC__DOT__cpu__DOT__u_oldVal)
                               : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
                                   ? (IData)(GameBoySoC__DOT__cpu__DOT__u_oldVal)
                                   : ((0x34U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                       ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_136)
                                       : ((0x35U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                           ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_136)
                                           : ((0xe9U 
                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                               ? 0U
                                               : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84)
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
                                                            : 
                                                           ((0xe2U 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                             ? 0U
                                                             : 
                                                            ((0xe0U 
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
                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_329)
                                                                 : 
                                                                ((0xaeU 
                                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                  ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_329)
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
                                                                          ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_329)
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
                                                                                 : 0U)))))))))))))))))))))))))))))))))))));
    vlSelf->io_pixelY = vlSelf->io_dbg_ly;
    vlSelf->GameBoySoC__DOT__ppu__DOT__tileAddr = (0x3fffU 
                                                   & (((0x10U 
                                                        & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC))
                                                        ? 0U
                                                        : 0x800U) 
                                                      + 
                                                      (VL_SHIFTL_III(14,14,32, 
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
                                                                           | (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileNum))))), 4U) 
                                                       + 
                                                       (0x3ffU 
                                                        & VL_SHIFTL_III(10,10,32, 
                                                                        (7U 
                                                                         & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__scrolledY)), 1U)))));
    vlSelf->io_hblank = (0U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__mode));
    vlSelf->io_vblank = (1U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__mode));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_clear 
        = ((0U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__dotCounter)) 
           & (IData)(GameBoySoC__DOT__ppu__DOT____VdfgTmp_hada5b228__0));
    vlSelf->GameBoySoC__DOT__ppu__DOT____VdfgTmp_ha309eb35__0 
        = ((3U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__mode)) 
           & (IData)(GameBoySoC__DOT__ppu__DOT____VdfgTmp_hada5b228__0));
    GameBoySoC__DOT__cpu__DOT___GEN_1934 = ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                            & ((0x76U 
                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                               & ((1U 
                                                   != 
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
                                                                                 : 
                                                                                ((0xf0U 
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
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_376)
                                                                                 : 
                                                                                ((0xc1U 
                                                                                != 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
                                                                                & ((0xcdU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_376)
                                                                                 : 
                                                                                ((0xc9U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xd9U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xc7U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_376)
                                                                                 : 
                                                                                ((0xfbU 
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
                                                                                & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_376))
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
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    GameBoySoC__DOT__cpu__DOT__u_alu_io_op = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                               ? 0U
                                               : ((0x76U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (0xcfU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                    ? 0U
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (0xcfU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                     ? 0U
                                                     : 
                                                    ((0xbU 
                                                      == 
                                                      (0xcfU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                      ? 0U
                                                      : 
                                                     ((9U 
                                                       == 
                                                       (0xcfU 
                                                        & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
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
                                                                      : 
                                                                     ((0xe2U 
                                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                       ? 0U
                                                                       : 
                                                                      ((0xe0U 
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
                                                                                 : 0U)))))))))))))))))))))))))))))))))))))))))));
    GameBoySoC__DOT__cpu__DOT__u_alu_io_flagN = ((0U 
                                                  != (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                 & ((1U 
                                                     != (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                    & ((2U 
                                                        == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                       | ((3U 
                                                           == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                          | ((4U 
                                                              != (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                             & ((5U 
                                                                 != (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                                & ((6U 
                                                                    != (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                                   & ((7U 
                                                                       == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                                      | ((8U 
                                                                          != (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                                         & (9U 
                                                                            == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)))))))))));
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
            = vlSelf->GameBoySoC__DOT__ppu__DOT__vram_io_rdata;
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
                = vlSelf->GameBoySoC__DOT__ppu__DOT__vram_io_rdata;
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
    vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_174 = ((IData)(vlSelf->reset)
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT____VdfgTmp_ha309eb35__0)
                                                     ? 
                                                    ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___T_37)
                                                      ? 
                                                     ((0U 
                                                       < (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__discardPixels))
                                                       ? 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__discardPixels) 
                                                          - (IData)(1U)))
                                                       : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_19))
                                                      : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_19))
                                                     : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_19)));
    if (vlSelf->GameBoySoC__DOT__ppu__DOT____VdfgTmp_ha309eb35__0) {
        vlSelf->GameBoySoC__DOT__ppu_io_vramRead = 
            ((0U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState)) 
             | ((2U != (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState)) 
                & ((1U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState)) 
                   | ((4U != (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState)) 
                      & (3U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))))));
        vlSelf->io_pixelValid = ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___T_37) 
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
        vlSelf->io_pixelColor = ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___T_37)
                                  ? ((0U < (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__discardPixels))
                                      ? 0U : (3U & 
                                              ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP) 
                                               >> ((IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_outPixel) 
                                                   << 1U))))
                                  : 0U);
        if ((0U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0U;
        } else if ((2U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0U;
        } else if ((1U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0U;
        } else if ((4U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0U;
        } else if ((3U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0U;
        } else if ((5U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0U;
        } else if ((6U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))) {
            if ((0x10U >= (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count))) {
                GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 
                    = (1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                             >> 6U));
                GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 
                    = (1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                             >> 5U));
                GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 
                    = (1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                             >> 4U));
                GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 
                    = (1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                             >> 3U));
                GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 
                    = (1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                             >> 2U));
                GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 
                    = (1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                             >> 1U));
                GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 
                    = (1U & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow));
                GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 
                    = ((2U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh) 
                              >> 6U)) | (1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                               >> 7U)));
            } else {
                GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0U;
                GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0U;
                GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0U;
                GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0U;
                GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0U;
                GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0U;
                GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0U;
                GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0U;
            }
        } else {
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0U;
            GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0U;
        }
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_popEnable 
            = vlSelf->GameBoySoC__DOT__ppu__DOT___T_37;
    } else {
        vlSelf->GameBoySoC__DOT__ppu_io_vramRead = 0U;
        vlSelf->io_pixelValid = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable = 0U;
        vlSelf->io_pixelColor = 0U;
        GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1 = 0U;
        GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2 = 0U;
        GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3 = 0U;
        GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4 = 0U;
        GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5 = 0U;
        GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6 = 0U;
        GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7 = 0U;
        GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0 = 0U;
        vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_popEnable = 0U;
    }
    vlSelf->GameBoySoC__DOT__cpu__DOT__u_result_2 = 
        (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL) 
                    + (IData)(GameBoySoC__DOT__cpu__DOT__u_operand)));
    if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = 0U;
    } else if ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = 0U;
    } else if ((1U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = ((0U 
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
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = 0U;
    } else if ((3U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = ((0U 
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
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = 0U;
    } else if ((0xbU == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = ((0U 
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
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = 0U;
    } else if ((9U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = 0U;
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = 0U;
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = 0U;
    } else if ((0x34U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_131));
    } else if ((0x35U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_131));
    } else if ((0xe9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & 0U);
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & 0U);
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & 0U);
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL));
    } else if ((0x36U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_248));
    } else if ((0x1aU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & ((IData)(GameBoySoC__DOT__cpu__DOT___u_T_137)
                                                    ? (IData)(GameBoySoC__DOT__cpu__DOT___u_result_T_3)
                                                    : 0U));
    } else if ((0x2aU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_248));
    } else if ((0x3aU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_248));
    } else if ((0x22U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL));
    } else if ((0x32U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL));
    } else if ((0xf2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & ((0U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                    ? 
                                                   (0xff00U 
                                                    | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled))
                                                    : 0U));
    } else if ((0xe2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & (0xff00U 
                                                   | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)));
    } else if ((0xe0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & (0xff00U 
                                                   | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)));
    } else if ((0xf0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & ((0U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                    ? 
                                                   (0xff00U 
                                                    | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8))
                                                    : 0U));
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL));
    } else if ((0x86U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_326));
    } else if ((0xaeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_326));
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hbdd8dcae__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & 0U);
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & 0U);
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & 0U);
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & 0U);
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & 0U);
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & 0U);
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                     >> 4U));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & 0U);
    } else if ((0xbeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((3U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)) 
                     & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                        >> 4U)));
        GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_1930 = (0xffffU 
                                                & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_326));
    } else {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn 
            = (1U & ((~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0)) 
                     & ((0xc6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                         ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                            >> 4U) : ((0xceU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                       ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                          >> 4U) : 
                                      ((0xd6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                        ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                           >> 4U) : 
                                       ((0xe6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                         ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                            >> 4U) : 
                                        ((0xeeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                          ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                             >> 4U)
                                          : ((0xf6U 
                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                              ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                 >> 4U)
                                              : ((0xfeU 
                                                  != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                 & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                    >> 4U))))))))));
        if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0xc6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0xceU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0xd6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0xe6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0xeeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0xf6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0xfeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0x18U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0x10U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0xc5U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = GameBoySoC__DOT__cpu__DOT___GEN_378;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_375));
        } else if ((0xc1U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = GameBoySoC__DOT__cpu__DOT___GEN_429;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_426));
        } else if ((0xcdU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = GameBoySoC__DOT__cpu__DOT___GEN_378;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_375));
        } else if ((0xc9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = GameBoySoC__DOT__cpu__DOT___GEN_429;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_426));
        } else if ((0xd9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = GameBoySoC__DOT__cpu__DOT___GEN_429;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_426));
        } else if ((0xc7U == (0xc7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = GameBoySoC__DOT__cpu__DOT___GEN_378;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_375));
        } else if ((0xfbU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0xf3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0x20U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0xc2U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0xc4U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            if (vlSelf->GameBoySoC__DOT__cpu__DOT__u_condition) {
                GameBoySoC__DOT__cpu__DOT__u___05FSP 
                    = GameBoySoC__DOT__cpu__DOT___GEN_378;
                GameBoySoC__DOT__cpu__DOT___GEN_1930 
                    = (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_375));
            } else {
                GameBoySoC__DOT__cpu__DOT__u___05FSP 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
                GameBoySoC__DOT__cpu__DOT___GEN_1930 
                    = (0xffffU & 0U);
            }
        } else if ((0xc0U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            if (vlSelf->GameBoySoC__DOT__cpu__DOT__u_condition) {
                GameBoySoC__DOT__cpu__DOT__u___05FSP 
                    = GameBoySoC__DOT__cpu__DOT___GEN_429;
                GameBoySoC__DOT__cpu__DOT___GEN_1930 
                    = (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_426));
            } else {
                GameBoySoC__DOT__cpu__DOT__u___05FSP 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
                GameBoySoC__DOT__cpu__DOT___GEN_1930 
                    = (0xffffU & 0U);
            }
        } else if ((0xc3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0x37U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0x3fU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0x2fU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0x27U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0x17U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0x1fU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        } else if ((0xfaU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_589));
        } else if ((0xeaU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_589));
        } else if ((8U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16)
                             : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                 ? ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16))
                                 : 0U)));
        } else {
            GameBoySoC__DOT__cpu__DOT__u___05FSP = 
                ((0xf9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL)
                  : ((0xf8U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                      : ((0xe8U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_out_H_T_8)
                          : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled))));
            GameBoySoC__DOT__cpu__DOT___GEN_1930 = 
                (0xffffU & 0U);
        }
    }
    if ((7U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
            vlSelf->GameBoySoC__DOT__cpu_io_memAddr 
                = (0xffffU & 0xff0fU);
            vlSelf->GameBoySoC__DOT__cpu_io_memWrite 
                = (2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        } else if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
            vlSelf->GameBoySoC__DOT__cpu_io_memAddr 
                = (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP) 
                              - (IData)(1U)));
            vlSelf->GameBoySoC__DOT__cpu_io_memWrite 
                = (2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        } else {
            vlSelf->GameBoySoC__DOT__cpu_io_memAddr 
                = (0xffffU & ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                               ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP) 
                                  - (IData)(1U)) : 0U));
            vlSelf->GameBoySoC__DOT__cpu_io_memWrite 
                = GameBoySoC__DOT__cpu__DOT___GEN_118;
        }
    } else {
        vlSelf->GameBoySoC__DOT__cpu_io_memAddr = (0xffffU 
                                                   & ((0U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                       ? 
                                                      (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__canTakeInterrupt) 
                                                        & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_should_irq))
                                                        ? 0U
                                                        : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC))
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)
                                                        : 
                                                       ((2U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)
                                                         : 
                                                        ((3U 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)
                                                          : 
                                                         ((5U 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)
                                                           : 
                                                          ((4U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                            ? 
                                                           ((7U 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                             ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1930)
                                                             : 
                                                            ((0U 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                              ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1930)
                                                              : 
                                                             ((1U 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                               ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1930)
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                                ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1930)
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1930)
                                                                 : 
                                                                ((5U 
                                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                                  ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1930)
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
                                                                    : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1930))
                                                                   : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1930))))))))
                                                            : 0U)))))));
        vlSelf->GameBoySoC__DOT__cpu_io_memWrite = 
            ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
             & ((1U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                & ((2U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                   & ((3U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                      & ((5U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                         & ((4U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                            & ((7U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1934)
                                : ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                    ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1934)
                                    : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                        ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1934)
                                        : ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                            ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1934)
                                            : ((3U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1934)
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                    ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1934)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((0xcbU 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? 
                                                     (3U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                      : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1934))
                                                     : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1934))))))))))))));
    }
    if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        GameBoySoC__DOT__cpu__DOT__u_alu__DOT___GEN_53 = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1935 = 0U;
    } else if ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        GameBoySoC__DOT__cpu__DOT__u_alu__DOT___GEN_53 = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1935 = 0U;
    } else if ((1U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        GameBoySoC__DOT__cpu__DOT__u_alu__DOT___GEN_53 = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1935 = 0U;
    } else if ((3U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        GameBoySoC__DOT__cpu__DOT__u_alu__DOT___GEN_53 = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1935 = 0U;
    } else if ((0xbU == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        GameBoySoC__DOT__cpu__DOT__u_alu__DOT___GEN_53 = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1935 = 0U;
    } else if ((9U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        GameBoySoC__DOT__cpu__DOT__u_alu__DOT___GEN_53 = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_1935 = 0U;
    } else {
        if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 0U;
        } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 0U;
        } else if ((0x34U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_141;
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_140));
        } else if ((0x35U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_141;
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_140));
        } else if ((0xe9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if (vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_98));
        } else if ((0x36U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_236;
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                           : 0U));
        } else if ((0x1aU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0x2aU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_608;
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0x3aU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_608;
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0x22U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else if ((0x32U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else if ((0xf2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_608;
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xe2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else if ((0xe0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else if ((0xf0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_608;
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0x86U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xaeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hbdd8dcae__0) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xbeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if (vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xc6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xceU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xd6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xe6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xeeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xf6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xfeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0x18U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0x10U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xc5U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_608;
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                           ? ((IData)(GameBoySoC__DOT__cpu__DOT__u_regPair) 
                              >> 8U) : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                         ? (IData)(GameBoySoC__DOT__cpu__DOT__u_regPair)
                                         : 0U)));
        } else if ((0xc1U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_608;
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xcdU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_141;
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_454));
        } else if ((0xc9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_608;
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xd9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_608;
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xc7U == (0xc7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_608;
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_454));
        } else if ((0xfbU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xf3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0x20U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xc2U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xc4U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_541;
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_condition)
                           ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_454)
                           : 0U));
        } else if ((0xc0U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_541;
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xc3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0x37U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0x3fU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0x2fU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0x27U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0x17U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0x1fU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xfaU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_236;
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        } else if ((0xeaU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_236;
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                           : 0U));
        } else if ((8U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_608;
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                           : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                               ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                  >> 8U) : 0U)));
        } else {
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            GameBoySoC__DOT__cpu__DOT___GEN_1935 = 
                (0xffU & 0U);
        }
        GameBoySoC__DOT__cpu__DOT__u_alu__DOT___GEN_53 
            = (0xfU & (IData)(__VdfgTmp_h5eed7589__0));
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = __VdfgTmp_h5eed7589__0;
    }
    vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data 
        = (0xffU & ((7U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                     ? ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                         ? ((~ ((IData)(1U) << (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__irqIndexLatched))) 
                            & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF))
                         : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                             ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC) 
                                >> 8U) : ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)
                                           : 0U))) : 
                    ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                      ? 0U : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                               ? 0U : ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                        ? 0U : ((3U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                 ? 0U
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                  ? 0U
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                   ? 
                                                  ((7U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                    ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1935)
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                     ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1935)
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                      ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1935)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                       ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1935)
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                        ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1935)
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                         ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1935)
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
                                                           : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1935))
                                                          : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1935))))))))
                                                   : 0U))))))));
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb01f930e__0 
        = ((IData)(GameBoySoC__DOT__cpu__DOT__u___05Fdone) 
           & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending));
    GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT____VdfgTmp_h48ab0a71__0 
        = ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_popEnable) 
           & (0U < (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count)));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_256 
        = ((0U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_0)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_257 
        = ((1U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((1U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((1U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((1U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((1U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((1U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((1U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((1U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_1)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_258 
        = ((2U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((2U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((2U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((2U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((2U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((2U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((2U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((2U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_2)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_259 
        = ((3U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((3U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((3U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((3U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((3U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((3U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((3U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((3U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_3)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_260 
        = ((4U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((4U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((4U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((4U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((4U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((4U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((4U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((4U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_4)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_261 
        = ((5U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((5U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((5U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((5U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((5U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((5U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((5U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((5U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_5)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_262 
        = ((6U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((6U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((6U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((6U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((6U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((6U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((6U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((6U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_6)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_263 
        = ((7U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((7U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((7U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((7U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((7U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((7U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((7U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((7U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_7)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_264 
        = ((8U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((8U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((8U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((8U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((8U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((8U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((8U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((8U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_8)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_265 
        = ((9U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((9U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((9U == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((9U == (0x1fU & ((IData)(4U) 
                                        + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((9U == (0x1fU & ((IData)(3U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((9U == (0x1fU & ((IData)(2U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((9U == (0x1fU & 
                                           ((IData)(1U) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((9U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_9)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_266 
        = ((0xaU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0xaU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0xaU == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0xaU == (0x1fU & ((IData)(4U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0xaU == (0x1fU & ((IData)(3U) 
                                              + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0xaU == (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0xaU == (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0xaU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_10)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_267 
        = ((0xbU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0xbU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0xbU == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0xbU == (0x1fU & ((IData)(4U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0xbU == (0x1fU & ((IData)(3U) 
                                              + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0xbU == (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0xbU == (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0xbU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_11)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_268 
        = ((0xcU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0xcU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0xcU == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0xcU == (0x1fU & ((IData)(4U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0xcU == (0x1fU & ((IData)(3U) 
                                              + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0xcU == (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0xcU == (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0xcU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_12)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_269 
        = ((0xdU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0xdU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0xdU == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0xdU == (0x1fU & ((IData)(4U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0xdU == (0x1fU & ((IData)(3U) 
                                              + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0xdU == (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0xdU == (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0xdU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_13)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_270 
        = ((0xeU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0xeU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0xeU == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0xeU == (0x1fU & ((IData)(4U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0xeU == (0x1fU & ((IData)(3U) 
                                              + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0xeU == (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0xeU == (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0xeU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_14)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_271 
        = ((0xfU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0xfU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0xfU == (0x1fU & ((IData)(5U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0xfU == (0x1fU & ((IData)(4U) 
                                          + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0xfU == (0x1fU & ((IData)(3U) 
                                              + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0xfU == (0x1fU & ((IData)(2U) 
                                                  + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0xfU == (0x1fU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0xfU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_15)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_272 
        = ((0x10U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x10U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x10U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x10U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x10U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x10U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x10U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x10U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_16)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_273 
        = ((0x11U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x11U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x11U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x11U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x11U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x11U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x11U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x11U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_17)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_274 
        = ((0x12U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x12U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x12U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x12U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x12U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x12U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x12U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x12U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_18)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_275 
        = ((0x13U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x13U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x13U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x13U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x13U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x13U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x13U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x13U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_19)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_276 
        = ((0x14U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x14U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x14U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x14U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x14U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x14U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x14U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x14U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_20)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_277 
        = ((0x15U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x15U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x15U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x15U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x15U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x15U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x15U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x15U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_21)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_278 
        = ((0x16U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x16U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x16U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x16U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x16U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x16U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x16U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x16U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_22)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_279 
        = ((0x17U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x17U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x17U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x17U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x17U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x17U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x17U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x17U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_23)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_280 
        = ((0x18U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x18U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x18U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x18U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x18U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x18U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x18U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x18U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_24)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_281 
        = ((0x19U == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x19U == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x19U == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x19U == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x19U == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x19U == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x19U == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x19U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_25)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_282 
        = ((0x1aU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x1aU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x1aU == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x1aU == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x1aU == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x1aU == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x1aU == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x1aU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_26)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_283 
        = ((0x1bU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x1bU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x1bU == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x1bU == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x1bU == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x1bU == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x1bU == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x1bU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_27)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_284 
        = ((0x1cU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x1cU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x1cU == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x1cU == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x1cU == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x1cU == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x1cU == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x1cU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_28)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_285 
        = ((0x1dU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x1dU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x1dU == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x1dU == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x1dU == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x1dU == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x1dU == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x1dU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_29)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_286 
        = ((0x1eU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x1eU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x1eU == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x1eU == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x1eU == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x1eU == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x1eU == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x1eU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_30)))))))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_287 
        = ((0x1fU == (0x1fU & ((IData)(7U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7)
            : ((0x1fU == (0x1fU & ((IData)(6U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6)
                : ((0x1fU == (0x1fU & ((IData)(5U) 
                                       + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5)
                    : ((0x1fU == (0x1fU & ((IData)(4U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4)
                        : ((0x1fU == (0x1fU & ((IData)(3U) 
                                               + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                            ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3)
                            : ((0x1fU == (0x1fU & ((IData)(2U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2)
                                : ((0x1fU == (0x1fU 
                                              & ((IData)(1U) 
                                                 + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))))
                                    ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1)
                                    : ((0x1fU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail))
                                        ? (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0)
                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_31)))))))));
    GameBoySoC__DOT__memory__DOT___T_44 = ((0xc000U 
                                            <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                           & (0xd000U 
                                              > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)));
    GameBoySoC__DOT__memory__DOT___T_52 = ((4U <= (0xffffU 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr) 
                                                      - (IData)(0xff00U)))) 
                                           & (7U >= 
                                              (0xffffU 
                                               & ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr) 
                                                  - (IData)(0xff00U)))));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_544 
        = (0x1fU & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head) 
                    + (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT____VdfgTmp_h48ab0a71__0)));
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_545 
        = (0x3fU & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count) 
                    - (IData)(GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT____VdfgTmp_h48ab0a71__0)));
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_534 
        = ((0x6000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
            : ((0x8000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                : ((0xa000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                    : ((0xc000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                        : ((0xe000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                            : ((0xfe00U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                                : ((0xfea0U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                                    : ((0xff00U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                                        : ((0xff80U 
                                            > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                                            : ((0xffffU 
                                                > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                                                : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data)))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_write 
        = ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
           & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
              & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                 & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                    & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                       & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                          & ((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                             & ((0xe000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                & ((0xfe00U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                   & ((0xfea0U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                      & ((0xff00U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                         & ((~ ((IData)(GameBoySoC__DOT__memory__DOT___T_52) 
                                                | (0x50U 
                                                   == 
                                                   (0xffffU 
                                                    & ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr) 
                                                       - (IData)(0xff00U)))))) 
                                            & (0xff80U 
                                               > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))))))))))))));
    GameBoySoC__DOT__memory__DOT___GEN_198 = ((0xe000U 
                                               <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                              & ((0xfe00U 
                                                  <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                                 & ((0xfea0U 
                                                     <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                                    & ((0xff00U 
                                                        <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                                       & ((0xff80U 
                                                           > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                                          & (IData)(GameBoySoC__DOT__memory__DOT___T_52))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_write 
        = ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
           & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
              & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                 & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                    & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                       & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                          & ((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                             & (IData)(GameBoySoC__DOT__memory__DOT___GEN_198))))))));
    GameBoySoC__DOT__memory__DOT___GEN_236 = ((0x8000U 
                                               <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                              & ((~ (IData)(GameBoySoC__DOT__memory__DOT___T_44)) 
                                                 & (IData)(GameBoySoC__DOT__memory__DOT___GEN_198)));
    if (vlSelf->GameBoySoC__DOT__cpu_io_memWrite) {
        if ((0x2000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_wdata = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0x4000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_wdata = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0x6000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_wdata = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0x8000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_wdata = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0xa000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_wdata = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0xc000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_wdata = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0xe000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_wdata = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0xfe00U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_wdata = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0xfea0U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_wdata = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0xff00U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_wdata = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0xff80U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            if (GameBoySoC__DOT__memory__DOT___T_52) {
                vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_wdata 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
            } else {
                vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_wdata = 0U;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData 
                    = ((0x50U == (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr) 
                                             - (IData)(0xff00U))))
                        ? 0U : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data));
            }
        } else {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_wdata = 0U;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        }
    } else {
        vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_wdata = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
    }
    GameBoySoC__DOT__memory__DOT___GEN_235 = ((0x8000U 
                                               > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                               ? 0U
                                               : ((IData)(GameBoySoC__DOT__memory__DOT___T_44)
                                                   ? 0U
                                                   : 
                                                  ((0xe000U 
                                                    > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                    ? 0U
                                                    : 
                                                   ((0xfe00U 
                                                     > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                     ? 0U
                                                     : 
                                                    ((0xfea0U 
                                                      > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                      ? 0U
                                                      : 
                                                     ((0xff00U 
                                                       > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                       ? 0U
                                                       : 
                                                      ((0xff80U 
                                                        > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                        ? 
                                                       (0xffffU 
                                                        & ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr) 
                                                           - (IData)(0xff00U)))
                                                        : 0U)))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr 
        = (0xffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite)
                     ? ((0x2000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                         ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_235)
                         : ((0x4000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                             ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_235)
                             : ((0x6000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                 ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_235)
                                 : ((0x8000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                     ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_235)
                                     : ((0xa000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                         ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_235)
                                         : ((0xc000U 
                                             > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                             ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_235)
                                             : ((0xe000U 
                                                 > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                 ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_235)
                                                 : 
                                                ((0xfe00U 
                                                  > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                  ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_235)
                                                  : 
                                                 ((0xfea0U 
                                                   > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                   ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_235)
                                                   : 
                                                  ((0xff00U 
                                                    > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                    ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_235)
                                                    : 
                                                   ((0xff80U 
                                                     > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                     ? 
                                                    ((IData)(GameBoySoC__DOT__memory__DOT___T_52)
                                                      ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_235)
                                                      : 
                                                     ((0x50U 
                                                       == 
                                                       (0xffffU 
                                                        & ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr) 
                                                           - (IData)(0xff00U))))
                                                       ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_235)
                                                       : 
                                                      ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr) 
                                                       - (IData)(0xff00U))))
                                                     : (IData)(GameBoySoC__DOT__memory__DOT___GEN_235))))))))))))
                     : (IData)(GameBoySoC__DOT__memory__DOT___GEN_235)));
    GameBoySoC__DOT__memory__DOT___GEN_237 = ((0x8000U 
                                               > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                               ? 0U
                                               : ((IData)(GameBoySoC__DOT__memory__DOT___T_44)
                                                   ? 0U
                                                   : 
                                                  ((0xe000U 
                                                    > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                    ? 0U
                                                    : 
                                                   ((0xfe00U 
                                                     > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                     ? 0U
                                                     : 
                                                    ((0xfea0U 
                                                      > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                      ? 0U
                                                      : 
                                                     ((0xff00U 
                                                       > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                       ? 0U
                                                       : 
                                                      ((0xff80U 
                                                        > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                        ? 
                                                       ((IData)(GameBoySoC__DOT__memory__DOT___T_52)
                                                         ? 
                                                        (0xffffU 
                                                         & (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr) 
                                                             - (IData)(0xff00U)) 
                                                            - (IData)(4U)))
                                                         : 0U)
                                                        : 0U)))))));
    if (vlSelf->GameBoySoC__DOT__cpu_io_memWrite) {
        if ((0x2000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr 
                = (3U & (IData)(GameBoySoC__DOT__memory__DOT___GEN_237));
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_enable 
                = GameBoySoC__DOT__memory__DOT___GEN_236;
        } else if ((0x4000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr 
                = (3U & (IData)(GameBoySoC__DOT__memory__DOT___GEN_237));
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_enable 
                = GameBoySoC__DOT__memory__DOT___GEN_236;
        } else if ((0x6000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr 
                = (3U & (IData)(GameBoySoC__DOT__memory__DOT___GEN_237));
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_enable 
                = GameBoySoC__DOT__memory__DOT___GEN_236;
        } else if ((0x8000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr 
                = (3U & (IData)(GameBoySoC__DOT__memory__DOT___GEN_237));
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_enable 
                = GameBoySoC__DOT__memory__DOT___GEN_236;
        } else if ((0xa000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr 
                = (3U & (IData)(GameBoySoC__DOT__memory__DOT___GEN_237));
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_enable 
                = GameBoySoC__DOT__memory__DOT___GEN_236;
        } else if ((0xc000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr 
                = (3U & (IData)(GameBoySoC__DOT__memory__DOT___GEN_237));
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_enable 
                = GameBoySoC__DOT__memory__DOT___GEN_236;
        } else if ((0xe000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr 
                = (3U & (IData)(GameBoySoC__DOT__memory__DOT___GEN_237));
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_enable 
                = GameBoySoC__DOT__memory__DOT___GEN_236;
        } else if ((0xfe00U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr 
                = (3U & (IData)(GameBoySoC__DOT__memory__DOT___GEN_237));
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_enable 
                = GameBoySoC__DOT__memory__DOT___GEN_236;
        } else if ((0xfea0U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr 
                = (3U & (IData)(GameBoySoC__DOT__memory__DOT___GEN_237));
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_enable 
                = GameBoySoC__DOT__memory__DOT___GEN_236;
        } else if ((0xff00U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr 
                = (3U & (IData)(GameBoySoC__DOT__memory__DOT___GEN_237));
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_enable 
                = GameBoySoC__DOT__memory__DOT___GEN_236;
        } else if ((0xff80U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr 
                = (3U & ((IData)(GameBoySoC__DOT__memory__DOT___T_52)
                          ? (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr) 
                              - (IData)(0xff00U)) - (IData)(4U))
                          : (IData)(GameBoySoC__DOT__memory__DOT___GEN_237)));
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_enable 
                = ((IData)(GameBoySoC__DOT__memory__DOT___T_52) 
                   | (IData)(GameBoySoC__DOT__memory__DOT___GEN_236));
        } else {
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr 
                = (3U & (IData)(GameBoySoC__DOT__memory__DOT___GEN_237));
            vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_enable 
                = GameBoySoC__DOT__memory__DOT___GEN_236;
        }
    } else {
        vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr 
            = (3U & (IData)(GameBoySoC__DOT__memory__DOT___GEN_237));
        vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_enable 
            = GameBoySoC__DOT__memory__DOT___GEN_236;
    }
    if ((0U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_726 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF;
        GameBoySoC__DOT__memory__DOT__ioRegs_io_readData 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regP1;
    } else if ((1U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_726 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF;
        GameBoySoC__DOT__memory__DOT__ioRegs_io_readData 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSB;
    } else if ((2U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_726 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF;
        GameBoySoC__DOT__memory__DOT__ioRegs_io_readData 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSC;
    } else if ((0xfU == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_726 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
        GameBoySoC__DOT__memory__DOT__ioRegs_io_readData 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF;
    } else {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_726 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF;
        GameBoySoC__DOT__memory__DOT__ioRegs_io_readData 
            = ((0x10U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10)
                : ((0x11U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11)
                    : ((0x12U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12)
                        : ((0x13U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13)
                            : ((0x14U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14)
                                : ((0x16U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21)
                                    : ((0x17U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22)
                                        : ((0x18U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23)
                                            : ((0x19U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24)
                                                : (
                                                   (0x1aU 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30)
                                                    : 
                                                   ((0x1bU 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31)
                                                     : 
                                                    ((0x1cU 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32)
                                                      : 
                                                     ((0x1dU 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33)
                                                       : 
                                                      ((0x1eU 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34)
                                                        : 
                                                       ((0x20U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41)
                                                         : 
                                                        ((0x21U 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42)
                                                          : 
                                                         ((0x22U 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43)
                                                           : 
                                                          ((0x23U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44)
                                                            : 
                                                           ((0x24U 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                             ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50)
                                                             : 
                                                            ((0x25U 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51)
                                                              : 
                                                             ((0x26U 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                               ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52)
                                                               : 
                                                              ((0x40U 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC)
                                                                : 
                                                               ((0x41U 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT)
                                                                 : 
                                                                ((0x42U 
                                                                  == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                                  ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY)
                                                                  : 
                                                                 ((0x43U 
                                                                   == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                                   ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX)
                                                                   : 
                                                                  ((0x44U 
                                                                    == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg)
                                                                    : 
                                                                   ((0x45U 
                                                                     == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC)
                                                                     : 
                                                                    ((0x46U 
                                                                      == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA)
                                                                      : 
                                                                     ((0x47U 
                                                                       == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                                       ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP)
                                                                       : 
                                                                      ((0x48U 
                                                                        == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0)
                                                                        : 
                                                                       ((0x49U 
                                                                         == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                                         ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1)
                                                                         : 
                                                                        ((0x4aU 
                                                                          == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                                          ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY)
                                                                          : 
                                                                         ((0x4bU 
                                                                           == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                                           ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX)
                                                                           : 
                                                                          ((0x50U 
                                                                            == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT)
                                                                            : 0xffU))))))))))))))))))))))))))))))))));
    }
    vlSelf->GameBoySoC__DOT__cpu_io_memReadData = (0xffU 
                                                   & ((0x8000U 
                                                       > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                       ? 
                                                      vlSelf->GameBoySoC__DOT__memory__DOT__rom
                                                      [vlSelf->GameBoySoC__DOT__cpu_io_memAddr]
                                                       : 
                                                      ((IData)(GameBoySoC__DOT__memory__DOT___T_44)
                                                        ? 
                                                       vlSelf->GameBoySoC__DOT__memory__DOT__rom
                                                       [
                                                       (0xffffU 
                                                        & ((IData)(0x4000U) 
                                                           + 
                                                           ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr) 
                                                            - (IData)(0xc000U))))]
                                                        : 
                                                       ((0xe000U 
                                                         > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                         ? 
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                                        [
                                                        (0x1fffU 
                                                         & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))]
                                                         : 
                                                        ((0xfe00U 
                                                          > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                          ? 
                                                         vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                                         [
                                                         (0x1fffU 
                                                          & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))]
                                                          : 
                                                         ((0xfea0U 
                                                           > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                           ? 
                                                          ((0x9fU 
                                                            >= 
                                                            (0xffU 
                                                             & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)))
                                                            ? 
                                                           vlSelf->GameBoySoC__DOT__memory__DOT__oam
                                                           [
                                                           (0xffU 
                                                            & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))]
                                                            : 0U)
                                                           : 
                                                          ((0xff00U 
                                                            > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                            ? 0xffU
                                                            : 
                                                           ((0xff80U 
                                                             > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                             ? 
                                                            ((IData)(GameBoySoC__DOT__memory__DOT___T_52)
                                                              ? 
                                                             ((3U 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr))
                                                               ? 
                                                              (0xf8U 
                                                               | (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tac))
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr))
                                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tma)
                                                                : 
                                                               ((1U 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr))
                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tima)
                                                                 : 
                                                                ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__div) 
                                                                 >> 8U))))
                                                              : 
                                                             ((0x44U 
                                                               == 
                                                               (0xffffU 
                                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr) 
                                                                   - (IData)(0xff00U))))
                                                               ? 0x90U
                                                               : 
                                                              ((0x50U 
                                                                == 
                                                                (0xffffU 
                                                                 & ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr) 
                                                                    - (IData)(0xff00U))))
                                                                ? 1U
                                                                : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs_io_readData))))
                                                             : 
                                                            ((0xffffU 
                                                              > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                              ? 
                                                             ((0x7eU 
                                                               >= 
                                                               (0x7fU 
                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)))
                                                               ? 
                                                              vlSelf->GameBoySoC__DOT__memory__DOT__hram
                                                              [
                                                              (0x7fU 
                                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))]
                                                               : 0U)
                                                              : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE))))))))));
    GameBoySoC__DOT__cpu__DOT___GEN_2115 = ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                             ? ((6U 
                                                 == 
                                                 (7U 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                                 ? 
                                                ((3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)
                                                  : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8))
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                  ? 
                                                 ((7U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                   : 
                                                  ((5U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
                                                    : 
                                                   ((4U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled)
                                                     : 
                                                    ((3U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
                                                      : 
                                                     ((2U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled)
                                                       : 
                                                      ((1U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)
                                                        : 
                                                       ((0U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled)
                                                         : 0U)))))))
                                                  : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8)))
                                             : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8));
    if ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2452 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__irqVectorLatched;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2453 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__irqIndexLatched;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2454 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1942;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2448 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2423 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2420 
            = ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                ? 3U : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state));
    } else if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2452 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__irqVectorLatched;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2453 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__irqIndexLatched;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2454 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1942;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2448 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2423 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2065;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2420 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2063;
    } else if ((5U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2452 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__irqVectorLatched;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2453 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__irqIndexLatched;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2454 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1942;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2448 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2423 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2065;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2420 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2063;
    } else if ((4U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2452 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__irqVectorLatched;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2453 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__irqIndexLatched;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2454 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1942;
        if ((0xcbU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2448 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2423 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2420 
                = ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                    ? ((IData)(GameBoySoC__DOT__cpu__DOT__cbOut_done)
                        ? 0U : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state));
        } else if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2448 
                = GameBoySoC__DOT__cpu__DOT__u___05FSP;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2423 
                = GameBoySoC__DOT__cpu__DOT__u___05FSP;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2420 
                = ((IData)(GameBoySoC__DOT__cpu__DOT__u___05Fdone)
                    ? 0U : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state));
        } else {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2448 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2423 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2420 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
        }
    } else {
        if ((6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
            if ((0U != (IData)(GameBoySoC__DOT__cpu__DOT__intr__DOT__active))) {
                if (vlSelf->GameBoySoC__DOT__cpu__DOT__IME) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2452 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_irq_vector;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2453 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_irq_index;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2420 = 7U;
                } else {
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2452 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__irqVectorLatched;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2453 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__irqIndexLatched;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2420 = 0U;
                }
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2454 = 0U;
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2452 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__irqVectorLatched;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2453 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__irqIndexLatched;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2454 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2420 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
            }
        } else {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2452 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__irqVectorLatched;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2453 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__irqIndexLatched;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2454 
                = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1942;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2420 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
        }
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2448 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2423 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
    }
    GameBoySoC__DOT__cpu__DOT___GEN_134 = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                            ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_113)
                                            : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_2116));
    if ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2421 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2450 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2449 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__IME;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2432 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__IR2;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2418 
            = ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                ? (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)
                : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2447 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8;
    } else if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2421 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1948;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2450 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2449 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__IME;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2432 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__IR2;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2418 
            = ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                ? (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData) 
                    << 8U) | (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16)))
                : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2447 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8;
    } else {
        if ((5U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2421 
                = GameBoySoC__DOT__cpu__DOT___GEN_113;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2450 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2449 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__IME;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2432 
                = ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)
                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2));
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2447 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8;
        } else {
            if ((4U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                if ((0xcbU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
                    if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2421 
                            = ((IData)(GameBoySoC__DOT__cpu__DOT__cbOut_done)
                                ? 0U : ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                         ? ((6U == 
                                             (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                             ? ((3U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                 ? 3U
                                                 : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_2116))
                                             : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_2116))
                                         : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_2116)));
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2447 
                            = ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                ? ((6U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                    ? (IData)(GameBoySoC__DOT__cpu__DOT__cbOut_result)
                                    : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_2115))
                                : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_2115));
                    } else {
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2421 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2447 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8;
                    }
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2450 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2449 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__IME;
                } else {
                    if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2421 
                            = ((IData)(GameBoySoC__DOT__cpu__DOT__u___05Fdone)
                                ? 0U : ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                         : ((0x76U 
                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                             : ((1U 
                                                 == 
                                                 (0xcfU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                 : 
                                                ((3U 
                                                  == 
                                                  (0xcfU 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                  : 
                                                 ((0xbU 
                                                   == 
                                                   (0xcfU 
                                                    & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                   : 
                                                  ((9U 
                                                    == 
                                                    (0xcfU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                    : 
                                                   ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                     : 
                                                    ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_134)
                                                       : 
                                                      ((0x35U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                        ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_134)
                                                        : 
                                                       ((0xe9U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                         : 
                                                        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84)
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                          : 
                                                         ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                           : 
                                                          ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
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
                                                               ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_607)
                                                               : 
                                                              ((0x3aU 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_607)
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
                                                                   ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_607)
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
                                                                      ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_607)
                                                                      : 
                                                                     ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                       : 
                                                                      ((0x86U 
                                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                        : 
                                                                       ((0xaeU 
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
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_607)
                                                                                 : 
                                                                                ((0xc1U 
                                                                                == 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_607)
                                                                                 : 
                                                                                ((0xcdU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_134)
                                                                                 : 
                                                                                ((0xc9U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_607)
                                                                                 : 
                                                                                ((0xd9U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_607)
                                                                                 : 
                                                                                ((0xc7U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_607)
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
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_539)
                                                                                 : 
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_539)
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
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_607)
                                                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2450 
                            = ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb01f930e__0)) 
                               & ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                   : ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                       : ((1U == (0xcfU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                           : ((3U == 
                                               (0xcfU 
                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                               : ((0xbU 
                                                   == 
                                                   (0xcfU 
                                                    & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                   : 
                                                  ((9U 
                                                    == 
                                                    (0xcfU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                    : 
                                                   ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                     : 
                                                    ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                       : 
                                                      ((0x35U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                        : 
                                                       ((0xe9U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                         : 
                                                        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84)
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                          : 
                                                         ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                           : 
                                                          ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                            : 
                                                           ((0x36U 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                             : 
                                                            ((0x1aU 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                              : 
                                                             ((0x2aU 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                               : 
                                                              ((0x3aU 
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
                                                                              : 
                                                                             ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)
                                                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)
                                                                               : 
                                                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)
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
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending)))))))))))))))))))))))))))))))))))))))))))))))))))))));
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2449 
                            = ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb01f930e__0) 
                               | ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                   : ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                       : ((1U == (0xcfU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                           : ((3U == 
                                               (0xcfU 
                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                               : ((0xbU 
                                                   == 
                                                   (0xcfU 
                                                    & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                   : 
                                                  ((9U 
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
                                                        : 
                                                       ((0xe9U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                         : 
                                                        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84)
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                          : 
                                                         ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                           : 
                                                          ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                            : 
                                                           ((0x36U 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                             : 
                                                            ((0x1aU 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                              : 
                                                             ((0x2aU 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                               : 
                                                              ((0x3aU 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                                : 
                                                               ((0x22U 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                                 : 
                                                                ((0x32U 
                                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                                  : 
                                                                 ((0xf2U 
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
                                                                                 : 
                                                                                ((0xc6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)
                                                                                 : 
                                                                                ((0xceU 
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
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME)))))))))))))))))))))))))))))))))))))))))))))))))))))));
                    } else {
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2421 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2450 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending;
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2449 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__IME;
                    }
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2447 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8;
                }
            } else {
                if ((6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2421 
                        = ((0U != (IData)(GameBoySoC__DOT__cpu__DOT__intr__DOT__active))
                            ? 0U : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle));
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2449 
                        = ((~ (IData)((0U != (IData)(GameBoySoC__DOT__cpu__DOT__intr__DOT__active)))) 
                           & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IME));
                } else {
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2421 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2449 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__IME;
                }
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2450 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2447 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8;
            }
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2432 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__IR2;
        }
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2418 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__imm16;
    }
    GameBoySoC__DOT__cpu__DOT___GEN_475 = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                            : ((1U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                ? (
                                                   (3U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                    ? 
                                                   (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData) 
                                                     << 8U) 
                                                    | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8))
                                                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled))
                                                : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)));
    GameBoySoC__DOT__cpu__DOT__u___05FPC = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                             : ((0x76U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                 : 
                                                ((1U 
                                                  == 
                                                  (0xcfU 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                  : 
                                                 ((3U 
                                                   == 
                                                   (0xcfU 
                                                    & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                   : 
                                                  ((0xbU 
                                                    == 
                                                    (0xcfU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                    : 
                                                   ((9U 
                                                     == 
                                                     (0xcfU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                     : 
                                                    ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                      : 
                                                     ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                       : 
                                                      ((0x34U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                        : 
                                                       ((0x35U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                         : 
                                                        ((0xe9U 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL)
                                                          : 
                                                         ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84)
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                           : 
                                                          ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                            : 
                                                           ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
                                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                             : 
                                                            ((0x36U 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                              : 
                                                             ((0x1aU 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                               : 
                                                              ((0x2aU 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                : 
                                                               ((0x3aU 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                 : 
                                                                ((0x22U 
                                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                  : 
                                                                 ((0x32U 
                                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                   : 
                                                                  ((0xf2U 
                                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                    : 
                                                                   ((0xe2U 
                                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                     : 
                                                                    ((0xe0U 
                                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                      : 
                                                                     ((0xf0U 
                                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                       : 
                                                                      ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                        : 
                                                                       ((0x86U 
                                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                         : 
                                                                        ((0xaeU 
                                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                          : 
                                                                         ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hbdd8dcae__0)
                                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                           : 
                                                                          ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)
                                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                            : 
                                                                           ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)
                                                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                             : 
                                                                            ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)
                                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                              : 
                                                                             ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0)
                                                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                               : 
                                                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)
                                                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                : 
                                                                               ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((0xbeU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0)
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((0xc6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((0xceU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((0xd6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((0xe6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((0xeeU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((0xf6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((0xfeU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((0x18U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_PC_T_4)
                                                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled))
                                                                                 : 
                                                                                ((0x10U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((0xc5U 
                                                                                == 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((0xc1U 
                                                                                == 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((0xcdU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16)
                                                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled))))
                                                                                 : 
                                                                                ((0xc9U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_475)
                                                                                 : 
                                                                                ((0xd9U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_475)
                                                                                 : 
                                                                                ((0xc7U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                                 ? 
                                                                                (0x38U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)))
                                                                                 : 
                                                                                ((0xfbU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((0xf3U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((0x20U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? 
                                                                                ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_condition)
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_PC_T_4)
                                                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled))
                                                                                 : 
                                                                                ((0xc2U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? 
                                                                                ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_condition)
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16)
                                                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled))
                                                                                 : 
                                                                                ((0xc4U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? 
                                                                                ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_condition)
                                                                                 ? 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16)
                                                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)))
                                                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled))
                                                                                 : 
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? 
                                                                                ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_condition)
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_475)
                                                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled))
                                                                                 : 
                                                                                ((0xc3U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16)
                                                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    if ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2422 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2419 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2021;
    } else if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2422 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2064;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2419 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2021;
    } else if ((5U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2422 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2064;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2419 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2021;
    } else if ((4U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        if ((0xcbU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2422 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2419 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__PC;
        } else if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2422 
                = GameBoySoC__DOT__cpu__DOT__u___05FPC;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2419 
                = (((IData)(GameBoySoC__DOT__cpu__DOT__u___05FPC) 
                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled))
                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)
                    : (IData)(GameBoySoC__DOT__cpu__DOT__u___05FPC));
        } else {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2422 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2419 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__PC;
        }
    } else {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2422 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2419 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__PC;
    }
    if ((2U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_650 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_651 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_652 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_653 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_654 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_655 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_656 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_657 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_658 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_659 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_660 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_661 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_662 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_663 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_648 
            = (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
                & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                   & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                      & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                         & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                            & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                               & ((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                  & ((0xe000U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                     & ((0xfe00U <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                        & ((0xfea0U 
                                            <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                           & ((0xff00U 
                                               <= (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                              & ((0xff80U 
                                                  > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr)) 
                                                 & ((~ (IData)(GameBoySoC__DOT__memory__DOT___T_52)) 
                                                    & ((0x50U 
                                                        != 
                                                        (0xffffU 
                                                         & ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr) 
                                                            - (IData)(0xff00U)))) 
                                                       & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data) 
                                                          >> 7U)))))))))))))))
                ? (0x7fU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData))
                : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData));
    } else {
        if ((0xfU == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_650 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_651 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_652 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_653 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_654 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_655 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_656 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_657 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_658 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_659 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_660 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_661 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_662 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_663 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        } else if ((0x10U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_650 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_651 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_652 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_653 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_654 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_655 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_656 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_657 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_658 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_659 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_660 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_661 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_662 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_663 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        } else {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_650 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10;
            if ((0x11U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_651 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_652 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_653 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_654 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_655 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_656 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_657 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_658 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_659 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_660 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_661 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_662 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_663 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
            } else {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_651 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
                if ((0x12U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_652 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_653 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_654 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_655 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_656 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_657 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_658 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_659 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_660 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_661 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_662 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_663 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                } else {
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_652 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
                    if ((0x13U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_653 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_654 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_655 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_656 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_657 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_658 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_659 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_660 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_661 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_662 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_663 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                    } else {
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_653 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
                        if ((0x14U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_654 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_655 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_656 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_657 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_658 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_659 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_660 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_661 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_662 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_663 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                        } else {
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_654 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                            if ((0x16U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_655 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_656 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_657 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_658 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_659 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_660 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_661 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_662 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_663 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                            } else {
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_655 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                                if ((0x17U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_656 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_657 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_658 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_659 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_660 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_661 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_662 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_663 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                } else {
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_656 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                                    if ((0x18U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_657 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_658 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_659 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_660 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_661 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_662 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_663 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                    } else {
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_657 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                                        if ((0x19U 
                                             == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_658 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_659 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_660 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_661 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_662 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_663 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                        } else {
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_658 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                                            if ((0x1aU 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_659 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_660 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_661 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_662 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_663 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                            } else {
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_659 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                                                if (
                                                    (0x1bU 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_660 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_661 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_662 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_663 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                } else {
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_660 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                                                    if (
                                                        (0x1cU 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_661 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_662 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_663 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                    } else {
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_661 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                                                        if (
                                                            (0x1dU 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_662 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_663 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                        } else {
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_662 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                                            if (
                                                                (0x1eU 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_663 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                            } else {
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_663 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                                                if (
                                                                    (0x20U 
                                                                     == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                } else {
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_664 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                                                    if (
                                                                        (0x21U 
                                                                         == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                    } else {
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_665 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                                                        if (
                                                                            (0x22U 
                                                                             == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                        } else {
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_666 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                                            if (
                                                                                (0x23U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                            } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_667 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                                                if (
                                                                                (0x24U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_668 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                                                if (
                                                                                (0x25U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_669 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                                                if (
                                                                                (0x26U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_670 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                                if (
                                                                                (0x40U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_671 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                                if (
                                                                                (0x41U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_672 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                                if (
                                                                                (0x42U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_673 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                                if (
                                                                                (0x43U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_674 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                if (
                                                                                (0x44U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else if (
                                                                                (0x45U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_675 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                if (
                                                                                (0x46U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_676 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                if (
                                                                                (0x47U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_677 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                if (
                                                                                (0x48U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_678 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                if (
                                                                                (0x49U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_679 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                if (
                                                                                (0x4aU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_680 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                if (
                                                                                (0x4bU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_681 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_682 
                                                                                = 
                                                                                ((0x50U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                                                                 : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT));
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
            }
        }
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_648 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSC;
    }
    if ((2U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT___GEN_6 
            = vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_wdata;
        vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT___GEN_7 
            = (7U & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tac));
    } else {
        vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT___GEN_6 
            = vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tma;
        vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT___GEN_7 
            = (7U & ((3U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer_io_addr))
                      ? ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite)
                          ? ((0x2000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                              ? 0U : ((0x4000U > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                       ? 0U : ((0x6000U 
                                                > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                ? 0U
                                                : (
                                                   (0x8000U 
                                                    > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                    ? 0U
                                                    : 
                                                   ((0xa000U 
                                                     > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                     ? 0U
                                                     : 
                                                    ((0xc000U 
                                                      > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                      ? 0U
                                                      : 
                                                     ((0xe000U 
                                                       > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                       ? 0U
                                                       : 
                                                      ((0xfe00U 
                                                        > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                        ? 0U
                                                        : 
                                                       ((0xfea0U 
                                                         > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                         ? 0U
                                                         : 
                                                        ((0xff00U 
                                                          > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                          ? 0U
                                                          : 
                                                         ((0xff80U 
                                                           > (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memAddr))
                                                           ? 
                                                          ((IData)(GameBoySoC__DOT__memory__DOT___T_52)
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data)
                                                            : 0U)
                                                           : 0U)))))))))))
                          : 0U) : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__timer__DOT__tac)));
    }
    GameBoySoC__DOT__cpu__DOT__needsImm8 = ((6U == 
                                             (0xc7U 
                                              & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData))) 
                                            | ((0x18U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                               | ((0x20U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                  | ((0x28U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                     | ((0x30U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                        | ((0x38U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                           | ((0xc6U 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                              | ((0xceU 
                                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                 | ((0xd6U 
                                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                    | ((0xdeU 
                                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                       | ((0xe0U 
                                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                          | ((0xe6U 
                                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                             | ((0xe8U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                                | ((0xeeU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                                | ((0xf0U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                                | ((0xf6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                                | ((0xf8U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                                | (0xfeU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)))))))))))))))))));
    GameBoySoC__DOT__cpu__DOT__needsImm16 = ((0xc2U 
                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                             | ((0xcaU 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                | ((0xd2U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                   | ((0xdaU 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                      | ((0xc3U 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                         | ((0xc4U 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                            | ((0xccU 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                               | ((0xd4U 
                                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                  | ((0xdcU 
                                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                     | ((0xcdU 
                                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                        | ((0xeaU 
                                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                           | ((0xfaU 
                                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                              | ((1U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                                | ((8U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                                | ((0x11U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                                | ((0x21U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                                                | (0x31U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData))))))))))))))))));
    if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2020 
            = vlSelf->GameBoySoC__DOT__cpu_io_memReadData;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2060 
            = vlSelf->GameBoySoC__DOT__cpu_io_memReadData;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_239 
            = vlSelf->GameBoySoC__DOT__cpu_io_memReadData;
        GameBoySoC__DOT__cpu__DOT___GEN_112 = vlSelf->GameBoySoC__DOT__cpu_io_memReadData;
        GameBoySoC__DOT__cpu__DOT___GEN_330 = vlSelf->GameBoySoC__DOT__cpu_io_memReadData;
    } else {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2020 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__IR;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2060 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__imm8;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_239 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_112 = vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8;
        GameBoySoC__DOT__cpu__DOT___GEN_330 = 0U;
    }
    __VdfgTmp_hefb31099__0 = ((0x86U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                               ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_330)
                               : ((0xaeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                   ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_330)
                                   : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hbdd8dcae__0)
                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_98)
                                       : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)
                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_98)
                                           : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)
                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_98)
                                               : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_98)
                                                   : 
                                                  ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0)
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_98)
                                                    : 
                                                   ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_98)
                                                     : 
                                                    ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_98)
                                                      : 
                                                     ((0xbeU 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_330)
                                                       : 
                                                      ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0)
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_98)
                                                        : 
                                                       ((0xc6U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                         : 
                                                        ((0xceU 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                          : 
                                                         ((0xd6U 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                           : 
                                                          ((0xe6U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                            : 
                                                           ((0xeeU 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                             : 
                                                            ((0xf6U 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                              : 
                                                             ((0xfeU 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                               : 0U))))))))))))))))));
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_14 
        = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
            ? 0U : ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                     ? 0U : ((1U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                              ? 0U : ((3U == (0xcfU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                       ? 0U : ((0xbU 
                                                == 
                                                (0xcfU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                ? 0U
                                                : (
                                                   (9U 
                                                    == 
                                                    (0xcfU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                    ? 0U
                                                    : 
                                                   ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
                                                      ? 0U
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? 0U
                                                       : 
                                                      ((0x35U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                        ? 0U
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
                                                                   : 
                                                                  ((0xe2U 
                                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                    ? 0U
                                                                    : 
                                                                   ((0xe0U 
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
                                                                      (0xfU 
                                                                       & (IData)(__VdfgTmp_hefb31099__0)))))))))))))))))))))))))));
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_15 
        = ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT___GEN_53) 
           < (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_14));
    GameBoySoC__DOT__cpu__DOT__u_alu_io_b = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                              ? 0U : 
                                             ((0x76U 
                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                               ? 0U
                                               : ((1U 
                                                   == 
                                                   (0xcfU 
                                                    & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                   ? 0U
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (0xcfU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                    ? 0U
                                                    : 
                                                   ((0xbU 
                                                     == 
                                                     (0xcfU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                     ? 0U
                                                     : 
                                                    ((9U 
                                                      == 
                                                      (0xcfU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                      ? 0U
                                                      : 
                                                     ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                                                       ? 0U
                                                       : 
                                                      ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
                                                        ? 0U
                                                        : 
                                                       ((0x34U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                         ? 0U
                                                         : 
                                                        ((0x35U 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                          ? 0U
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
                                                                     : 
                                                                    ((0xe2U 
                                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                      ? 0U
                                                                      : 
                                                                     ((0xe0U 
                                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                       ? 0U
                                                                       : 
                                                                      ((0xf0U 
                                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                        ? 0U
                                                                        : 
                                                                       ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                                         ? 0U
                                                                         : (IData)(__VdfgTmp_hefb31099__0))))))))))))))))))))))))));
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagC_T_2 
        = ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a) 
           < (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_b));
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_3 
        = (0xffU & ((0xfU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a)) 
                    + (0xfU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_b))));
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r = ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a) 
                                                & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_b));
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_1 = ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a) 
                                                  | (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_b));
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_2 = ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a) 
                                                  ^ (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_b));
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diff9 = 
        (0x1ffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a) 
                   - (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_b)));
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sum9 = (0x1ffU 
                                                   & ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a) 
                                                      + (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_b)));
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT____VdfgTmp_h9e8ac2f3__0 
        = (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diff9) 
                    - (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn)));
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sumc9 = 
        (0x1ffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sum9) 
                   + (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn)));
    if ((0U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_flagH = 
            (0xfU < (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_3));
        GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ = 
            (0U == (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sum9)));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sum9));
    } else if ((1U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_flagH = 
            (0xfU < (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_3) 
                              + (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn))));
        GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ = 
            (0U == (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sumc9)));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sumc9));
    } else if ((2U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_flagH = GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_15;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ = 
            (0U == (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diff9)));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diff9));
    } else if ((3U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_flagH = 
            ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT___GEN_53) 
             < (0x1fU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_14) 
                         + (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn))));
        GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ = 
            (0U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT____VdfgTmp_h9e8ac2f3__0));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT____VdfgTmp_h9e8ac2f3__0));
    } else {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_flagH = 
            ((4U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
             | ((5U != (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                & ((6U != (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                   & ((7U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))
                       ? (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_15)
                       : ((8U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))
                           ? (0xfU == (0xfU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a)))
                           : ((9U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                              & (0U == (0xfU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a)))))))));
        if ((4U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))) {
            GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ 
                = (0U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out 
                = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r));
        } else if ((5U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))) {
            GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ 
                = (0U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_1));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out 
                = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_1));
        } else if ((6U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))) {
            GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ 
                = (0U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_2));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out 
                = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_2));
        } else if ((7U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))) {
            GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ 
                = (0U == (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diff9)));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out 
                = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a));
        } else if ((8U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))) {
            GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ 
                = (0U == (0xffU & ((IData)(1U) + (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a))));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out 
                = (0xffU & ((IData)(1U) + (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a)));
        } else {
            GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ 
                = ((9U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                   & (0U == (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a) 
                                      - (IData)(1U)))));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out 
                = (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a) 
                            - (9U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))));
        }
    }
    if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
        if ((0xcbU == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2024 = 5U;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2026 
                = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2027 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2028 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2029 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2030 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2031 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2032 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2033 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2034 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2035 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
        } else if ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2024 = 6U;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2026 
                = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2027 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2028 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2029 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2030 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2031 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2032 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2033 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2034 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2035 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
        } else if (GameBoySoC__DOT__cpu__DOT__needsImm8) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2024 = 1U;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2026 
                = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2027 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2028 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2029 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2030 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2031 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2032 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2033 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2034 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2035 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
        } else if (GameBoySoC__DOT__cpu__DOT__needsImm16) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2024 = 2U;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2026 
                = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2027 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2028 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2029 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2030 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2031 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2032 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2033 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2034 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2035 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
        } else {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2024 = 4U;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2026 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)));
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2027 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2028 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__A;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2029 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2030 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__B;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2031 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__C;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2032 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__D;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2033 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__E;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2034 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__H;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2035 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__L;
        }
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_331 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out;
    } else {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2024 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2026 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2027 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2028 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2029 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2030 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2031 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2032 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2033 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2034 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2035 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_331 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
    }
    if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_250 
            = GameBoySoC__DOT__cpu__DOT___GEN_112;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_133 
            = GameBoySoC__DOT__cpu__DOT___GEN_112;
    } else {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_250 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_133 
            = ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                ? ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out)
                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8))
                : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8));
    }
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h70885a45__0 
        = (((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_flagH) 
            << 5U) | (0x10U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)));
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_ha5f069ea__0 
        = (((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_flagH) 
            << 5U) | (0x10U & (((0U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))
                                 ? ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sum9) 
                                    >> 8U) : ((1U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))
                                               ? ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sumc9) 
                                                  >> 8U)
                                               : ((2U 
                                                   == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))
                                                   ? (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagC_T_2)
                                                   : 
                                                  ((3U 
                                                    == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))
                                                    ? 
                                                   ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a) 
                                                    < 
                                                    (0xffU 
                                                     & ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_b) 
                                                        + (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn))))
                                                    : 
                                                   ((4U 
                                                     != (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                    & ((5U 
                                                        != (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                       & ((6U 
                                                           != (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                          & ((7U 
                                                              == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                             & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagC_T_2))))))))) 
                               << 4U)));
    GameBoySoC__DOT__cpu__DOT___u_out_F_T_1 = (((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ) 
                                                << 7U) 
                                               | (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h70885a45__0));
    GameBoySoC__DOT__cpu__DOT___u_out_F_T_5 = (((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ) 
                                                << 7U) 
                                               | (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_ha5f069ea__0));
    GameBoySoC__DOT__cpu__DOT___u_out_F_T_14 = (0x40U 
                                                | (((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ) 
                                                    << 7U) 
                                                   | (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_ha5f069ea__0)));
    GameBoySoC__DOT__cpu__DOT___u_out_F_T_8 = (((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ) 
                                                << 7U) 
                                               | (((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_flagN) 
                                                   << 6U) 
                                                  | (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_ha5f069ea__0)));
    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF = (
                                                   (0U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                    : 
                                                   ((0x76U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (0xcfU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                      : 
                                                     ((3U 
                                                       == 
                                                       (0xcfU 
                                                        & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                       : 
                                                      ((0xbU 
                                                        == 
                                                        (0xcfU 
                                                         & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                        : 
                                                       ((9U 
                                                         == 
                                                         (0xcfU 
                                                          & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                         ? 
                                                        ((0x80U 
                                                          & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)) 
                                                         | ((0xfffU 
                                                             < 
                                                             (0xffffU 
                                                              & ((0xfffU 
                                                                  & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL)) 
                                                                 + 
                                                                 (0xfffU 
                                                                  & (IData)(GameBoySoC__DOT__cpu__DOT__u_operand))))) 
                                                            << 5U))
                                                         : 
                                                        ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                                                          ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_1)
                                                          : 
                                                         ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
                                                           ? 
                                                          (((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ) 
                                                            << 7U) 
                                                           | (((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_flagN) 
                                                               << 6U) 
                                                              | (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h70885a45__0)))
                                                           : 
                                                          ((0x34U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                            ? 
                                                           ((0U 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                             : 
                                                            ((1U 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                              ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_1)
                                                              : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)))
                                                            : 
                                                           ((0x35U 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                             ? 
                                                            ((0U 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                              : 
                                                             ((1U 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                               ? 
                                                              (0x40U 
                                                               | (((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ) 
                                                                   << 7U) 
                                                                  | (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h70885a45__0)))
                                                               : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)))
                                                             : 
                                                            ((0xe9U 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                              : 
                                                             ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_84)
                                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                               : 
                                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)
                                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                                : 
                                                               ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                                 : 
                                                                ((0x36U 
                                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                                  : 
                                                                 ((0x1aU 
                                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                                   : 
                                                                  ((0x2aU 
                                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                                    : 
                                                                   ((0x3aU 
                                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                                     : 
                                                                    ((0x22U 
                                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                                      : 
                                                                     ((0x32U 
                                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                                       : 
                                                                      ((0xf2U 
                                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                                        : 
                                                                       ((0xe2U 
                                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                                         : 
                                                                        ((0xe0U 
                                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                                          : 
                                                                         ((0xf0U 
                                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                                           : 
                                                                          ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                                            : 
                                                                           ((0x86U 
                                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                             ? 
                                                                            ((3U 
                                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                                              ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_5)
                                                                              : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))
                                                                             : 
                                                                            ((0xaeU 
                                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                              ? 
                                                                             ((3U 
                                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                                               ? 
                                                                              ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ) 
                                                                               << 7U)
                                                                               : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))
                                                                              : 
                                                                             ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hbdd8dcae__0)
                                                                               ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_5)
                                                                               : 
                                                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)
                                                                                ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_8)
                                                                                : 
                                                                               ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_8)
                                                                                 : 
                                                                                ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_8)
                                                                                 : 
                                                                                ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0)
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_8)
                                                                                 : 
                                                                                ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_8)
                                                                                 : 
                                                                                ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_8)
                                                                                 : 
                                                                                ((0xbeU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_14)
                                                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))
                                                                                 : 
                                                                                ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb470ae14__0)
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_14)
                                                                                 : 
                                                                                ((0xc6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_8)
                                                                                 : 
                                                                                ((0xceU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_5)
                                                                                 : 
                                                                                ((0xd6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_8)
                                                                                 : 
                                                                                ((0xe6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_8)
                                                                                 : 
                                                                                ((0xeeU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_8)
                                                                                 : 
                                                                                ((0xf6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_8)
                                                                                 : 
                                                                                ((0xfeU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_14)
                                                                                 : 
                                                                                ((0x18U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                                                 : 
                                                                                ((0x10U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                                                 : 
                                                                                ((0xc5U 
                                                                                == 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                                                                 : 
                                                                                ((0xc1U 
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
                                                                                 : 
                                                                                ((0x2fU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 
                                                                                (0x60U 
                                                                                | (0x90U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)))
                                                                                 : 
                                                                                ((0x27U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 
                                                                                (((0U 
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
                                                                                ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h54193848__0) 
                                                                                | ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                                                >> 4U))) 
                                                                                << 4U))))
                                                                                 : 
                                                                                ((0x17U 
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
                                                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    if ((0U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                      >> 3U)))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_75 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_77 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_76 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_78 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_79 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_81 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_80 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
    } else {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_75 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled;
        if ((1U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                          >> 3U)))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_77 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_76 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_78 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_79 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_81 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_80 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
        } else {
            if ((2U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                              >> 3U)))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_77 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_78 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_79 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_81 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_80 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_77 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
                if ((3U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                  >> 3U)))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_78 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_79 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_81 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_80 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
                } else {
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_78 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
                    if ((4U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                      >> 3U)))) {
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_79 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out;
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_81 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_80 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
                    } else {
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_79 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
                        if ((5U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                          >> 3U)))) {
                            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_81 
                                = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
                            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_80 
                                = vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out;
                        } else {
                            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_81 
                                = ((7U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                 >> 3U)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out)
                                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_80 
                                = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
                        }
                    }
                }
            }
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_76 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
        }
    }
}
