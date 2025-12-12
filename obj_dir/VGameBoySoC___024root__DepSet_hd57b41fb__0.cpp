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
    CData/*3:0*/ GameBoySoC__DOT__cpu__DOT__u_alu_io_op;
    GameBoySoC__DOT__cpu__DOT__u_alu_io_op = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_alu_io_a;
    GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_alu_io_b;
    GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_alu_io_out;
    GameBoySoC__DOT__cpu__DOT__u_alu_io_out = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ;
    GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__u_alu_io_flagN;
    GameBoySoC__DOT__cpu__DOT__u_alu_io_flagN = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__u_alu_io_flagH;
    GameBoySoC__DOT__cpu__DOT__u_alu_io_flagH = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT__u_HL;
    GameBoySoC__DOT__cpu__DOT__u_HL = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___u_result_T;
    GameBoySoC__DOT__cpu__DOT___u_result_T = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___u_result_T_3;
    GameBoySoC__DOT__cpu__DOT___u_result_T_3 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT__u_result;
    GameBoySoC__DOT__cpu__DOT__u_result = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT__u_result_1;
    GameBoySoC__DOT__cpu__DOT__u_result_1 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___u_operand_T_8;
    GameBoySoC__DOT__cpu__DOT___u_operand_T_8 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT__u_operand;
    GameBoySoC__DOT__cpu__DOT__u_operand = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT__u_result_2;
    GameBoySoC__DOT__cpu__DOT__u_result_2 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_oldVal;
    GameBoySoC__DOT__cpu__DOT__u_oldVal = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_75;
    GameBoySoC__DOT__cpu__DOT___GEN_75 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_76;
    GameBoySoC__DOT__cpu__DOT___GEN_76 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_77;
    GameBoySoC__DOT__cpu__DOT___GEN_77 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_78;
    GameBoySoC__DOT__cpu__DOT___GEN_78 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_79;
    GameBoySoC__DOT__cpu__DOT___GEN_79 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_80;
    GameBoySoC__DOT__cpu__DOT___GEN_80 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_81;
    GameBoySoC__DOT__cpu__DOT___GEN_81 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___u_out_F_T_1;
    GameBoySoC__DOT__cpu__DOT___u_out_F_T_1 = 0;
    CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_113;
    GameBoySoC__DOT__cpu__DOT___GEN_113 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_131;
    GameBoySoC__DOT__cpu__DOT___GEN_131 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_133;
    GameBoySoC__DOT__cpu__DOT___GEN_133 = 0;
    CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_134;
    GameBoySoC__DOT__cpu__DOT___GEN_134 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_136;
    GameBoySoC__DOT__cpu__DOT___GEN_136 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_138;
    GameBoySoC__DOT__cpu__DOT___GEN_138 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_139;
    GameBoySoC__DOT__cpu__DOT___GEN_139 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_140;
    GameBoySoC__DOT__cpu__DOT___GEN_140 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_141;
    GameBoySoC__DOT__cpu__DOT___GEN_141 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___u_T_89;
    GameBoySoC__DOT__cpu__DOT___u_T_89 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___u_T_103;
    GameBoySoC__DOT__cpu__DOT___u_T_103 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_235;
    GameBoySoC__DOT__cpu__DOT___GEN_235 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_247;
    GameBoySoC__DOT__cpu__DOT___GEN_247 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_248;
    GameBoySoC__DOT__cpu__DOT___GEN_248 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_251;
    GameBoySoC__DOT__cpu__DOT___GEN_251 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_268;
    GameBoySoC__DOT__cpu__DOT___GEN_268 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_270;
    GameBoySoC__DOT__cpu__DOT___GEN_270 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_286;
    GameBoySoC__DOT__cpu__DOT___GEN_286 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_300;
    GameBoySoC__DOT__cpu__DOT___GEN_300 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___u_out_F_T_5;
    GameBoySoC__DOT__cpu__DOT___u_out_F_T_5 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___u_out_PC_T_4;
    GameBoySoC__DOT__cpu__DOT___u_out_PC_T_4 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT__u_regPair;
    GameBoySoC__DOT__cpu__DOT__u_regPair = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_356;
    GameBoySoC__DOT__cpu__DOT___GEN_356 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_357;
    GameBoySoC__DOT__cpu__DOT___GEN_357 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_359;
    GameBoySoC__DOT__cpu__DOT___GEN_359 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_396;
    GameBoySoC__DOT__cpu__DOT___GEN_396 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_398;
    GameBoySoC__DOT__cpu__DOT___GEN_398 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_424;
    GameBoySoC__DOT__cpu__DOT___GEN_424 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_429;
    GameBoySoC__DOT__cpu__DOT___GEN_429 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_441;
    GameBoySoC__DOT__cpu__DOT___GEN_441 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_443;
    GameBoySoC__DOT__cpu__DOT___GEN_443 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__u_condition;
    GameBoySoC__DOT__cpu__DOT__u_condition = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_501;
    GameBoySoC__DOT__cpu__DOT___GEN_501 = 0;
    CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_504;
    GameBoySoC__DOT__cpu__DOT___GEN_504 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_506;
    GameBoySoC__DOT__cpu__DOT___GEN_506 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_correction;
    GameBoySoC__DOT__cpu__DOT__u_correction = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_adjusted;
    GameBoySoC__DOT__cpu__DOT__u_adjusted = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_546;
    GameBoySoC__DOT__cpu__DOT___GEN_546 = 0;
    CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_564;
    GameBoySoC__DOT__cpu__DOT___GEN_564 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_565;
    GameBoySoC__DOT__cpu__DOT___GEN_565 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___u_out_H_T_8;
    GameBoySoC__DOT__cpu__DOT___u_out_H_T_8 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___u_out_F_T_29;
    GameBoySoC__DOT__cpu__DOT___u_out_F_T_29 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__u___05Fdone;
    GameBoySoC__DOT__cpu__DOT__u___05Fdone = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1691;
    GameBoySoC__DOT__cpu__DOT___GEN_1691 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1692;
    GameBoySoC__DOT__cpu__DOT___GEN_1692 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1695;
    GameBoySoC__DOT__cpu__DOT___GEN_1695 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1696;
    GameBoySoC__DOT__cpu__DOT___GEN_1696 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT__u___05FPC;
    GameBoySoC__DOT__cpu__DOT__u___05FPC = 0;
    CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1755;
    GameBoySoC__DOT__cpu__DOT___GEN_1755 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1756;
    GameBoySoC__DOT__cpu__DOT___GEN_1756 = 0;
    SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1757;
    GameBoySoC__DOT__cpu__DOT___GEN_1757 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___cbOut_operand_T_13;
    GameBoySoC__DOT__cpu__DOT___cbOut_operand_T_13 = 0;
    CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1808;
    GameBoySoC__DOT__cpu__DOT___GEN_1808 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1916;
    GameBoySoC__DOT__cpu__DOT___GEN_1916 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__cbOut_done;
    GameBoySoC__DOT__cpu__DOT__cbOut_done = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_h54193848__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h54193848__0 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_h504a3c3c__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h504a3c3c__0 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT____VdfgTmp_hca3a8028__0;
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_hca3a8028__0 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sum;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sum = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sumc;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sumc = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diff;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diff = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diffc;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diffc = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_3;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_3 = 0;
    CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagC_T_2;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagC_T_2 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_1;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_1 = 0;
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_2;
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_2 = 0;
    CData/*0:0*/ GameBoySoC__DOT__ppu__DOT____VdfgTmp_h81d728ba__0;
    GameBoySoC__DOT__ppu__DOT____VdfgTmp_h81d728ba__0 = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__bootRom_io_dataOut;
    GameBoySoC__DOT__memory__DOT__bootRom_io_dataOut = 0;
    CData/*0:0*/ GameBoySoC__DOT__memory__DOT__bootRom_io_valid;
    GameBoySoC__DOT__memory__DOT__bootRom_io_valid = 0;
    CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs_io_readData;
    GameBoySoC__DOT__memory__DOT__ioRegs_io_readData = 0;
    SData/*15:0*/ GameBoySoC__DOT__memory__DOT___GEN_163;
    GameBoySoC__DOT__memory__DOT___GEN_163 = 0;
    CData/*7:0*/ __Vdly__GameBoySoC__DOT__cpu__DOT__A;
    __Vdly__GameBoySoC__DOT__cpu__DOT__A = 0;
    CData/*7:0*/ __Vdly__GameBoySoC__DOT__cpu__DOT__F;
    __Vdly__GameBoySoC__DOT__cpu__DOT__F = 0;
    CData/*7:0*/ __Vdly__GameBoySoC__DOT__cpu__DOT__B;
    __Vdly__GameBoySoC__DOT__cpu__DOT__B = 0;
    CData/*7:0*/ __Vdly__GameBoySoC__DOT__cpu__DOT__C;
    __Vdly__GameBoySoC__DOT__cpu__DOT__C = 0;
    CData/*7:0*/ __Vdly__GameBoySoC__DOT__cpu__DOT__D;
    __Vdly__GameBoySoC__DOT__cpu__DOT__D = 0;
    CData/*7:0*/ __Vdly__GameBoySoC__DOT__cpu__DOT__E;
    __Vdly__GameBoySoC__DOT__cpu__DOT__E = 0;
    CData/*7:0*/ __Vdly__GameBoySoC__DOT__cpu__DOT__H;
    __Vdly__GameBoySoC__DOT__cpu__DOT__H = 0;
    CData/*7:0*/ __Vdly__GameBoySoC__DOT__cpu__DOT__L;
    __Vdly__GameBoySoC__DOT__cpu__DOT__L = 0;
    SData/*15:0*/ __Vdly__GameBoySoC__DOT__cpu__DOT__SP;
    __Vdly__GameBoySoC__DOT__cpu__DOT__SP = 0;
    CData/*7:0*/ __Vdly__GameBoySoC__DOT__cpu__DOT__IR;
    __Vdly__GameBoySoC__DOT__cpu__DOT__IR = 0;
    CData/*2:0*/ __Vdly__GameBoySoC__DOT__cpu__DOT__state;
    __Vdly__GameBoySoC__DOT__cpu__DOT__state = 0;
    CData/*2:0*/ __Vdly__GameBoySoC__DOT__cpu__DOT__mcycle;
    __Vdly__GameBoySoC__DOT__cpu__DOT__mcycle = 0;
    SData/*8:0*/ __Vdly__GameBoySoC__DOT__ppu__DOT__lineCycle;
    __Vdly__GameBoySoC__DOT__ppu__DOT__lineCycle = 0;
    CData/*7:0*/ __Vdly__GameBoySoC__DOT__ppu__DOT__ly;
    __Vdly__GameBoySoC__DOT__ppu__DOT__ly = 0;
    CData/*7:0*/ __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__oam__v0;
    __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__oam__v0 = 0;
    CData/*7:0*/ __Vdlyvval__GameBoySoC__DOT__memory__DOT__oam__v0;
    __Vdlyvval__GameBoySoC__DOT__memory__DOT__oam__v0 = 0;
    CData/*0:0*/ __Vdlyvset__GameBoySoC__DOT__memory__DOT__oam__v0;
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__oam__v0 = 0;
    IData/*19:0*/ __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__rom__v0;
    __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__rom__v0 = 0;
    CData/*7:0*/ __Vdlyvval__GameBoySoC__DOT__memory__DOT__rom__v0;
    __Vdlyvval__GameBoySoC__DOT__memory__DOT__rom__v0 = 0;
    CData/*0:0*/ __Vdlyvset__GameBoySoC__DOT__memory__DOT__rom__v0;
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__rom__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__extRam__v0;
    __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__extRam__v0 = 0;
    CData/*7:0*/ __Vdlyvval__GameBoySoC__DOT__memory__DOT__extRam__v0;
    __Vdlyvval__GameBoySoC__DOT__memory__DOT__extRam__v0 = 0;
    CData/*0:0*/ __Vdlyvset__GameBoySoC__DOT__memory__DOT__extRam__v0;
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__extRam__v0 = 0;
    SData/*12:0*/ __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__vram__v0;
    __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__vram__v0 = 0;
    CData/*7:0*/ __Vdlyvval__GameBoySoC__DOT__memory__DOT__vram__v0;
    __Vdlyvval__GameBoySoC__DOT__memory__DOT__vram__v0 = 0;
    CData/*0:0*/ __Vdlyvset__GameBoySoC__DOT__memory__DOT__vram__v0;
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__vram__v0 = 0;
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
    CData/*31:0*/ __Vdeeptemp_h9b781e73__0;
    CData/*31:0*/ __Vdeeptemp_h03dc5f8c__0;
    CData/*31:0*/ __Vdeeptemp_h9ab80022__0;
    // Body
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__rom__v0 = 0U;
    __Vdly__GameBoySoC__DOT__ppu__DOT__lineCycle = vlSelf->GameBoySoC__DOT__ppu__DOT__lineCycle;
    __Vdly__GameBoySoC__DOT__ppu__DOT__ly = vlSelf->GameBoySoC__DOT__ppu__DOT__ly;
    if (VL_UNLIKELY(((((((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_write) 
                         & (0U != (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) 
                        & (1U != (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) 
                       & (2U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) 
                      & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData) 
                         >> 7U)) & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[SERIAL] 0x%x '%c'\n",
                   8,vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSB,
                   8,(IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSB));
    }
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__hram__v0 = 0U;
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__vram__v0 = 0U;
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__oam__v0 = 0U;
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__wram__v0 = 0U;
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__wram__v1 = 0U;
    __Vdlyvset__GameBoySoC__DOT__memory__DOT__extRam__v0 = 0U;
    __Vdly__GameBoySoC__DOT__cpu__DOT__SP = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
    __Vdly__GameBoySoC__DOT__cpu__DOT__L = vlSelf->GameBoySoC__DOT__cpu__DOT__L;
    __Vdly__GameBoySoC__DOT__cpu__DOT__H = vlSelf->GameBoySoC__DOT__cpu__DOT__H;
    __Vdly__GameBoySoC__DOT__cpu__DOT__E = vlSelf->GameBoySoC__DOT__cpu__DOT__E;
    __Vdly__GameBoySoC__DOT__cpu__DOT__D = vlSelf->GameBoySoC__DOT__cpu__DOT__D;
    __Vdly__GameBoySoC__DOT__cpu__DOT__C = vlSelf->GameBoySoC__DOT__cpu__DOT__C;
    __Vdly__GameBoySoC__DOT__cpu__DOT__B = vlSelf->GameBoySoC__DOT__cpu__DOT__B;
    __Vdly__GameBoySoC__DOT__cpu__DOT__F = vlSelf->GameBoySoC__DOT__cpu__DOT__F;
    __Vdly__GameBoySoC__DOT__cpu__DOT__A = vlSelf->GameBoySoC__DOT__cpu__DOT__A;
    __Vdly__GameBoySoC__DOT__cpu__DOT__state = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
    __Vdly__GameBoySoC__DOT__cpu__DOT__mcycle = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
    __Vdly__GameBoySoC__DOT__cpu__DOT__IR = vlSelf->GameBoySoC__DOT__cpu__DOT__IR;
    if (vlSelf->io_extRomLoadEn) {
        __Vdlyvval__GameBoySoC__DOT__memory__DOT__rom__v0 
            = vlSelf->io_extRomLoadData;
        __Vdlyvset__GameBoySoC__DOT__memory__DOT__rom__v0 = 1U;
        __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__rom__v0 
            = (0xfffffU & vlSelf->io_extRomLoadAddr);
    }
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
         & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
            & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
               & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                  & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                     & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                        & ((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                           & ((0xe000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                              & ((0xfe00U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                                 & ((0xfea0U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                                    & ((0xff00U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                                       & ((0xff80U 
                                           <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                                          & (0xffffU 
                                             > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))))))))))))))) {
        vlSelf->GameBoySoC__DOT__memory__DOT____Vlvbound_ha6cb93b5__0 
            = vlSelf->GameBoySoC__DOT__memory__DOT__vram_MPORT_1_data;
        if ((0x7eU >= (0x7fU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))) {
            __Vdlyvval__GameBoySoC__DOT__memory__DOT__hram__v0 
                = vlSelf->GameBoySoC__DOT__memory__DOT____Vlvbound_ha6cb93b5__0;
            __Vdlyvset__GameBoySoC__DOT__memory__DOT__hram__v0 = 1U;
            __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__hram__v0 
                = (0x7fU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address));
        }
    }
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
         & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
            & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
               & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_108)))))) {
        __Vdlyvval__GameBoySoC__DOT__memory__DOT__vram__v0 
            = vlSelf->GameBoySoC__DOT__memory__DOT__vram_MPORT_1_data;
        __Vdlyvset__GameBoySoC__DOT__memory__DOT__vram__v0 = 1U;
        __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__vram__v0 
            = (0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address));
    }
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
         & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
            & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
               & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_120)))))) {
        vlSelf->GameBoySoC__DOT__memory__DOT____Vlvbound_h5559fb94__0 
            = vlSelf->GameBoySoC__DOT__memory__DOT__vram_MPORT_1_data;
        if ((0x9fU >= (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))) {
            __Vdlyvval__GameBoySoC__DOT__memory__DOT__oam__v0 
                = vlSelf->GameBoySoC__DOT__memory__DOT____Vlvbound_h5559fb94__0;
            __Vdlyvset__GameBoySoC__DOT__memory__DOT__oam__v0 = 1U;
            __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__oam__v0 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address));
        }
    }
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
         & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
            & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
               & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_114)))))) {
        __Vdlyvval__GameBoySoC__DOT__memory__DOT__wram__v0 
            = vlSelf->GameBoySoC__DOT__memory__DOT__vram_MPORT_1_data;
        __Vdlyvset__GameBoySoC__DOT__memory__DOT__wram__v0 = 1U;
        __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__wram__v0 
            = (0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address));
    }
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
         & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
            & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
               & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_117)))))) {
        __Vdlyvval__GameBoySoC__DOT__memory__DOT__wram__v1 
            = vlSelf->GameBoySoC__DOT__memory__DOT__vram_MPORT_1_data;
        __Vdlyvset__GameBoySoC__DOT__memory__DOT__wram__v1 = 1U;
        __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__wram__v1 
            = (0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address));
    }
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
         & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
            & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
               & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                  & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                     & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                        & ((0xc000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                           & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ramEnabled))))))))) {
        __Vdlyvval__GameBoySoC__DOT__memory__DOT__extRam__v0 
            = vlSelf->GameBoySoC__DOT__memory__DOT__vram_MPORT_1_data;
        __Vdlyvset__GameBoySoC__DOT__memory__DOT__extRam__v0 = 1U;
        __Vdlyvdim0__GameBoySoC__DOT__memory__DOT__extRam__v0 
            = (0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address));
    }
    vlSelf->GameBoySoC__DOT__ppu__DOT__vblankIRQ = 
        ((1U & (~ (IData)(vlSelf->reset))) && ((0x8fU 
                                                == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__ly)) 
                                               & (0x1c7U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lineCycle))));
    vlSelf->GameBoySoC__DOT__memory__DOT__bootRomEnable 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_502));
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memRead) 
         & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_140))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__oam_rdata_MPORT_4_addr_pipe_0 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address));
    }
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memRead) 
         & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_137))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__wram_rdata_MPORT_3_addr_pipe_0 
            = (0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address));
    }
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memRead) 
         & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_134))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__wram_rdata_MPORT_2_addr_pipe_0 
            = (0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address));
    }
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memRead) 
         & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_128))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__vram_rdata_MPORT_addr_pipe_0 
            = (0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address));
    }
    if (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memRead) 
         & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_131))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__extRam_rdata_MPORT_1_addr_pipe_0 
            = (0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address));
    }
    if (vlSelf->reset) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__divCounter = 0U;
        __Vdly__GameBoySoC__DOT__ppu__DOT__lineCycle = 0U;
        __Vdly__GameBoySoC__DOT__ppu__DOT__ly = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV = 0xabU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0 = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT = 0x85U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52 = 0xf1U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51 = 0xf3U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12 = 0xf3U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10 = 0x80U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34 = 0xbfU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11 = 0xbfU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSC = 0x7eU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42 = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1 = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24 = 0xbfU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTMA = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTAC = 0xf8U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41 = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13 = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTIMA = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32 = 0x9fU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30 = 0x7fU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21 = 0x3fU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43 = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31 = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44 = 0xbfU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50 = 0x77U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14 = 0xbfU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33 = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22 = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23 = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP = 0xfcU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC = 0x91U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regP1 = 0xffU;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF = 0xe1U;
        vlSelf->GameBoySoC__DOT__memory__DOT__regIE = 0U;
        __Vdly__GameBoySoC__DOT__cpu__DOT__A = 1U;
        __Vdly__GameBoySoC__DOT__cpu__DOT__F = 0xb0U;
        __Vdly__GameBoySoC__DOT__cpu__DOT__B = 0U;
        __Vdly__GameBoySoC__DOT__cpu__DOT__C = 0x13U;
        __Vdly__GameBoySoC__DOT__cpu__DOT__D = 0U;
        __Vdly__GameBoySoC__DOT__cpu__DOT__E = 0xd8U;
        __Vdly__GameBoySoC__DOT__cpu__DOT__H = 1U;
        __Vdly__GameBoySoC__DOT__cpu__DOT__L = 0x4dU;
        vlSelf->GameBoySoC__DOT__cpu__DOT__PC = 0U;
        __Vdly__GameBoySoC__DOT__cpu__DOT__SP = 0xfffeU;
        __Vdly__GameBoySoC__DOT__cpu__DOT__IR = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__IR2 = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__imm8 = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__imm16 = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8 = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled = 0U;
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
        __Vdly__GameBoySoC__DOT__cpu__DOT__mcycle = 0U;
    } else {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__divCounter 
            = ((0xffU == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__divCounter))
                ? 0U : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___divCounter_T_1));
        if ((0x1c7U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lineCycle))) {
            __Vdly__GameBoySoC__DOT__ppu__DOT__lineCycle = 0U;
            __Vdly__GameBoySoC__DOT__ppu__DOT__ly = 
                ((0x99U == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__ly))
                  ? 0U : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___ly_T_2));
        } else {
            __Vdly__GameBoySoC__DOT__ppu__DOT__lineCycle 
                = vlSelf->GameBoySoC__DOT__ppu__DOT___lineCycle_T_1;
        }
        if (vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_write) {
            if ((0U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_0;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regP1 
                    = (0xcfU | (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData));
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2;
            } else if ((1U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_0;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2;
            } else if ((2U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_0;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2;
            } else if ((4U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV = 0U;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2;
            } else {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_0;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF 
                    = ((5U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2)
                        : ((6U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2)
                            : ((7U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2)
                                : ((0xfU == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData)
                                    : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2)))));
            }
            if ((0U != (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                if ((1U != (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_806;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSC 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_798;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTMA 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_803;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTAC 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_804;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTIMA 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_802;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827;
                }
            }
        } else {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_0;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2;
        }
        if (vlSelf->GameBoySoC__DOT__cpu_io_memWrite) {
            if ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))) {
                if ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))) {
                    vlSelf->GameBoySoC__DOT__memory__DOT__regIE 
                        = vlSelf->GameBoySoC__DOT__memory__DOT___GEN_398;
                }
            }
        }
        if ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
            if ((1U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                if ((2U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                    __Vdly__GameBoySoC__DOT__cpu__DOT__A 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2103;
                    __Vdly__GameBoySoC__DOT__cpu__DOT__F 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2104;
                    __Vdly__GameBoySoC__DOT__cpu__DOT__B 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2105;
                    __Vdly__GameBoySoC__DOT__cpu__DOT__C 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2106;
                    __Vdly__GameBoySoC__DOT__cpu__DOT__D 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2107;
                    __Vdly__GameBoySoC__DOT__cpu__DOT__E 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2108;
                    __Vdly__GameBoySoC__DOT__cpu__DOT__H 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2109;
                    __Vdly__GameBoySoC__DOT__cpu__DOT__L 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2110;
                    __Vdly__GameBoySoC__DOT__cpu__DOT__SP 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2112;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__IR2 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2096;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2111;
                }
                vlSelf->GameBoySoC__DOT__cpu__DOT__imm16 
                    = ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1766)
                        : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2082));
            }
            if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__imm8 
                        = vlSelf->GameBoySoC__DOT__cpu_io_memReadData;
                }
            } else if ((2U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__imm8 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2113;
            }
        }
        if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__PC = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1737;
            if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
                __Vdly__GameBoySoC__DOT__cpu__DOT__IR 
                    = vlSelf->GameBoySoC__DOT__cpu_io_memReadData;
                if ((0xcbU != (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1715;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1716;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1717;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1718;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1719;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1720;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1721;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1722;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1723;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1724;
                }
                __Vdly__GameBoySoC__DOT__cpu__DOT__state 
                    = ((0xcbU == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData))
                        ? 5U : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__needsImm8_new)
                                 ? 1U : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__needsImm16_new)
                                          ? 2U : 4U)));
            }
            __Vdly__GameBoySoC__DOT__cpu__DOT__mcycle 
                = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1738;
        } else if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__PC = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1737;
            if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___PC_T_1;
                vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
                vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__A;
                vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__F;
                vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__B;
                vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__C;
                vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__D;
                vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__E;
                vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__H;
                vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__L;
                __Vdly__GameBoySoC__DOT__cpu__DOT__state = 4U;
            }
            __Vdly__GameBoySoC__DOT__cpu__DOT__mcycle 
                = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1738;
        } else {
            if ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__PC 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1737;
                __Vdly__GameBoySoC__DOT__cpu__DOT__state 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1768;
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT__PC 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2083;
                __Vdly__GameBoySoC__DOT__cpu__DOT__state 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2085;
            }
            if ((2U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2086;
                vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2087;
                vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2088;
                vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2089;
                vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2090;
                vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2091;
                vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2092;
                vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2093;
                vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2094;
                vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2095;
                __Vdly__GameBoySoC__DOT__cpu__DOT__mcycle 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2084;
            }
        }
    }
    if (vlSelf->GameBoySoC__DOT__cpu_io_memRead) {
        vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr_pipe_0 
            = vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address;
    }
    if (VL_UNLIKELY(((((((((((~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___T_1)) 
                             & (~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___T_4))) 
                            & (~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___T_6))) 
                           & (~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___T_8))) 
                          & (~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___T_10))) 
                         & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___T_12)) 
                        & (~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___T_13))) 
                       & (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) 
                      & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___T_18)) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"[WRITEBACK T3] mcycle=%1# IR=0x%x u.SP=0x%x (was SP=0x%x)\n",
                   3,vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle,
                   8,(IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR),
                   16,vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP,
                   16,(IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP));
    }
    if (vlSelf->reset) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSB = 0U;
        vlSelf->GameBoySoC__DOT__memory__DOT__ramEnabled = 0U;
        vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle = 0U;
    } else {
        if (vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_write) {
            if ((0U != (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                if ((1U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSB 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                }
            }
        }
        if (vlSelf->GameBoySoC__DOT__cpu_io_memWrite) {
            if ((0x2000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__ramEnabled 
                    = (0xaU == (0xfU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__vram_MPORT_1_data)));
            }
        }
        vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle = 
            ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_1)
              ? 0U : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___tcycle_T_1));
    }
    if (__Vdlyvset__GameBoySoC__DOT__memory__DOT__rom__v0) {
        vlSelf->GameBoySoC__DOT__memory__DOT__rom[__Vdlyvdim0__GameBoySoC__DOT__memory__DOT__rom__v0] 
            = __Vdlyvval__GameBoySoC__DOT__memory__DOT__rom__v0;
    }
    if (__Vdlyvset__GameBoySoC__DOT__memory__DOT__hram__v0) {
        vlSelf->GameBoySoC__DOT__memory__DOT__hram[__Vdlyvdim0__GameBoySoC__DOT__memory__DOT__hram__v0] 
            = __Vdlyvval__GameBoySoC__DOT__memory__DOT__hram__v0;
    }
    if (__Vdlyvset__GameBoySoC__DOT__memory__DOT__vram__v0) {
        vlSelf->GameBoySoC__DOT__memory__DOT__vram[__Vdlyvdim0__GameBoySoC__DOT__memory__DOT__vram__v0] 
            = __Vdlyvval__GameBoySoC__DOT__memory__DOT__vram__v0;
    }
    if (__Vdlyvset__GameBoySoC__DOT__memory__DOT__oam__v0) {
        vlSelf->GameBoySoC__DOT__memory__DOT__oam[__Vdlyvdim0__GameBoySoC__DOT__memory__DOT__oam__v0] 
            = __Vdlyvval__GameBoySoC__DOT__memory__DOT__oam__v0;
    }
    if (__Vdlyvset__GameBoySoC__DOT__memory__DOT__wram__v0) {
        vlSelf->GameBoySoC__DOT__memory__DOT__wram[__Vdlyvdim0__GameBoySoC__DOT__memory__DOT__wram__v0] 
            = __Vdlyvval__GameBoySoC__DOT__memory__DOT__wram__v0;
    }
    if (__Vdlyvset__GameBoySoC__DOT__memory__DOT__wram__v1) {
        vlSelf->GameBoySoC__DOT__memory__DOT__wram[__Vdlyvdim0__GameBoySoC__DOT__memory__DOT__wram__v1] 
            = __Vdlyvval__GameBoySoC__DOT__memory__DOT__wram__v1;
    }
    if (__Vdlyvset__GameBoySoC__DOT__memory__DOT__extRam__v0) {
        vlSelf->GameBoySoC__DOT__memory__DOT__extRam[__Vdlyvdim0__GameBoySoC__DOT__memory__DOT__extRam__v0] 
            = __Vdlyvval__GameBoySoC__DOT__memory__DOT__extRam__v0;
    }
    vlSelf->GameBoySoC__DOT__ppu__DOT__lineCycle = __Vdly__GameBoySoC__DOT__ppu__DOT__lineCycle;
    vlSelf->GameBoySoC__DOT__ppu__DOT__ly = __Vdly__GameBoySoC__DOT__ppu__DOT__ly;
    vlSelf->GameBoySoC__DOT__cpu__DOT__SP = __Vdly__GameBoySoC__DOT__cpu__DOT__SP;
    vlSelf->GameBoySoC__DOT__cpu__DOT__A = __Vdly__GameBoySoC__DOT__cpu__DOT__A;
    vlSelf->GameBoySoC__DOT__cpu__DOT__F = __Vdly__GameBoySoC__DOT__cpu__DOT__F;
    vlSelf->GameBoySoC__DOT__cpu__DOT__B = __Vdly__GameBoySoC__DOT__cpu__DOT__B;
    vlSelf->GameBoySoC__DOT__cpu__DOT__C = __Vdly__GameBoySoC__DOT__cpu__DOT__C;
    vlSelf->GameBoySoC__DOT__cpu__DOT__D = __Vdly__GameBoySoC__DOT__cpu__DOT__D;
    vlSelf->GameBoySoC__DOT__cpu__DOT__E = __Vdly__GameBoySoC__DOT__cpu__DOT__E;
    vlSelf->GameBoySoC__DOT__cpu__DOT__H = __Vdly__GameBoySoC__DOT__cpu__DOT__H;
    vlSelf->GameBoySoC__DOT__cpu__DOT__L = __Vdly__GameBoySoC__DOT__cpu__DOT__L;
    vlSelf->GameBoySoC__DOT__cpu__DOT__state = __Vdly__GameBoySoC__DOT__cpu__DOT__state;
    vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle = __Vdly__GameBoySoC__DOT__cpu__DOT__mcycle;
    vlSelf->GameBoySoC__DOT__cpu__DOT__IR = __Vdly__GameBoySoC__DOT__cpu__DOT__IR;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___divCounter_T_1 
        = (0xffffU & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__divCounter)));
    vlSelf->GameBoySoC__DOT__ppu__DOT___lineCycle_T_1 
        = (0x1ffU & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lineCycle)));
    vlSelf->GameBoySoC__DOT__ppu__DOT___ly_T_2 = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__ly)));
    vlSelf->io_dbg_ly = vlSelf->GameBoySoC__DOT__ppu__DOT__ly;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_0 
        = (0xffU & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV) 
                    + (0xffU == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__divCounter))));
    GameBoySoC__DOT__ppu__DOT____VdfgTmp_h81d728ba__0 
        = (((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC) 
            >> 7U) & ((0x90U > (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__ly)) 
                      & (3U == ((0x90U <= (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__ly))
                                 ? 1U : ((0x50U > (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lineCycle))
                                          ? 2U : ((0xfcU 
                                                   > (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lineCycle))
                                                   ? 3U
                                                   : 0U))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2 
        = ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__vblankIRQ)
            ? (1U | (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF))
            : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF));
    vlSelf->io_dbg_a = vlSelf->GameBoySoC__DOT__cpu__DOT__A;
    vlSelf->io_dbg_f = vlSelf->GameBoySoC__DOT__cpu__DOT__F;
    vlSelf->io_dbg_b = vlSelf->GameBoySoC__DOT__cpu__DOT__B;
    vlSelf->io_dbg_c = vlSelf->GameBoySoC__DOT__cpu__DOT__C;
    vlSelf->io_dbg_d = vlSelf->GameBoySoC__DOT__cpu__DOT__D;
    vlSelf->io_dbg_e = vlSelf->GameBoySoC__DOT__cpu__DOT__E;
    vlSelf->io_dbg_h = vlSelf->GameBoySoC__DOT__cpu__DOT__H;
    vlSelf->io_dbg_l = vlSelf->GameBoySoC__DOT__cpu__DOT__L;
    vlSelf->io_dbg_pc = vlSelf->GameBoySoC__DOT__cpu__DOT__PC;
    vlSelf->GameBoySoC__DOT__cpu__DOT___PC_T_1 = (0xffffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)));
    vlSelf->io_dbg_state = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
    vlSelf->GameBoySoC__DOT__cpu__DOT___T_1 = (0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state));
    vlSelf->GameBoySoC__DOT__cpu__DOT___T_4 = (1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state));
    vlSelf->GameBoySoC__DOT__cpu__DOT___T_6 = (2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state));
    vlSelf->GameBoySoC__DOT__cpu__DOT___T_8 = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state));
    vlSelf->GameBoySoC__DOT__cpu__DOT___T_10 = (5U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state));
    vlSelf->GameBoySoC__DOT__cpu__DOT___T_12 = (4U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state));
    GameBoySoC__DOT__cpu__DOT___u_result_T_3 = (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled) 
                                                 << 8U) 
                                                | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h54193848__0 
        = (1U & (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                  >> 4U) | (0x99U < (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled))));
    GameBoySoC__DOT__cpu__DOT___u_out_PC_T_4 = (0xffffU 
                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled) 
                                                   + 
                                                   ((0xfe00U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8) 
                                                                       >> 7U)))) 
                                                        << 9U)) 
                                                    | ((0x100U 
                                                        & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8) 
                                                           << 1U)) 
                                                       | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)))));
    GameBoySoC__DOT__cpu__DOT___u_out_F_T_29 = ((0x20U 
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
    GameBoySoC__DOT__cpu__DOT___u_result_T = (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled) 
                                               << 8U) 
                                              | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
    GameBoySoC__DOT__cpu__DOT___cbOut_operand_T_13 
        = ((7U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
            : ((5U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
                : ((4U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled)
                    : ((3U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled)
                        : ((2U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled)
                            : ((1U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled)
                                : ((0U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled)
                                    : 0U)))))));
    GameBoySoC__DOT__cpu__DOT__u_HL = (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled) 
                                        << 8U) | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
    vlSelf->io_dbg_mcycle = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
    GameBoySoC__DOT__cpu__DOT___GEN_139 = ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                           & ((1U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                              & (2U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))));
    GameBoySoC__DOT__cpu__DOT___GEN_357 = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                           | (1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)));
    vlSelf->GameBoySoC__DOT__cpu__DOT___T_13 = (0xcbU 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR));
    vlSelf->GameBoySoC__DOT__cpu__DOT___T_18 = ((0xcdU 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                | (0xc9U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->io_dbg_opcode = vlSelf->GameBoySoC__DOT__cpu__DOT__IR;
    GameBoySoC__DOT__cpu__DOT___u_T_103 = ((7U == (7U 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                            : ((5U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled)
                                                : (
                                                   (4U 
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
    GameBoySoC__DOT__cpu__DOT__u_condition = (1U & 
                                              ((3U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                    >> 3U)))
                                                ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                   >> 4U)
                                                : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                        >> 3U)))
                                                    ? 
                                                   (~ 
                                                    ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                     >> 4U))
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (3U 
                                                      & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                         >> 3U)))
                                                     ? 
                                                    ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                     >> 7U)
                                                     : (IData)(
                                                               ((~ 
                                                                 ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                                  >> 7U)) 
                                                                & (0U 
                                                                   == 
                                                                   (0x18U 
                                                                    & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))))))));
    GameBoySoC__DOT__cpu__DOT___u_T_89 = ((0x40U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
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
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0 
        = ((4U == (0xc7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
           & (6U != (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                           >> 3U))));
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0 
        = ((5U == (0xc7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
           & (6U != (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                           >> 3U))));
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0 
        = ((6U == (0xc7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
           & (6U != (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                           >> 3U))));
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0 
        = (((0x70U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
            & (0x75U >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
           | (0x77U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0 
        = ((0x46U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           | ((0x4eU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
              | ((0x56U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                 | ((0x5eU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                    | ((0x66U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                       | ((0x6eU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                          | (0x7eU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))))))));
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h504a3c3c__0 
        = ((0x80U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0x87U >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0 
        = ((0x88U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0x8fU >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0 
        = ((0x90U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0x97U >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0 
        = ((0x98U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0x9fU >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0 
        = ((0xa0U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0xa7U >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0 
        = ((0xa8U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0xafU >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0 
        = ((0xb0U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0xb7U >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    GameBoySoC__DOT__cpu__DOT____VdfgTmp_hca3a8028__0 
        = ((0xb8U <= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
           & (0xbfU >= (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)));
    vlSelf->io_pixelY = vlSelf->io_dbg_ly;
    if (GameBoySoC__DOT__ppu__DOT____VdfgTmp_h81d728ba__0) {
        if ((0xa0U > (0x1ffU & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lineCycle) 
                                - (IData)(0x50U))))) {
            vlSelf->io_pixelColor = (3U & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP));
            vlSelf->io_pixelValid = 1U;
        } else {
            vlSelf->io_pixelColor = 0U;
            vlSelf->io_pixelValid = 0U;
        }
    } else {
        vlSelf->io_pixelColor = 0U;
        vlSelf->io_pixelValid = 0U;
    }
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
        GameBoySoC__DOT__cpu__DOT__u_adjusted = (0xffU 
                                                 & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled) 
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
        GameBoySoC__DOT__cpu__DOT__u_adjusted = (0xffU 
                                                 & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled) 
                                                    + (IData)(GameBoySoC__DOT__cpu__DOT__u_correction)));
    }
    GameBoySoC__DOT__cpu__DOT___u_operand_T_8 = ((2U 
                                                  == 
                                                  (3U 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                      >> 4U)))
                                                  ? (IData)(GameBoySoC__DOT__cpu__DOT__u_HL)
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
        GameBoySoC__DOT__cpu__DOT__u_result = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)));
        GameBoySoC__DOT__cpu__DOT__u_result_1 = (0xffffU 
                                                 & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                                    - (IData)(1U)));
        GameBoySoC__DOT__cpu__DOT__u_operand = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT__u_regPair = (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled) 
                                                 << 8U) 
                                                | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled));
    } else {
        if ((2U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                          >> 4U)))) {
            GameBoySoC__DOT__cpu__DOT__u_result = (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(GameBoySoC__DOT__cpu__DOT__u_HL)));
            GameBoySoC__DOT__cpu__DOT__u_result_1 = 
                (0xffffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_HL) 
                            - (IData)(1U)));
        } else if ((1U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                 >> 4U)))) {
            GameBoySoC__DOT__cpu__DOT__u_result = (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(GameBoySoC__DOT__cpu__DOT___u_result_T_3)));
            GameBoySoC__DOT__cpu__DOT__u_result_1 = 
                (0xffffU & ((IData)(GameBoySoC__DOT__cpu__DOT___u_result_T_3) 
                            - (IData)(1U)));
        } else if ((0U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                 >> 4U)))) {
            GameBoySoC__DOT__cpu__DOT__u_result = (0xffffU 
                                                   & ((IData)(1U) 
                                                      + (IData)(GameBoySoC__DOT__cpu__DOT___u_result_T)));
            GameBoySoC__DOT__cpu__DOT__u_result_1 = 
                (0xffffU & ((IData)(GameBoySoC__DOT__cpu__DOT___u_result_T) 
                            - (IData)(1U)));
        } else {
            GameBoySoC__DOT__cpu__DOT__u_result = (0xffffU 
                                                   & 0U);
            GameBoySoC__DOT__cpu__DOT__u_result_1 = 
                (0xffffU & 0U);
        }
        GameBoySoC__DOT__cpu__DOT__u_operand = GameBoySoC__DOT__cpu__DOT___u_operand_T_8;
        GameBoySoC__DOT__cpu__DOT__u_regPair = GameBoySoC__DOT__cpu__DOT___u_operand_T_8;
    }
    vlSelf->io_dbg_IR = vlSelf->io_dbg_opcode;
    GameBoySoC__DOT__cpu__DOT___GEN_501 = ((IData)(GameBoySoC__DOT__cpu__DOT__u_condition) 
                                           & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_357));
    vlSelf->io_pixelX = ((IData)(vlSelf->io_pixelValid)
                          ? (0xffU & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__lineCycle) 
                                      - (IData)(0x50U)))
                          : 0U);
    vlSelf->io_dbg_tcycle = vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle;
    vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_1 = (3U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
    vlSelf->GameBoySoC__DOT__cpu__DOT___tcycle_T_1 
        = (3U & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)));
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1737 = 
        (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC) 
                    + (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))));
    GameBoySoC__DOT__cpu__DOT___GEN_1916 = ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                            & ((6U 
                                                != 
                                                (7U 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2))) 
                                               & (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))));
    GameBoySoC__DOT__cpu__DOT___GEN_429 = (0xffffU 
                                           & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                              + (3U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))));
    GameBoySoC__DOT__cpu__DOT___GEN_251 = ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)) 
                                           & ((1U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)) 
                                              & ((2U 
                                                  != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)) 
                                                 & (3U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)))));
    GameBoySoC__DOT__cpu__DOT___GEN_141 = ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                           & ((1U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                              & ((2U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                                 & (3U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)))));
    GameBoySoC__DOT__cpu__DOT___GEN_235 = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                           & (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)));
    GameBoySoC__DOT__cpu__DOT___GEN_1808 = ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                             ? ((3U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                 ? 2U
                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                             : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle));
    GameBoySoC__DOT__cpu__DOT___GEN_565 = ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                           & ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                              & (3U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))));
    GameBoySoC__DOT__cpu__DOT___GEN_247 = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)) 
                                           | (1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)));
    GameBoySoC__DOT__cpu__DOT___GEN_1695 = ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
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
                                                           & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)) 
                                                              & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)) 
                                                                 & ((0x34U 
                                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                     ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_139)
                                                                     : 
                                                                    ((0x35U 
                                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                      ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_139)
                                                                      : 
                                                                     ((~ (IData)(GameBoySoC__DOT__cpu__DOT___u_T_89)) 
                                                                      & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)) 
                                                                         & ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
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
                                                                             ((0x2aU 
                                                                               != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                              & ((0x3aU 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0x22U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 
                                                                                (0U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                                                 : 
                                                                                ((0x32U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 
                                                                                (0U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                                                 : 
                                                                                ((0xf2U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xe2U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 
                                                                                (0U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                                                 : 
                                                                                ((0xe0U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 
                                                                                (0U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                                                 : 
                                                                                ((0xf0U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)) 
                                                                                & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h504a3c3c__0)) 
                                                                                & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)) 
                                                                                & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)) 
                                                                                & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)) 
                                                                                & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0)) 
                                                                                & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)) 
                                                                                & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)) 
                                                                                & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hca3a8028__0)) 
                                                                                & ((0xc6U 
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
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_357)
                                                                                 : 
                                                                                ((0xc1U 
                                                                                != 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
                                                                                & ((0xcdU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_357)
                                                                                 : 
                                                                                ((0xc9U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xd9U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xc7U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_357)
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
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_501)
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
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
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
                                                      ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                                                        ? 8U
                                                        : 
                                                       ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
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
                                                          ((IData)(GameBoySoC__DOT__cpu__DOT___u_T_89)
                                                            ? 0U
                                                            : 
                                                           ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)
                                                             ? 0U
                                                             : 
                                                            ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
                                                              ? 0U
                                                              : 
                                                             ((0x36U 
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
                                                                      ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                                        ? 0U
                                                                        : 
                                                                       ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h504a3c3c__0)
                                                                         ? 0U
                                                                         : 
                                                                        ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)
                                                                          ? 1U
                                                                          : 
                                                                         ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)
                                                                           ? 2U
                                                                           : 
                                                                          ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)
                                                                            ? 3U
                                                                            : 
                                                                           ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0)
                                                                             ? 4U
                                                                             : 
                                                                            ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)
                                                                              ? 6U
                                                                              : 
                                                                             ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)
                                                                               ? 5U
                                                                               : 
                                                                              ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hca3a8028__0)
                                                                                ? 2U
                                                                                : 
                                                                               ((0xc6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
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
                                                                                 : 0U)))))))))))))))))))))))))))))))))))));
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
    if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
        GameBoySoC__DOT__cpu__DOT___GEN_359 = (0xffffU 
                                               & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                                  - (IData)(1U)));
        GameBoySoC__DOT__cpu__DOT___GEN_140 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_424 = (0xffU 
                                               & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled) 
                                                  >> 8U));
        GameBoySoC__DOT__cpu__DOT___GEN_136 = 0U;
    } else {
        GameBoySoC__DOT__cpu__DOT___GEN_359 = (0xffffU 
                                               & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                                  - 
                                                  (1U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))));
        if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
            GameBoySoC__DOT__cpu__DOT___GEN_140 = 0U;
            GameBoySoC__DOT__cpu__DOT___GEN_424 = (0xffU 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled));
            GameBoySoC__DOT__cpu__DOT___GEN_136 = vlSelf->GameBoySoC__DOT__cpu__DOT__imm8;
        } else {
            GameBoySoC__DOT__cpu__DOT___GEN_140 = (
                                                   (2U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                    : 0U);
            GameBoySoC__DOT__cpu__DOT___GEN_424 = (0xffU 
                                                   & 0U);
            GameBoySoC__DOT__cpu__DOT___GEN_136 = 0U;
        }
    }
    if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if ((1U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if ((3U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if ((0xbU == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if ((9U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = GameBoySoC__DOT__cpu__DOT__u_oldVal;
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = GameBoySoC__DOT__cpu__DOT__u_oldVal;
    } else if ((0x34U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = GameBoySoC__DOT__cpu__DOT___GEN_136;
    } else if ((0x35U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = GameBoySoC__DOT__cpu__DOT___GEN_136;
    } else if (GameBoySoC__DOT__cpu__DOT___u_T_89) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if ((0x36U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if ((0x2aU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if ((0x3aU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if ((0x22U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if ((0x32U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if ((0xf2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if ((0xe2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if ((0xe0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if ((0xf0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h504a3c3c__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = GameBoySoC__DOT__cpu__DOT___u_T_103;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = GameBoySoC__DOT__cpu__DOT___u_T_103;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = GameBoySoC__DOT__cpu__DOT___u_T_103;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = GameBoySoC__DOT__cpu__DOT___u_T_103;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = GameBoySoC__DOT__cpu__DOT___u_T_103;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = GameBoySoC__DOT__cpu__DOT___u_T_103;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = GameBoySoC__DOT__cpu__DOT___u_T_103;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_hca3a8028__0) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = GameBoySoC__DOT__cpu__DOT___u_T_103;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
    } else if ((0xc6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = vlSelf->GameBoySoC__DOT__cpu__DOT__imm8;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
    } else if ((0xd6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = vlSelf->GameBoySoC__DOT__cpu__DOT__imm8;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
    } else if ((0xe6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = vlSelf->GameBoySoC__DOT__cpu__DOT__imm8;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
    } else if ((0xeeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = vlSelf->GameBoySoC__DOT__cpu__DOT__imm8;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
    } else if ((0xf6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = vlSelf->GameBoySoC__DOT__cpu__DOT__imm8;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
    } else if ((0xfeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = vlSelf->GameBoySoC__DOT__cpu__DOT__imm8;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
    } else {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_b = 0U;
        GameBoySoC__DOT__cpu__DOT__u_alu_io_a = 0U;
    }
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
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sum = (0xffU 
                                                  & ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a) 
                                                     + (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_b)));
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diff = (0xffU 
                                                   & ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a) 
                                                      - (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_b)));
    GameBoySoC__DOT__cpu__DOT__u_result_2 = (0xffffU 
                                             & ((IData)(GameBoySoC__DOT__cpu__DOT__u_HL) 
                                                + (IData)(GameBoySoC__DOT__cpu__DOT__u_operand)));
    GameBoySoC__DOT__cpu__DOT__cbOut_done = ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                              ? ((3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)) 
                                                 | (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1916))
                                              : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1916));
    GameBoySoC__DOT__cpu__DOT___GEN_506 = ((IData)(GameBoySoC__DOT__cpu__DOT__u_condition)
                                            ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_565)
                                            : (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle)));
    if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1768 = 3U;
        GameBoySoC__DOT__cpu__DOT___GEN_1755 = 4U;
        GameBoySoC__DOT__cpu__DOT___GEN_1756 = (0xffffU 
                                                & ((IData)(1U) 
                                                   + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)));
        GameBoySoC__DOT__cpu__DOT___GEN_1757 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1758 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1759 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1760 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__B;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1761 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1762 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__D;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1763 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__E;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1764 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__H;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1765 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__L;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1738 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_113 = 1U;
    } else {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1768 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
        GameBoySoC__DOT__cpu__DOT___GEN_1755 = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
        GameBoySoC__DOT__cpu__DOT___GEN_1756 = (0xffffU 
                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_1757 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1758 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1759 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1760 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1761 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1762 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1763 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1764 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1765 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1738 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
        GameBoySoC__DOT__cpu__DOT___GEN_113 = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
    }
    if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
        GameBoySoC__DOT__cpu__DOT___GEN_356 = (0xffffU 
                                               & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                                  - (IData)(1U)));
        GameBoySoC__DOT__cpu__DOT___GEN_396 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_546 = vlSelf->GameBoySoC__DOT__cpu__DOT__imm16;
        GameBoySoC__DOT__cpu__DOT___GEN_131 = GameBoySoC__DOT__cpu__DOT__u_HL;
        GameBoySoC__DOT__cpu__DOT___GEN_441 = GameBoySoC__DOT__cpu__DOT___GEN_429;
        GameBoySoC__DOT__cpu__DOT___GEN_134 = GameBoySoC__DOT__cpu__DOT___GEN_113;
        GameBoySoC__DOT__cpu__DOT___GEN_564 = GameBoySoC__DOT__cpu__DOT___GEN_113;
    } else {
        if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
            GameBoySoC__DOT__cpu__DOT___GEN_356 = (0xffffU 
                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                                      - (IData)(1U)));
            GameBoySoC__DOT__cpu__DOT___GEN_396 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_131 = 0U;
            GameBoySoC__DOT__cpu__DOT___GEN_441 = GameBoySoC__DOT__cpu__DOT___GEN_429;
        } else {
            GameBoySoC__DOT__cpu__DOT___GEN_356 = (0xffffU 
                                                   & 0U);
            GameBoySoC__DOT__cpu__DOT___GEN_396 = 0U;
            GameBoySoC__DOT__cpu__DOT___GEN_131 = (
                                                   (2U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                    ? (IData)(GameBoySoC__DOT__cpu__DOT__u_HL)
                                                    : 0U);
            GameBoySoC__DOT__cpu__DOT___GEN_441 = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        }
        GameBoySoC__DOT__cpu__DOT___GEN_546 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_134 = GameBoySoC__DOT__cpu__DOT___GEN_1808;
        GameBoySoC__DOT__cpu__DOT___GEN_564 = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
    }
    GameBoySoC__DOT__cpu__DOT___GEN_504 = ((IData)(GameBoySoC__DOT__cpu__DOT__u_condition)
                                            ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_564)
                                            : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle));
    GameBoySoC__DOT__cpu__DOT___GEN_1692 = ((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
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
                                                           & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)) 
                                                              & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)) 
                                                                 & ((0x34U 
                                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                     ? 
                                                                    (0U 
                                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                     : 
                                                                    ((0x35U 
                                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                      ? 
                                                                     (0U 
                                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                      : 
                                                                     ((~ (IData)(GameBoySoC__DOT__cpu__DOT___u_T_89)) 
                                                                      & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)) 
                                                                         & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)) 
                                                                            & ((0x36U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                               & ((0x2aU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_247)
                                                                                 : 
                                                                                ((0x3aU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_247)
                                                                                 : 
                                                                                ((0x22U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0x32U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xf2U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_247)
                                                                                 : 
                                                                                ((0xe2U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xe0U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xf0U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_247)
                                                                                 : 
                                                                                ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0) 
                                                                                | ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h504a3c3c__0)) 
                                                                                & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)) 
                                                                                & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)) 
                                                                                & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)) 
                                                                                & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0)) 
                                                                                & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)) 
                                                                                & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)) 
                                                                                & ((~ (IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hca3a8028__0)) 
                                                                                & ((0xc6U 
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
                                                                                != 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
                                                                                & ((0xc1U 
                                                                                == 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_357)
                                                                                 : 
                                                                                ((0xcdU 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xc9U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_357)
                                                                                 : 
                                                                                ((0xd9U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_357)
                                                                                 : 
                                                                                ((0xc7U 
                                                                                != 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
                                                                                & ((0xfbU 
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
                                                                                != 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) 
                                                                                & ((0xc0U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_501)
                                                                                 : 
                                                                                ((0xc3U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0x37U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0x3fU 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0x2fU 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0x27U 
                                                                                != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & ((0xfaU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)) 
                                                                                & (0U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->GameBoySoC__DOT__cpu_io_memWrite = ((0U 
                                                 != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                                                & ((1U 
                                                    != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                                                   & ((2U 
                                                       != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                                                      & ((3U 
                                                          != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                                                         & ((5U 
                                                             != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                                                            & ((4U 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                                                               & ((0U 
                                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                                   ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1695)
                                                                   : 
                                                                  ((1U 
                                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                                    ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1695)
                                                                    : 
                                                                   ((2U 
                                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                                     ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1695)
                                                                     : 
                                                                    ((3U 
                                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                                      ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1695)
                                                                      : 
                                                                     ((5U 
                                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                                       ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1695)
                                                                       : 
                                                                      ((4U 
                                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                                        ? 
                                                                       ((0xcbU 
                                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                         ? 
                                                                        (3U 
                                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                         : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1695))
                                                                        : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1695)))))))))))));
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sumc = (0xffU 
                                                   & ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sum) 
                                                      + 
                                                      (1U 
                                                       & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                          >> 4U))));
    GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diffc = 
        (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diff) 
                  - (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                           >> 4U))));
    if ((0U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_flagH = 
            (0xfU < (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_3));
        GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ = 
            (0U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sum));
        GameBoySoC__DOT__cpu__DOT__u_alu_io_out = (0xffU 
                                                   & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sum));
    } else if ((1U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))) {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_flagH = 
            (0xfU < (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT___io_flagH_T_3) 
                              + (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                       >> 4U)))));
        GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ = 
            (0U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sumc));
        GameBoySoC__DOT__cpu__DOT__u_alu_io_out = (0xffU 
                                                   & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sumc));
    } else {
        GameBoySoC__DOT__cpu__DOT__u_alu_io_flagH = 
            ((2U != (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
             & ((3U != (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                & ((4U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                   | ((5U != (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                      & ((6U != (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                         & ((7U != (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                            & ((8U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))
                                ? (0xfU == (0xfU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a)))
                                : ((9U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                   & (0U == (0xfU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a)))))))))));
        if ((2U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))) {
            GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ 
                = (0U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diff));
            GameBoySoC__DOT__cpu__DOT__u_alu_io_out 
                = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diff));
        } else if ((3U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))) {
            GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ 
                = (0U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diffc));
            GameBoySoC__DOT__cpu__DOT__u_alu_io_out 
                = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diffc));
        } else if ((4U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))) {
            GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ 
                = (0U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r));
            GameBoySoC__DOT__cpu__DOT__u_alu_io_out 
                = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r));
        } else if ((5U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))) {
            GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ 
                = (0U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_1));
            GameBoySoC__DOT__cpu__DOT__u_alu_io_out 
                = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_1));
        } else if ((6U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))) {
            GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ 
                = (0U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_2));
            GameBoySoC__DOT__cpu__DOT__u_alu_io_out 
                = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_2));
        } else if ((7U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))) {
            GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ 
                = (0U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diff));
            GameBoySoC__DOT__cpu__DOT__u_alu_io_out 
                = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a));
        } else if ((8U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))) {
            GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ 
                = (0U == (0xffU & ((IData)(1U) + (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a))));
            GameBoySoC__DOT__cpu__DOT__u_alu_io_out 
                = (0xffU & ((IData)(1U) + (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a)));
        } else {
            GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ 
                = ((9U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                   & (0U == (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a) 
                                      - (IData)(1U)))));
            GameBoySoC__DOT__cpu__DOT__u_alu_io_out 
                = (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_a) 
                            - (9U == (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op))));
        }
    }
    GameBoySoC__DOT__cpu__DOT___GEN_270 = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                            : 0U);
    GameBoySoC__DOT__cpu__DOT___GEN_1696 = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                             ? 0U : 
                                            ((0x76U 
                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                              ? 0U : 
                                             ((1U == 
                                               (0xcfU 
                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                               ? 0U
                                               : ((3U 
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
                                                    ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                                                      ? 0U
                                                      : 
                                                     ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
                                                       ? 0U
                                                       : 
                                                      (0xffU 
                                                       & ((0x34U 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                           ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_140)
                                                           : 
                                                          ((0x35U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                            ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_140)
                                                            : 
                                                           ((IData)(GameBoySoC__DOT__cpu__DOT___u_T_89)
                                                             ? 0U
                                                             : 
                                                            ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)
                                                              ? 0U
                                                              : 
                                                             ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
                                                               ? (IData)(GameBoySoC__DOT__cpu__DOT___u_T_103)
                                                               : 
                                                              ((0x36U 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                ? 
                                                               ((0U 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                 : 0U)
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
                                                                   ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_270)
                                                                   : 
                                                                  ((0x32U 
                                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                    ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_270)
                                                                    : 
                                                                   ((0xf2U 
                                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                     ? 0U
                                                                     : 
                                                                    ((0xe2U 
                                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                      ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_270)
                                                                      : 
                                                                     ((0xe0U 
                                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                       ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_270)
                                                                       : 
                                                                      ((0xf0U 
                                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                        ? 0U
                                                                        : 
                                                                       ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                                         ? 0U
                                                                         : 
                                                                        ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h504a3c3c__0)
                                                                          ? 0U
                                                                          : 
                                                                         ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)
                                                                           ? 0U
                                                                           : 
                                                                          ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)
                                                                            ? 0U
                                                                            : 
                                                                           ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)
                                                                             ? 0U
                                                                             : 
                                                                            ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0)
                                                                              ? 0U
                                                                              : 
                                                                             ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)
                                                                               ? 0U
                                                                               : 
                                                                              ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)
                                                                                ? 0U
                                                                                : 
                                                                               ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hca3a8028__0)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xc6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xd6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xe6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xeeU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xf6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xfeU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x18U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x10U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xc5U 
                                                                                == 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                                 ? 
                                                                                ((IData)(GameBoySoC__DOT__cpu__DOT__u_regPair) 
                                                                                >> 8U)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT__u_regPair)
                                                                                 : 0U))
                                                                                 : 
                                                                                ((0xc1U 
                                                                                == 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xcdU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_424)
                                                                                 : 
                                                                                ((0xc9U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xd9U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xc7U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_424)
                                                                                 : 
                                                                                ((0xfbU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xf3U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x20U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xc2U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xc4U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? 
                                                                                ((IData)(GameBoySoC__DOT__cpu__DOT__u_condition)
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_424)
                                                                                 : 0U)
                                                                                 : 
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xc3U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x37U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x3fU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x2fU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x27U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xfaU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xeaU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                                                 : 0U)
                                                                                 : 
                                                                                ((8U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                                 ? 
                                                                                ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                                                                                >> 8U)
                                                                                 : 0U))
                                                                                 : 0U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__vram_MPORT_1_data 
        = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
            ? 0U : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                     ? 0U : ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                              ? 0U : ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                       ? 0U : ((5U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                ? 0U
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                    ? 
                                                   ((0U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                     ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1696)
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                      ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1696)
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                       ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1696)
                                                       : 
                                                      ((3U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                        ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1696)
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                         ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1696)
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
                                                           : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1696))
                                                          : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1696)))))))
                                                    : 0U))))));
    if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
        GameBoySoC__DOT__cpu__DOT___GEN_268 = GameBoySoC__DOT__cpu__DOT__u_HL;
        GameBoySoC__DOT__cpu__DOT___GEN_286 = (0xff00U 
                                               | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        GameBoySoC__DOT__cpu__DOT___GEN_300 = (0xff00U 
                                               | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8));
    } else {
        GameBoySoC__DOT__cpu__DOT___GEN_268 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_286 = 0U;
        GameBoySoC__DOT__cpu__DOT___GEN_300 = 0U;
    }
    GameBoySoC__DOT__cpu__DOT___GEN_1691 = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                             ? 0U : 
                                            ((0x76U 
                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                              ? 0U : 
                                             ((1U == 
                                               (0xcfU 
                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                               ? 0U
                                               : ((3U 
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
                                                    ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                                                      ? 0U
                                                      : 
                                                     ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
                                                       ? 0U
                                                       : 
                                                      (0xffffU 
                                                       & ((0x34U 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                           ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_131)
                                                           : 
                                                          ((0x35U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                            ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_131)
                                                            : 
                                                           ((IData)(GameBoySoC__DOT__cpu__DOT___u_T_89)
                                                             ? 0U
                                                             : 
                                                            ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)
                                                              ? 0U
                                                              : 
                                                             ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
                                                               ? (IData)(GameBoySoC__DOT__cpu__DOT__u_HL)
                                                               : 
                                                              ((0x36U 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                ? 
                                                               ((0U 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT__u_HL)
                                                                 : 0U)
                                                                : 
                                                               ((0x2aU 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_268)
                                                                 : 
                                                                ((0x3aU 
                                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                  ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_268)
                                                                  : 
                                                                 ((0x22U 
                                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                   ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_268)
                                                                   : 
                                                                  ((0x32U 
                                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                    ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_268)
                                                                    : 
                                                                   ((0xf2U 
                                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                     ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_286)
                                                                     : 
                                                                    ((0xe2U 
                                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                      ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_286)
                                                                      : 
                                                                     ((0xe0U 
                                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                       ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_300)
                                                                       : 
                                                                      ((0xf0U 
                                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                        ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_300)
                                                                        : 
                                                                       ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                                         ? (IData)(GameBoySoC__DOT__cpu__DOT__u_HL)
                                                                         : 
                                                                        ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h504a3c3c__0)
                                                                          ? 0U
                                                                          : 
                                                                         ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)
                                                                           ? 0U
                                                                           : 
                                                                          ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)
                                                                            ? 0U
                                                                            : 
                                                                           ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)
                                                                             ? 0U
                                                                             : 
                                                                            ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0)
                                                                              ? 0U
                                                                              : 
                                                                             ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)
                                                                               ? 0U
                                                                               : 
                                                                              ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)
                                                                                ? 0U
                                                                                : 
                                                                               ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hca3a8028__0)
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xc6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xd6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xe6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xeeU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xf6U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xfeU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x18U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x10U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xc5U 
                                                                                == 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_356)
                                                                                 : 
                                                                                ((0xc1U 
                                                                                == 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_396)
                                                                                 : 
                                                                                ((0xcdU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_356)
                                                                                 : 
                                                                                ((0xc9U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_396)
                                                                                 : 
                                                                                ((0xd9U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_396)
                                                                                 : 
                                                                                ((0xc7U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_356)
                                                                                 : 
                                                                                ((0xfbU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xf3U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x20U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xc2U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xc4U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? 
                                                                                ((IData)(GameBoySoC__DOT__cpu__DOT__u_condition)
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_356)
                                                                                 : 0U)
                                                                                 : 
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? 
                                                                                ((IData)(GameBoySoC__DOT__cpu__DOT__u_condition)
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_396)
                                                                                 : 0U)
                                                                                 : 
                                                                                ((0xc3U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x37U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x3fU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x2fU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x27U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xfaU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_546)
                                                                                 : 
                                                                                ((0xeaU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_546)
                                                                                 : 
                                                                                ((8U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? 
                                                                                ((0U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16)
                                                                                 : 
                                                                                ((1U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                                                 ? 
                                                                                ((IData)(1U) 
                                                                                + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16))
                                                                                 : 0U))
                                                                                 : 0U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address 
        = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)
            : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)
                : ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)
                    : ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)
                        : ((5U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)
                            : ((4U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                ? ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                    ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1691)
                                    : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                        ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1691)
                                        : ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                            ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1691)
                                            : ((3U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1691)
                                                : (
                                                   (5U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                    ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1691)
                                                    : 
                                                   ((4U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                     ? 
                                                    ((0xcbU 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                      ? 
                                                     ((3U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                       ? (IData)(GameBoySoC__DOT__cpu__DOT__u_HL)
                                                       : 
                                                      ((1U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                        ? 
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                                         ? (IData)(GameBoySoC__DOT__cpu__DOT__u_HL)
                                                         : 0U)
                                                        : 0U))
                                                      : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1691))
                                                     : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1691)))))))
                                : 0U))))));
    vlSelf->GameBoySoC__DOT__cpu_io_memRead = ((0U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                                               | ((1U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                                                  | ((2U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                                                     | ((3U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                                                        | ((5U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                                                           | ((4U 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state)) 
                                                              & ((0U 
                                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                                  ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1692)
                                                                  : 
                                                                 ((1U 
                                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                                   ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1692)
                                                                   : 
                                                                  ((2U 
                                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                                    ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1692)
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                                     ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1692)
                                                                     : 
                                                                    ((5U 
                                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                                      ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1692)
                                                                      : 
                                                                     ((4U 
                                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                                       ? 
                                                                      ((0xcbU 
                                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                        ? 
                                                                       ((1U 
                                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
                                                                        & (6U 
                                                                           == 
                                                                           (7U 
                                                                            & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2))))
                                                                        : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1692))
                                                                       : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1692)))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_write 
        = ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
           & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
              & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                 & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                    & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                       & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                          & ((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                             & ((0xe000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                                & ((0xfe00U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                                   & ((0xfea0U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                                      & ((0xff00U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                                         & ((0x50U 
                                             != (0xffffU 
                                                 & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address) 
                                                    - (IData)(0xff00U)))) 
                                            & (0xff80U 
                                               > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))))))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_398 
        = ((0x6000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
            : ((0x8000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                : ((0xa000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                    : ((0xc000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                        : ((0xe000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                            : ((0xfe00U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                                : ((0xfea0U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                                    : ((0xff00U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                                        : ((0xff80U 
                                            > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                                            : ((0xffffU 
                                                > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)
                                                : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__vram_MPORT_1_data)))))))))));
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_108 
        = ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
           & (0xa000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)));
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_114 
        = ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
           & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
              & ((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                 & (0xe000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))));
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_117 
        = ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
           & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
              & ((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                 & ((0xe000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                    & (0xfe00U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))))));
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_120 
        = ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
           & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
              & ((0xc000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                 & ((0xe000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                    & ((0xfe00U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                       & (0xfea0U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))))));
    GameBoySoC__DOT__memory__DOT__bootRom_io_valid 
        = ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRomEnable) 
           & (0x100U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)));
    if (vlSelf->GameBoySoC__DOT__cpu_io_memWrite) {
        if ((0x2000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))) {
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_502 
                = vlSelf->GameBoySoC__DOT__memory__DOT__bootRomEnable;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0x4000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))) {
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_502 
                = vlSelf->GameBoySoC__DOT__memory__DOT__bootRomEnable;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0x6000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))) {
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_502 
                = vlSelf->GameBoySoC__DOT__memory__DOT__bootRomEnable;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0x8000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))) {
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_502 
                = vlSelf->GameBoySoC__DOT__memory__DOT__bootRomEnable;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0xa000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))) {
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_502 
                = vlSelf->GameBoySoC__DOT__memory__DOT__bootRomEnable;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0xc000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))) {
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_502 
                = vlSelf->GameBoySoC__DOT__memory__DOT__bootRomEnable;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0xe000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))) {
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_502 
                = vlSelf->GameBoySoC__DOT__memory__DOT__bootRomEnable;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0xfe00U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))) {
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_502 
                = vlSelf->GameBoySoC__DOT__memory__DOT__bootRomEnable;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0xfea0U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))) {
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_502 
                = vlSelf->GameBoySoC__DOT__memory__DOT__bootRomEnable;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0xff00U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))) {
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_502 
                = vlSelf->GameBoySoC__DOT__memory__DOT__bootRomEnable;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        } else if ((0xff80U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))) {
            if ((0x50U == (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address) 
                                      - (IData)(0xff00U))))) {
                vlSelf->GameBoySoC__DOT__memory__DOT___GEN_502 
                    = ((0U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__vram_MPORT_1_data)) 
                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRomEnable));
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
            } else {
                vlSelf->GameBoySoC__DOT__memory__DOT___GEN_502 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__bootRomEnable;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__vram_MPORT_1_data;
            }
        } else {
            vlSelf->GameBoySoC__DOT__memory__DOT___GEN_502 
                = vlSelf->GameBoySoC__DOT__memory__DOT__bootRomEnable;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
        }
    } else {
        vlSelf->GameBoySoC__DOT__memory__DOT___GEN_502 
            = vlSelf->GameBoySoC__DOT__memory__DOT__bootRomEnable;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0U;
    }
    GameBoySoC__DOT__memory__DOT___GEN_163 = ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memRead)
                                               ? ((IData)(GameBoySoC__DOT__memory__DOT__bootRom_io_valid)
                                                   ? 0U
                                                   : 
                                                  ((0x8000U 
                                                    > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                    ? 0U
                                                    : 
                                                   ((0xa000U 
                                                     > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                     ? 0U
                                                     : 
                                                    ((0xc000U 
                                                      > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                      ? 0U
                                                      : 
                                                     ((0xe000U 
                                                       > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                       ? 0U
                                                       : 
                                                      ((0xfe00U 
                                                        > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                        ? 0U
                                                        : 
                                                       ((0xfea0U 
                                                         > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                         ? 0U
                                                         : 
                                                        ((0xff00U 
                                                          > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                          ? 0U
                                                          : 
                                                         ((0xff80U 
                                                           > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                           ? 
                                                          (0xffffU 
                                                           & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address) 
                                                              - (IData)(0xff00U)))
                                                           : 0U)))))))))
                                               : 0U);
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr 
        = (0xffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite)
                     ? ((0x2000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                         ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_163)
                         : ((0x4000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                             ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_163)
                             : ((0x6000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                 ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_163)
                                 : ((0x8000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                     ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_163)
                                     : ((0xa000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                         ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_163)
                                         : ((0xc000U 
                                             > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                             ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_163)
                                             : ((0xe000U 
                                                 > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                 ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_163)
                                                 : 
                                                ((0xfe00U 
                                                  > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                  ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_163)
                                                  : 
                                                 ((0xfea0U 
                                                   > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                   ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_163)
                                                   : 
                                                  ((0xff00U 
                                                    > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                    ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_163)
                                                    : 
                                                   ((0xff80U 
                                                     > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                     ? 
                                                    ((0x50U 
                                                      == 
                                                      (0xffffU 
                                                       & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address) 
                                                          - (IData)(0xff00U))))
                                                      ? (IData)(GameBoySoC__DOT__memory__DOT___GEN_163)
                                                      : 
                                                     ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address) 
                                                      - (IData)(0xff00U)))
                                                     : (IData)(GameBoySoC__DOT__memory__DOT___GEN_163))))))))))))
                     : (IData)(GameBoySoC__DOT__memory__DOT___GEN_163)));
    GameBoySoC__DOT__cpu__DOT___u_out_F_T_5 = (((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ) 
                                                << 7U) 
                                               | (((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_flagN) 
                                                   << 6U) 
                                                  | (((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_flagH) 
                                                      << 5U) 
                                                     | (((0U 
                                                          != (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                         & ((1U 
                                                             != (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_op)) 
                                                            & ((2U 
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
                                                                     + 
                                                                     (1U 
                                                                      & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                                         >> 4U)))))
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
                                                        << 4U))));
    GameBoySoC__DOT__cpu__DOT___u_out_F_T_1 = (((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ) 
                                                << 7U) 
                                               | (((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_flagN) 
                                                   << 6U) 
                                                  | (((IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_flagH) 
                                                      << 5U) 
                                                     | (0x10U 
                                                        & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)))));
    GameBoySoC__DOT__cpu__DOT___GEN_138 = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)
                                            : ((1U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_F_T_1)
                                                : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)));
    if ((0U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                      >> 3U)))) {
        GameBoySoC__DOT__cpu__DOT___GEN_75 = GameBoySoC__DOT__cpu__DOT__u_alu_io_out;
        GameBoySoC__DOT__cpu__DOT___GEN_76 = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_77 = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_78 = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_81 = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_79 = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
        GameBoySoC__DOT__cpu__DOT___GEN_80 = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
    } else {
        GameBoySoC__DOT__cpu__DOT___GEN_75 = vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled;
        if ((1U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                          >> 3U)))) {
            GameBoySoC__DOT__cpu__DOT___GEN_76 = GameBoySoC__DOT__cpu__DOT__u_alu_io_out;
            GameBoySoC__DOT__cpu__DOT___GEN_77 = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_78 = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_81 = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_79 = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
            GameBoySoC__DOT__cpu__DOT___GEN_80 = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
        } else {
            GameBoySoC__DOT__cpu__DOT___GEN_76 = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
            if ((2U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                              >> 3U)))) {
                GameBoySoC__DOT__cpu__DOT___GEN_77 
                    = GameBoySoC__DOT__cpu__DOT__u_alu_io_out;
                GameBoySoC__DOT__cpu__DOT___GEN_78 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
                GameBoySoC__DOT__cpu__DOT___GEN_81 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
                GameBoySoC__DOT__cpu__DOT___GEN_79 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
                GameBoySoC__DOT__cpu__DOT___GEN_80 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
            } else {
                GameBoySoC__DOT__cpu__DOT___GEN_77 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
                if ((3U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                  >> 3U)))) {
                    GameBoySoC__DOT__cpu__DOT___GEN_78 
                        = GameBoySoC__DOT__cpu__DOT__u_alu_io_out;
                    GameBoySoC__DOT__cpu__DOT___GEN_81 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
                    GameBoySoC__DOT__cpu__DOT___GEN_79 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
                    GameBoySoC__DOT__cpu__DOT___GEN_80 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
                } else {
                    GameBoySoC__DOT__cpu__DOT___GEN_78 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
                    if ((4U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                      >> 3U)))) {
                        GameBoySoC__DOT__cpu__DOT___GEN_81 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
                        GameBoySoC__DOT__cpu__DOT___GEN_79 
                            = GameBoySoC__DOT__cpu__DOT__u_alu_io_out;
                        GameBoySoC__DOT__cpu__DOT___GEN_80 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
                    } else {
                        if ((5U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                          >> 3U)))) {
                            GameBoySoC__DOT__cpu__DOT___GEN_81 
                                = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
                            GameBoySoC__DOT__cpu__DOT___GEN_80 
                                = GameBoySoC__DOT__cpu__DOT__u_alu_io_out;
                        } else {
                            GameBoySoC__DOT__cpu__DOT___GEN_81 
                                = ((7U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                 >> 3U)))
                                    ? (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_out)
                                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                            GameBoySoC__DOT__cpu__DOT___GEN_80 
                                = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
                        }
                        GameBoySoC__DOT__cpu__DOT___GEN_79 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
                    }
                }
            }
        }
    }
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_128 
        = ((~ (IData)(GameBoySoC__DOT__memory__DOT__bootRom_io_valid)) 
           & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_108));
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_131 
        = ((~ (IData)(GameBoySoC__DOT__memory__DOT__bootRom_io_valid)) 
           & ((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
              & ((0xa000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)) 
                 & (0xc000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))));
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_134 
        = ((~ (IData)(GameBoySoC__DOT__memory__DOT__bootRom_io_valid)) 
           & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_114));
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_137 
        = ((~ (IData)(GameBoySoC__DOT__memory__DOT__bootRom_io_valid)) 
           & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_117));
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_140 
        = ((~ (IData)(GameBoySoC__DOT__memory__DOT__bootRom_io_valid)) 
           & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_120));
    __Vdeeptemp_h9b781e73__0 = ((0x76U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                 ? 0xfeU : ((0x75U 
                                             == (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                             ? 0x83U
                                             : ((0x74U 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                 ? 0x1eU
                                                 : 
                                                ((0x73U 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                  ? 0x7cU
                                                  : 
                                                 ((0x72U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                   ? 0x24U
                                                   : 
                                                  ((0x71U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                    ? 0x13U
                                                    : 
                                                   ((0x70U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                     ? 0xeU
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                      ? 0xf2U
                                                      : 
                                                     ((0x6eU 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                       ? 0x20U
                                                       : 
                                                      ((0x6dU 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                        ? 0x1dU
                                                        : 
                                                       ((0x6cU 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                         ? 0xf7U
                                                         : 
                                                        ((0x6bU 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                          ? 0x20U
                                                          : 
                                                         ((0x6aU 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                           ? 0xdU
                                                           : 
                                                          ((0x69U 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                            ? 0xfaU
                                                            : 
                                                           ((0x68U 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                             ? 0x20U
                                                             : 
                                                            ((0x67U 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                              ? 0x90U
                                                              : 
                                                             ((0x66U 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                               ? 0xfeU
                                                               : 
                                                              ((0x65U 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                ? 0x44U
                                                                : 
                                                               ((0x64U 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                 ? 0xf0U
                                                                 : 
                                                                ((0x63U 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                  ? 0xcU
                                                                  : 
                                                                 ((0x62U 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                   ? 0xeU
                                                                   : 
                                                                  ((0x61U 
                                                                    == 
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                    ? 2U
                                                                    : 
                                                                   ((0x60U 
                                                                     == 
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                     ? 0x1eU
                                                                     : 
                                                                    ((0x5fU 
                                                                      == 
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                      ? 4U
                                                                      : 
                                                                     ((0x5eU 
                                                                       == 
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                       ? 0x40U
                                                                       : 
                                                                      ((0x5dU 
                                                                        == 
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                        ? 0xe0U
                                                                        : 
                                                                       ((0x5cU 
                                                                         == 
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                         ? 0x91U
                                                                         : 
                                                                        ((0x5bU 
                                                                          == 
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                          ? 0x3eU
                                                                          : 
                                                                         ((0x5aU 
                                                                           == 
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                           ? 0x42U
                                                                           : 
                                                                          ((0x59U 
                                                                            == 
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                            ? 0xe0U
                                                                            : 
                                                                           ((0x58U 
                                                                             == 
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                             ? 0x57U
                                                                             : 
                                                                            ((0x57U 
                                                                              == 
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                              ? 0x64U
                                                                              : 
                                                                             ((0x56U 
                                                                               == 
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                               ? 0x3eU
                                                                               : 
                                                                              ((0x55U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                ? 0x67U
                                                                                : 
                                                                               ((0x54U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xf3U
                                                                                 : 
                                                                                ((0x53U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x18U
                                                                                 : 
                                                                                ((0x52U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((0x51U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x2eU
                                                                                 : 
                                                                                ((0x50U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xf9U
                                                                                 : 
                                                                                ((0x4fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((0x4eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xdU
                                                                                 : 
                                                                                ((0x4dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x32U
                                                                                 : 
                                                                                ((0x4cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0x4bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((0x4aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x3dU
                                                                                 : 
                                                                                ((0x49U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xcU
                                                                                 : 
                                                                                ((0x48U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xeU
                                                                                 : 
                                                                                ((0x47U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x99U
                                                                                 : 
                                                                                ((0x46U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x2fU
                                                                                 : 
                                                                                ((0x45U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((0x44U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x99U
                                                                                 : 
                                                                                ((0x43U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x10U
                                                                                 : 
                                                                                ((0x42U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xeaU
                                                                                 : 
                                                                                ((0x41U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x19U
                                                                                 : 
                                                                                ((0x40U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x3eU
                                                                                 : 
                                                                                ((0x3fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xf9U
                                                                                 : 
                                                                                ((0x3eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((0x3dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0x3cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((0x3bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((0x3aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x13U
                                                                                 : 
                                                                                ((0x39U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x1aU
                                                                                 : 
                                                                                ((0x38U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0x37U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0x36U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x35U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xd8U
                                                                                 : 
                                                                                ((0x34U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x11U
                                                                                 : 
                                                                                ((0x33U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xf3U
                                                                                 : 
                                                                                ((0x32U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((0x31U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x34U
                                                                                 : 
                                                                                ((0x30U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xfeU
                                                                                 : 
                                                                                ((0x2fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x7bU
                                                                                 : 
                                                                                ((0x2eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x13U
                                                                                 : 
                                                                                ((0x2dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x2cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x96U
                                                                                 : 
                                                                                ((0x2bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xcdU
                                                                                 : 
                                                                                ((0x2aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0x29U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x95U
                                                                                 : 
                                                                                ((0x28U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xcdU
                                                                                 : 
                                                                                ((0x27U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x1aU
                                                                                 : 
                                                                                ((0x26U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((0x25U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x10U
                                                                                 : 
                                                                                ((0x24U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((0x23U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 1U
                                                                                 : 
                                                                                ((0x22U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 4U
                                                                                 : 
                                                                                ((0x21U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x11U
                                                                                 : 
                                                                                ((0x20U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x47U
                                                                                 : 
                                                                                ((0x1fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xe0U
                                                                                 : 
                                                                                ((0x1eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xfcU
                                                                                 : 
                                                                                ((0x1dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x3eU
                                                                                 : 
                                                                                ((0x1cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x77U
                                                                                 : 
                                                                                ((0x1bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x77U
                                                                                 : 
                                                                                ((0x1aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x3eU
                                                                                 : 
                                                                                ((0x19U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x32U
                                                                                 : 
                                                                                ((0x18U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xe2U
                                                                                 : 
                                                                                ((0x17U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xf3U
                                                                                 : 
                                                                                ((0x16U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x3eU
                                                                                 : 
                                                                                ((0x15U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xcU
                                                                                 : 
                                                                                ((0x14U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xe2U
                                                                                 : 
                                                                                ((0x13U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x32U
                                                                                 : 
                                                                                ((0x12U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((0x11U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x3eU
                                                                                 : 
                                                                                ((0x10U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x11U
                                                                                 : 
                                                                                ((0xfU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xeU
                                                                                 : 
                                                                                ((0xeU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xffU
                                                                                 : 
                                                                                ((0xdU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((0xcU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((0xbU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xfbU
                                                                                 : 
                                                                                ((0xaU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((9U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x7cU
                                                                                 : 
                                                                                ((8U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xcbU
                                                                                 : 
                                                                                ((7U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x32U
                                                                                 : 
                                                                                ((6U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x9fU
                                                                                 : 
                                                                                ((5U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xffU
                                                                                 : 
                                                                                ((4U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((3U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xafU
                                                                                 : 
                                                                                ((2U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xffU
                                                                                 : 
                                                                                ((1U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xfeU
                                                                                 : 0x31U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp_h9ab80022__0 = ((0xecU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                 ? 0x7dU : ((0xebU 
                                             == (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                             ? 0x23U
                                             : ((0xeaU 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                 ? 0xfeU
                                                 : 
                                                ((0xe9U 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                  ? 0x20U
                                                  : 
                                                 ((0xe8U 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                   ? 0xbeU
                                                   : 
                                                  ((0xe7U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                    ? 0x13U
                                                    : 
                                                   ((0xe6U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                     ? 0x1aU
                                                     : 
                                                    ((0xe5U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                      ? 0U
                                                      : 
                                                     ((0xe4U 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                       ? 0xa8U
                                                       : 
                                                      ((0xe3U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                        ? 0x11U
                                                        : 
                                                       ((0xe2U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                         ? 1U
                                                         : 
                                                        ((0xe1U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                          ? 4U
                                                          : 
                                                         ((0xe0U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                           ? 0x21U
                                                           : 
                                                          ((0xdfU 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                            ? 0x3cU
                                                            : 
                                                           ((0xdeU 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                             ? 0x42U
                                                             : 
                                                            ((0xddU 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                              ? 0xa5U
                                                              : 
                                                             ((0xdcU 
                                                               == 
                                                               (0xffU 
                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                               ? 0xb9U
                                                               : 
                                                              ((0xdbU 
                                                                == 
                                                                (0xffU 
                                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                ? 0xa5U
                                                                : 
                                                               ((0xdaU 
                                                                 == 
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                 ? 0xb9U
                                                                 : 
                                                                ((0xd9U 
                                                                  == 
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                  ? 0x42U
                                                                  : 
                                                                 ((0xd8U 
                                                                   == 
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                   ? 0x3cU
                                                                   : 
                                                                  ((0xd7U 
                                                                    == 
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                    ? 0x3eU
                                                                    : 
                                                                   ((0xd6U 
                                                                     == 
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                     ? 0x33U
                                                                     : 
                                                                    ((0xd5U 
                                                                      == 
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                      ? 0xb9U
                                                                      : 
                                                                     ((0xd4U 
                                                                       == 
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                       ? 0xbbU
                                                                       : 
                                                                      ((0xd3U 
                                                                        == 
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                        ? 0x9fU
                                                                        : 
                                                                       ((0xd2U 
                                                                         == 
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                         ? 0x99U
                                                                         : 
                                                                        ((0xd1U 
                                                                          == 
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                          ? 0xdcU
                                                                          : 
                                                                         ((0xd0U 
                                                                           == 
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                           ? 0xddU
                                                                           : 
                                                                          ((0xcfU 
                                                                            == 
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                            ? 0xccU
                                                                            : 
                                                                           ((0xceU 
                                                                             == 
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                             ? 0xecU
                                                                             : 
                                                                            ((0xcdU 
                                                                              == 
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                              ? 0xeU
                                                                              : 
                                                                             ((0xccU 
                                                                               == 
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                               ? 0x6eU
                                                                               : 
                                                                              ((0xcbU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                ? 0x63U
                                                                                : 
                                                                               ((0xcaU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x67U
                                                                                 : 
                                                                                ((0xc9U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xbbU
                                                                                 : 
                                                                                ((0xc8U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xbbU
                                                                                 : 
                                                                                ((0xc7U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x99U
                                                                                 : 
                                                                                ((0xc6U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xd9U
                                                                                 : 
                                                                                ((0xc5U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xddU
                                                                                 : 
                                                                                ((0xc4U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xddU
                                                                                 : 
                                                                                ((0xc3U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xe6U
                                                                                 : 
                                                                                ((0xc2U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x6eU
                                                                                 : 
                                                                                ((0xc1U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xccU
                                                                                 : 
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xdcU
                                                                                 : 
                                                                                ((0xbfU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xeU
                                                                                 : 
                                                                                ((0xbeU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xbdU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x89U
                                                                                 : 
                                                                                ((0xbcU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x88U
                                                                                 : 
                                                                                ((0xbbU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x1fU
                                                                                 : 
                                                                                ((0xbaU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x11U
                                                                                 : 
                                                                                ((0xb9U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 8U
                                                                                 : 
                                                                                ((0xb8U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xb7U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xdU
                                                                                 : 
                                                                                ((0xb6U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xb5U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xcU
                                                                                 : 
                                                                                ((0xb4U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xb3U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x83U
                                                                                 : 
                                                                                ((0xb2U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xb1U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x73U
                                                                                 : 
                                                                                ((0xb0U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 3U
                                                                                 : 
                                                                                ((0xafU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xbU
                                                                                 : 
                                                                                ((0xaeU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0U
                                                                                 : 
                                                                                ((0xadU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xdU
                                                                                 : 
                                                                                ((0xacU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xccU
                                                                                 : 
                                                                                ((0xabU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x66U
                                                                                 : 
                                                                                ((0xaaU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x66U
                                                                                 : 
                                                                                ((0xa9U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xedU
                                                                                 : 
                                                                                ((0xa8U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xceU
                                                                                 : 
                                                                                ((0xa7U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xc9U
                                                                                 : 
                                                                                ((0xa6U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((0xa5U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((0xa4U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((0xa3U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((0xa2U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xf5U
                                                                                 : 
                                                                                ((0xa1U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((0xa0U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0x9fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x17U
                                                                                 : 
                                                                                ((0x9eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x11U
                                                                                 : 
                                                                                ((0x9dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xcbU
                                                                                 : 
                                                                                ((0x9cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xc1U
                                                                                 : 
                                                                                ((0x9bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x17U
                                                                                 : 
                                                                                ((0x9aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x11U
                                                                                 : 
                                                                                ((0x99U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xcbU
                                                                                 : 
                                                                                ((0x98U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xc5U
                                                                                 : 
                                                                                ((0x97U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 4U
                                                                                 : 
                                                                                ((0x96U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0x95U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x4fU
                                                                                 : 
                                                                                ((0x94U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xcbU
                                                                                 : 
                                                                                ((0x93U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x18U
                                                                                 : 
                                                                                ((0x92U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((0x91U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x16U
                                                                                 : 
                                                                                ((0x90U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x4fU
                                                                                 : 
                                                                                ((0x8fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((0x8eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 5U
                                                                                 : 
                                                                                ((0x8dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xd2U
                                                                                 : 
                                                                                ((0x8cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((0x8bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x15U
                                                                                 : 
                                                                                ((0x8aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x42U
                                                                                 : 
                                                                                ((0x89U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xe0U
                                                                                 : 
                                                                                ((0x88U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x90U
                                                                                 : 
                                                                                ((0x87U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x42U
                                                                                 : 
                                                                                ((0x86U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xf0U
                                                                                 : 
                                                                                ((0x85U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xe2U
                                                                                 : 
                                                                                ((0x84U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x87U
                                                                                 : 
                                                                                ((0x83U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x3eU
                                                                                 : 
                                                                                ((0x82U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xcU
                                                                                 : 
                                                                                ((0x81U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xe2U
                                                                                 : 
                                                                                ((0x80U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x7bU
                                                                                 : 
                                                                                ((0x7fU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0x7eU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((0x7dU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x64U
                                                                                 : 
                                                                                ((0x7cU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xfeU
                                                                                 : 
                                                                                ((0x7bU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0xc1U
                                                                                 : 
                                                                                ((0x7aU 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x1eU
                                                                                 : 
                                                                                ((0x79U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 6U
                                                                                 : 
                                                                                ((0x78U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((0x77U 
                                                                                == 
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                                                 ? 0x62U
                                                                                 : __Vdeeptemp_h9b781e73__0))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
    __Vdeeptemp_h03dc5f8c__0 = ((0xeeU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                 ? 0x34U : ((0xedU 
                                             == (0xffU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                             ? 0xfeU
                                             : __Vdeeptemp_h9ab80022__0));
    GameBoySoC__DOT__memory__DOT__bootRom_io_dataOut 
        = ((IData)(GameBoySoC__DOT__memory__DOT__bootRom_io_valid)
            ? ((0xffU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                ? 0x50U : ((0xfeU == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                            ? 0xe0U : ((0xfdU == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                        ? 1U : ((0xfcU 
                                                 == 
                                                 (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                 ? 0x3eU
                                                 : 
                                                ((0xfbU 
                                                  == 
                                                  (0xffU 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                  ? 0xfeU
                                                  : 
                                                 ((0xfaU 
                                                   == 
                                                   (0xffU 
                                                    & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                   ? 0x20U
                                                   : 
                                                  ((0xf9U 
                                                    == 
                                                    (0xffU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                    ? 0x86U
                                                    : 
                                                   ((0xf8U 
                                                     == 
                                                     (0xffU 
                                                      & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                     ? 0xfbU
                                                     : 
                                                    ((0xf7U 
                                                      == 
                                                      (0xffU 
                                                       & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                      ? 0x20U
                                                      : 
                                                     ((0xf6U 
                                                       == 
                                                       (0xffU 
                                                        & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                       ? 5U
                                                       : 
                                                      ((0xf5U 
                                                        == 
                                                        (0xffU 
                                                         & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                        ? 0x23U
                                                        : 
                                                       ((0xf4U 
                                                         == 
                                                         (0xffU 
                                                          & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                         ? 0x86U
                                                         : 
                                                        ((0xf3U 
                                                          == 
                                                          (0xffU 
                                                           & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                          ? 0x78U
                                                          : 
                                                         ((0xf2U 
                                                           == 
                                                           (0xffU 
                                                            & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                           ? 0x19U
                                                           : 
                                                          ((0xf1U 
                                                            == 
                                                            (0xffU 
                                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                            ? 6U
                                                            : 
                                                           ((0xf0U 
                                                             == 
                                                             (0xffU 
                                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                             ? 0xf5U
                                                             : 
                                                            ((0xefU 
                                                              == 
                                                              (0xffU 
                                                               & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                              ? 0x20U
                                                              : __Vdeeptemp_h03dc5f8c__0)))))))))))))))))
            : 0U);
    if ((2U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_798 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_802 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTIMA;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_803 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTMA;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_804 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTAC;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_806 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
    } else {
        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_798 
            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSC;
        if ((4U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_802 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTIMA;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_803 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTMA;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_804 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTAC;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_806 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        } else if ((5U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_802 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_803 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTMA;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_804 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTAC;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_806 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        } else {
            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_802 
                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTIMA;
            if ((6U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_803 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_804 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTAC;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_806 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
            } else {
                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_803 
                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTMA;
                if ((7U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_804 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_806 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                } else {
                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_804 
                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTAC;
                    if ((0xfU == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_806 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                    } else if ((0x10U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_806 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                    } else {
                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_806 
                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10;
                        if ((0x11U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                        } else {
                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807 
                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
                            if ((0x12U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                            } else {
                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 
                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
                                if ((0x13U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                } else {
                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 
                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
                                    if ((0x14U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                    } else {
                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 
                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
                                        if ((0x16U 
                                             == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                        } else {
                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 
                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
                                            if ((0x17U 
                                                 == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                            } else {
                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 
                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
                                                if (
                                                    (0x18U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                } else {
                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 
                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
                                                    if (
                                                        (0x19U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                    } else {
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 
                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
                                                        if (
                                                            (0x1aU 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                        } else {
                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 
                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
                                                            if (
                                                                (0x1bU 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                            } else {
                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 
                                                                    = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
                                                                if (
                                                                    (0x1cU 
                                                                     == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                } else {
                                                                    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 
                                                                        = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
                                                                    if (
                                                                        (0x1dU 
                                                                         == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                    } else {
                                                                        vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 
                                                                            = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
                                                                        if (
                                                                            (0x1eU 
                                                                             == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                        } else {
                                                                            vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
                                                                            if (
                                                                                (0x20U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                            } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
                                                                                if (
                                                                                (0x21U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
                                                                                if (
                                                                                (0x22U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
                                                                                if (
                                                                                (0x23U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
                                                                                if (
                                                                                (0x24U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
                                                                                if (
                                                                                (0x25U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
                                                                                if (
                                                                                (0x26U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
                                                                                if (
                                                                                (0x40U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
                                                                                if (
                                                                                (0x41U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
                                                                                if (
                                                                                (0x42U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
                                                                                if (
                                                                                (0x43U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
                                                                                if (
                                                                                (0x44U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else if (
                                                                                (0x45U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
                                                                                if (
                                                                                (0x46U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
                                                                                if (
                                                                                (0x47U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
                                                                                if (
                                                                                (0x48U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
                                                                                if (
                                                                                (0x49U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
                                                                                if (
                                                                                (0x4aU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
                                                                                if (
                                                                                (0x4bU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))) {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
                                                                                } else {
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 
                                                                                = vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
                                                                                vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 
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
                }
            }
        }
    }
    GameBoySoC__DOT__memory__DOT__ioRegs_io_readData 
        = ((0U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regP1)
            : ((1U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSB)
                : ((2U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSC)
                    : ((4U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV)
                        : ((5U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTIMA)
                            : ((6U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTMA)
                                : ((7U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTAC)
                                    : ((0xfU == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF)
                                        : ((0x10U == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10)
                                            : ((0x11U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11)
                                                : (
                                                   (0x12U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12)
                                                    : 
                                                   ((0x13U 
                                                     == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13)
                                                     : 
                                                    ((0x14U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14)
                                                      : 
                                                     ((0x16U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                       ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21)
                                                       : 
                                                      ((0x17U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                        ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22)
                                                        : 
                                                       ((0x18U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23)
                                                         : 
                                                        ((0x19U 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr))
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24)
                                                          : 
                                                         ((0x1aU 
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
                                                                           ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__ly)
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
                                                                                 : 0xffU))))))))))))))))))))))))))))))))))))))))));
    vlSelf->GameBoySoC__DOT__cpu_io_memReadData = ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memRead)
                                                    ? 
                                                   ((IData)(GameBoySoC__DOT__memory__DOT__bootRom_io_valid)
                                                     ? 
                                                    ((IData)(GameBoySoC__DOT__memory__DOT__bootRom_io_valid)
                                                      ? (IData)(GameBoySoC__DOT__memory__DOT__bootRom_io_dataOut)
                                                      : 0U)
                                                     : 
                                                    ((0x8000U 
                                                      > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                      ? 
                                                     vlSelf->GameBoySoC__DOT__memory__DOT__rom
                                                     [vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr_pipe_0]
                                                      : 
                                                     ((0xa000U 
                                                       > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                       ? 
                                                      vlSelf->GameBoySoC__DOT__memory__DOT__vram
                                                      [vlSelf->GameBoySoC__DOT__memory__DOT__vram_rdata_MPORT_addr_pipe_0]
                                                       : 
                                                      ((0xc000U 
                                                        > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                        ? 
                                                       ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ramEnabled)
                                                         ? 
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__extRam
                                                        [vlSelf->GameBoySoC__DOT__memory__DOT__extRam_rdata_MPORT_1_addr_pipe_0]
                                                         : 0xffU)
                                                        : 
                                                       ((0xe000U 
                                                         > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                         ? 
                                                        vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                                        [vlSelf->GameBoySoC__DOT__memory__DOT__wram_rdata_MPORT_2_addr_pipe_0]
                                                         : 
                                                        ((0xfe00U 
                                                          > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                          ? 
                                                         vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                                         [vlSelf->GameBoySoC__DOT__memory__DOT__wram_rdata_MPORT_3_addr_pipe_0]
                                                          : 
                                                         ((0xfea0U 
                                                           > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                           ? 
                                                          ((0x9fU 
                                                            >= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__oam_rdata_MPORT_4_addr_pipe_0))
                                                            ? 
                                                           vlSelf->GameBoySoC__DOT__memory__DOT__oam
                                                           [vlSelf->GameBoySoC__DOT__memory__DOT__oam_rdata_MPORT_4_addr_pipe_0]
                                                            : 0U)
                                                           : 
                                                          ((0xff00U 
                                                            > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                            ? 0xffU
                                                            : 
                                                           ((0xff80U 
                                                             > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                             ? 
                                                            ((0x44U 
                                                              == 
                                                              (0xffffU 
                                                               & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address) 
                                                                  - (IData)(0xff00U))))
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__ly)
                                                              : 
                                                             ((0x50U 
                                                               == 
                                                               (0xffffU 
                                                                & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address) 
                                                                   - (IData)(0xff00U))))
                                                               ? 
                                                              (1U 
                                                               & (~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRomEnable)))
                                                               : (IData)(GameBoySoC__DOT__memory__DOT__ioRegs_io_readData)))
                                                             : 
                                                            ((0xffffU 
                                                              > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))
                                                              ? 
                                                             ((0x7eU 
                                                               >= 
                                                               (0x7fU 
                                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address)))
                                                               ? 
                                                              vlSelf->GameBoySoC__DOT__memory__DOT__hram
                                                              [
                                                              (0x7fU 
                                                               & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address))]
                                                               : 0U)
                                                              : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__regIE)))))))))))
                                                    : 0U);
    GameBoySoC__DOT__cpu__DOT___GEN_248 = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                            : ((1U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)
                                                : (
                                                   (2U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)
                                                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled))));
    if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
        GameBoySoC__DOT__cpu__DOT___GEN_398 = vlSelf->GameBoySoC__DOT__cpu_io_memReadData;
        GameBoySoC__DOT__cpu__DOT___GEN_133 = ((2U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)
                                                : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8));
        GameBoySoC__DOT__cpu__DOT___GEN_443 = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
    } else {
        GameBoySoC__DOT__cpu__DOT___GEN_398 = vlSelf->GameBoySoC__DOT__cpu__DOT__imm8;
        if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
            GameBoySoC__DOT__cpu__DOT___GEN_133 = (
                                                   (2U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                                    ? (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_out)
                                                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8));
            GameBoySoC__DOT__cpu__DOT___GEN_443 = (
                                                   ((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8));
        } else {
            GameBoySoC__DOT__cpu__DOT___GEN_133 = vlSelf->GameBoySoC__DOT__cpu__DOT__imm8;
            GameBoySoC__DOT__cpu__DOT___GEN_443 = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        }
    }
    if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if ((1U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        if ((0U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                          >> 4U)))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
                = (0xffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16) 
                            >> 8U));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        } else {
            if ((1U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                              >> 4U)))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                    = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                    = (0xffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16) 
                                >> 8U));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
            } else {
                if ((2U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                  >> 4U)))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                        = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                        = (0xffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16) 
                                    >> 8U));
                } else {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                        = (0xffffU & ((3U == (3U & 
                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                               >> 4U)))
                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16)
                                       : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                }
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
            }
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        }
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if ((3U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        if ((0U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                          >> 4U)))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_result));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
                = (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_result) 
                            >> 8U));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        } else {
            if ((1U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                              >> 4U)))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                    = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                    = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_result));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                    = (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_result) 
                                >> 8U));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
            } else {
                if ((2U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                  >> 4U)))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                        = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                        = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_result));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                        = (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_result) 
                                    >> 8U));
                } else {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                        = (0xffffU & ((3U == (3U & 
                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                               >> 4U)))
                                       ? (IData)(GameBoySoC__DOT__cpu__DOT__u_result)
                                       : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                }
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
            }
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        }
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if ((0xbU == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        if ((0U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                          >> 4U)))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_result_1));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
                = (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_result_1) 
                            >> 8U));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        } else {
            if ((1U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                              >> 4U)))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                    = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                    = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_result_1));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                    = (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_result_1) 
                                >> 8U));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
            } else {
                if ((2U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                  >> 4U)))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                        = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                        = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_result_1));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                        = (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_result_1) 
                                    >> 8U));
                } else {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                        = (0xffffU & ((3U == (3U & 
                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                               >> 4U)))
                                       ? (IData)(GameBoySoC__DOT__cpu__DOT__u_result_1)
                                       : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                }
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
            }
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        }
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if ((9U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = ((0x80U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)) 
               | ((0xfffU < (0xffffU & ((0xfffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_HL)) 
                                        + (0xfffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_operand))))) 
                  << 5U));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_result_2));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_result_2) 
                        >> 8U));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = GameBoySoC__DOT__cpu__DOT___u_out_F_T_1;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_76));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_75));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_78));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_77));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_80));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_79));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_81));
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = GameBoySoC__DOT__cpu__DOT___u_out_F_T_1;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_76));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_75));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_78));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_77));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_80));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_79));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_81));
    } else if ((0x34U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = GameBoySoC__DOT__cpu__DOT___GEN_141;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = GameBoySoC__DOT__cpu__DOT___GEN_138;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if ((0x35U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = GameBoySoC__DOT__cpu__DOT___GEN_141;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = GameBoySoC__DOT__cpu__DOT___GEN_138;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if (GameBoySoC__DOT__cpu__DOT___u_T_89) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        if ((0U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                          >> 3U)))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
                = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___u_T_103));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else {
            if ((1U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                              >> 3U)))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                    = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___u_T_103));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
                if ((2U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                  >> 3U)))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                        = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___u_T_103));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                } else {
                    if ((3U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                      >> 3U)))) {
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___u_T_103));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                    } else {
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
                        if ((4U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                          >> 3U)))) {
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                                = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___u_T_103));
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                        } else {
                            if ((5U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                              >> 3U)))) {
                                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                                    = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___u_T_103));
                                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                            } else {
                                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                                    = (0xffU & ((7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                     >> 3U)))
                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___u_T_103)
                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)));
                            }
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                        }
                    }
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
                }
            }
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        }
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        if ((0U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                          >> 3U)))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else {
            if ((1U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                              >> 3U)))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
                if ((2U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                  >> 3U)))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                } else {
                    if ((3U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                      >> 3U)))) {
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                    } else {
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
                        if ((4U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                          >> 3U)))) {
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8));
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                        } else {
                            if ((5U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                              >> 3U)))) {
                                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8));
                                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                            } else {
                                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                                    = (0xffU & ((7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                     >> 3U)))
                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)));
                            }
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                        }
                    }
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
                }
            }
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        }
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if ((0x36U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = GameBoySoC__DOT__cpu__DOT___GEN_235;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if ((0x2aU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = GameBoySoC__DOT__cpu__DOT___GEN_251;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        } else if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        } else if ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & ((IData)(1U) + (IData)(GameBoySoC__DOT__cpu__DOT__u_HL)));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (0xffU & (((IData)(1U) + (IData)(GameBoySoC__DOT__cpu__DOT__u_HL)) 
                                     >> 8U)));
        } else {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        }
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_248));
    } else if ((0x3aU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = GameBoySoC__DOT__cpu__DOT___GEN_251;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        } else if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        } else if ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_HL) 
                            - (IData)(1U)));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (0xffU & (((IData)(GameBoySoC__DOT__cpu__DOT__u_HL) 
                                      - (IData)(1U)) 
                                     >> 8U)));
        } else {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        }
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_248));
    } else if ((0x22U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & ((IData)(1U) + (IData)(GameBoySoC__DOT__cpu__DOT__u_HL)));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (0xffU & (((IData)(1U) + (IData)(GameBoySoC__DOT__cpu__DOT__u_HL)) 
                                 >> 8U)));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if ((0x32U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT__u_HL) 
                        - (IData)(1U)));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (0xffU & (((IData)(GameBoySoC__DOT__cpu__DOT__u_HL) 
                                  - (IData)(1U)) >> 8U)));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if ((0xf2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = GameBoySoC__DOT__cpu__DOT___GEN_251;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_248));
    } else if ((0xe2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if ((0xe0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if ((0xf0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = GameBoySoC__DOT__cpu__DOT___GEN_251;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_248));
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        if ((0U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                          >> 3U)))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else {
            if ((1U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                              >> 3U)))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
                if ((2U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                  >> 3U)))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                } else {
                    if ((3U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                      >> 3U)))) {
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                    } else {
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
                        if ((4U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                          >> 3U)))) {
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData));
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                        } else {
                            if ((5U == (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                              >> 3U)))) {
                                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData));
                                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                            } else {
                                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                                    = (0xffU & ((7U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                                     >> 3U)))
                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)
                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)));
                            }
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                        }
                    }
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
                }
            }
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        }
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h504a3c3c__0) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = GameBoySoC__DOT__cpu__DOT___u_out_F_T_5;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_out));
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = GameBoySoC__DOT__cpu__DOT___u_out_F_T_5;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_out));
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = GameBoySoC__DOT__cpu__DOT___u_out_F_T_5;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_out));
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = GameBoySoC__DOT__cpu__DOT___u_out_F_T_5;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_out));
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = GameBoySoC__DOT__cpu__DOT___u_out_F_T_5;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_out));
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = GameBoySoC__DOT__cpu__DOT___u_out_F_T_5;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_out));
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = GameBoySoC__DOT__cpu__DOT___u_out_F_T_5;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_out));
    } else if (GameBoySoC__DOT__cpu__DOT____VdfgTmp_hca3a8028__0) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = GameBoySoC__DOT__cpu__DOT___u_out_F_T_5;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if ((0xc6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = GameBoySoC__DOT__cpu__DOT___u_out_F_T_5;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_out));
    } else if ((0xd6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = GameBoySoC__DOT__cpu__DOT___u_out_F_T_5;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_out));
    } else if ((0xe6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = GameBoySoC__DOT__cpu__DOT___u_out_F_T_5;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_out));
    } else if ((0xeeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = GameBoySoC__DOT__cpu__DOT___u_out_F_T_5;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_out));
    } else if ((0xf6U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = GameBoySoC__DOT__cpu__DOT___u_out_F_T_5;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_alu_io_out));
    } else if ((0xfeU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = GameBoySoC__DOT__cpu__DOT___u_out_F_T_5;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if ((0x18U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = GameBoySoC__DOT__cpu__DOT___u_out_PC_T_4;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if ((0x10U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = (3U 
                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if ((0xc5U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
            = (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_359));
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = GameBoySoC__DOT__cpu__DOT___GEN_565;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
    } else if ((0xc1U == (0xcfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
        if ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                = (0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled) 
                              + (1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))));
            if ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
                if ((0U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                  >> 4U)))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                } else {
                    if ((1U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                      >> 4U)))) {
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                    } else {
                        if ((2U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                          >> 4U)))) {
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8));
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData));
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                        } else {
                            if ((3U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                              >> 4U)))) {
                                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                                    = vlSelf->GameBoySoC__DOT__cpu__DOT__imm8;
                                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData));
                            } else {
                                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                                    = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
                                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
                            }
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                        }
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
                    }
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
                }
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
            }
        }
        GameBoySoC__DOT__cpu__DOT__u___05Fdone = GameBoySoC__DOT__cpu__DOT___GEN_565;
        GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
    } else {
        if ((0xcdU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                = (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_359));
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_141;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
            GameBoySoC__DOT__cpu__DOT__u___05FPC = 
                ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                  : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                      : ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16)
                          : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled))));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else if ((0xc9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                = (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_441));
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_565;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
            GameBoySoC__DOT__cpu__DOT__u___05FPC = GameBoySoC__DOT__cpu__DOT___GEN_443;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else if ((0xd9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                = (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_441));
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_565;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
            GameBoySoC__DOT__cpu__DOT__u___05FPC = GameBoySoC__DOT__cpu__DOT___GEN_443;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else if ((0xc7U == (0xc7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                = (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_359));
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_565;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
            GameBoySoC__DOT__cpu__DOT__u___05FPC = 
                ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                  : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                      ? (0x38U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                      : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else if ((0xfbU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
            GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else if ((0xf3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
            GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else if ((0x20U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
            GameBoySoC__DOT__cpu__DOT__u___05FPC = 
                ((IData)(GameBoySoC__DOT__cpu__DOT__u_condition)
                  ? (IData)(GameBoySoC__DOT__cpu__DOT___u_out_PC_T_4)
                  : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else if ((0xc2U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
            GameBoySoC__DOT__cpu__DOT__u___05FPC = 
                ((IData)(GameBoySoC__DOT__cpu__DOT__u_condition)
                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16)
                  : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else if ((0xc4U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            if (GameBoySoC__DOT__cpu__DOT__u_condition) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                    = (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_359));
                GameBoySoC__DOT__cpu__DOT__u___05FPC 
                    = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)
                        : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16)
                            : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled)));
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                    = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
                GameBoySoC__DOT__cpu__DOT__u___05FPC 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
            }
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_506;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else if ((0xc0U == (0xe7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))) {
            if (GameBoySoC__DOT__cpu__DOT__u_condition) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                    = (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT___GEN_441));
                GameBoySoC__DOT__cpu__DOT__u___05FPC 
                    = GameBoySoC__DOT__cpu__DOT___GEN_443;
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                    = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
                GameBoySoC__DOT__cpu__DOT__u___05FPC 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
            }
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = GameBoySoC__DOT__cpu__DOT___GEN_506;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else if ((0xc3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
            GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
            GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__imm16;
            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
        } else {
            if ((0x37U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                    = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
                GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                    = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                    = (0x10U | (0x80U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
            } else if ((0x3fU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                    = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
                GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                    = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                    = ((0x80U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)) 
                       | (0x10U & ((~ ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                       >> 4U)) << 4U)));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
            } else if ((0x2fU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                    = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
                GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                    = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                    = (0x60U | (0x90U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                    = (0xffU & (~ (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)));
            } else if ((0x27U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                    = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
                GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                    = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                    = (((0U == (IData)(GameBoySoC__DOT__cpu__DOT__u_adjusted)) 
                        << 7U) | ((0x40U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled)) 
                                  | (0x10U & (((0x40U 
                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))
                                                ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                   >> 4U)
                                                : ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h54193848__0) 
                                                   | ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                      >> 4U))) 
                                              << 4U))));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                    = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_adjusted));
            } else if ((0xfaU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                    = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
                GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                    = GameBoySoC__DOT__cpu__DOT___GEN_235;
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                    = (0xffU & ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                 ? ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)
                                     : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled))
                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)));
            } else {
                if ((0xeaU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                        = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
                    GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                        = GameBoySoC__DOT__cpu__DOT___GEN_235;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                } else if ((8U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                        = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
                    GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                        = GameBoySoC__DOT__cpu__DOT___GEN_565;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                        = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                } else {
                    if ((0xf9U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                            = (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT__u_HL));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                    } else if ((0xf8U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                            = GameBoySoC__DOT__cpu__DOT___u_out_F_T_29;
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                            = (0xffU & (IData)(GameBoySoC__DOT__cpu__DOT___u_out_H_T_8));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                            = (0xffU & ((IData)(GameBoySoC__DOT__cpu__DOT___u_out_H_T_8) 
                                        >> 8U));
                    } else {
                        if ((0xe8U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                                = (0xffffU & (IData)(GameBoySoC__DOT__cpu__DOT___u_out_H_T_8));
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                                = GameBoySoC__DOT__cpu__DOT___u_out_F_T_29;
                        } else {
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP 
                                = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled));
                            vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF 
                                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
                        }
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled));
                        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH 
                            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled));
                    }
                    GameBoySoC__DOT__cpu__DOT__u___05Fdone 
                        = (3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle));
                }
                vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA 
                    = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled));
            }
            GameBoySoC__DOT__cpu__DOT__u___05FPC = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
        }
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled));
    }
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1766 = 
        ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
          ? (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)
          : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16));
    vlSelf->GameBoySoC__DOT__cpu__DOT__needsImm8_new 
        = ((6U == (0xc7U & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData))) 
           | ((0x18U == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
              | ((0x20U == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                 | ((0x28U == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                    | ((0x30U == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                       | ((0x38U == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                          | ((0xc6U == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                             | ((0xd6U == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                | ((0xe0U == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                   | ((0xe6U == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                      | ((0xe8U == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                         | ((0xeeU 
                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                            | ((0xf0U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                               | ((0xf6U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                  | ((0xf8U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                                     | (0xfeU 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)))))))))))))))));
    vlSelf->GameBoySoC__DOT__cpu__DOT__needsImm16_new 
        = ((0xc2U == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
           | ((0xcaU == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
              | ((0xd2U == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                 | ((0xdaU == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                    | ((0xc3U == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                       | ((0xc4U == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                          | ((0xccU == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                             | ((0xd4U == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                | ((0xdcU == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                   | ((0xcdU == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
                                      | ((0xeaU == (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)) 
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
    vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand 
        = (((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)) 
            & (6U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2))))
            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8)
            : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                ? ((6U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)
                    : (IData)(GameBoySoC__DOT__cpu__DOT___cbOut_operand_T_13))
                : (IData)(GameBoySoC__DOT__cpu__DOT___cbOut_operand_T_13)));
    if (vlSelf->GameBoySoC__DOT__cpu__DOT__needsImm8_new) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1715 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1716 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1717 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1718 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1719 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1720 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1721 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1722 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1723 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1724 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
    } else if (vlSelf->GameBoySoC__DOT__cpu__DOT__needsImm16_new) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1715 
            = (0xffffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1716 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1717 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1718 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1719 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1720 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1721 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1722 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1723 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1724 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
    } else {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1715 
            = (0xffffU & ((IData)(1U) + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1716 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1717 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1718 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1719 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__B;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1720 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1721 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__D;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1722 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__E;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1723 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__H;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1724 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__L;
    }
    if ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result 
            = (0xffU & ((0U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                      >> 6U))) ? ((0U 
                                                   == 
                                                   (7U 
                                                    & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                       >> 3U)))
                                                   ? 
                                                  ((0xfeU 
                                                    & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand) 
                                                         >> 7U)))
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (7U 
                                                     & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                        >> 3U)))
                                                    ? 
                                                   ((0x80U 
                                                     & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand) 
                                                        << 7U)) 
                                                    | (0x7fU 
                                                       & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand) 
                                                          >> 1U)))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (7U 
                                                      & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                         >> 3U)))
                                                     ? 
                                                    ((0xfeU 
                                                      & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand) 
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
                                                         & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand) 
                                                            >> 1U)))
                                                      : 
                                                     ((4U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                           >> 3U)))
                                                       ? 
                                                      VL_SHIFTL_III(8,8,32, (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand), 1U)
                                                       : 
                                                      ((5U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                            >> 3U)))
                                                        ? 
                                                       ((0x80U 
                                                         & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand)) 
                                                        | (0x7fU 
                                                           & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand) 
                                                              >> 1U)))
                                                        : 
                                                       ((6U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                             >> 3U)))
                                                         ? 
                                                        ((0xf0U 
                                                          & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand) 
                                                             << 4U)) 
                                                         | (0xfU 
                                                            & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand) 
                                                               >> 4U)))
                                                         : 
                                                        ((7U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                              >> 3U)))
                                                          ? 
                                                         VL_SHIFTR_III(8,8,32, (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand), 1U)
                                                          : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand)))))))))
                         : ((1U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                          >> 6U))) ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand)
                             : ((2U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                              >> 6U)))
                                 ? ((~ ((IData)(1U) 
                                        << (7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                  >> 3U)))) 
                                    & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand))
                                 : ((3U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                  >> 6U)))
                                     ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand) 
                                        | ((IData)(1U) 
                                           << (7U & 
                                               ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                >> 3U))))
                                     : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand))))));
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
    } else {
        vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result 
            = (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand));
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
    }
    if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2112 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2087 
            = GameBoySoC__DOT__cpu__DOT___GEN_1757;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2085 
            = GameBoySoC__DOT__cpu__DOT___GEN_1755;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2084 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1738;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2096 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__IR2;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2082 
            = ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                ? (((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData) 
                    << 8U) | (0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16)))
                : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16));
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2113 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__imm8;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2083 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1737;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2086 
            = GameBoySoC__DOT__cpu__DOT___GEN_1756;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2111 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8;
    } else {
        if ((5U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2112 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2087 
                = GameBoySoC__DOT__cpu__DOT___GEN_1757;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2085 
                = GameBoySoC__DOT__cpu__DOT___GEN_1755;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2084 
                = GameBoySoC__DOT__cpu__DOT___GEN_113;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2096 
                = ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)
                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2));
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2113 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__imm8;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2083 
                = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1737;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2086 
                = GameBoySoC__DOT__cpu__DOT___GEN_1756;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2111 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8;
        } else {
            if ((4U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
                if ((0xcbU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2112 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2087 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
                    if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
                        if (GameBoySoC__DOT__cpu__DOT__cbOut_done) {
                            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2085 = 0U;
                            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2084 = 0U;
                        } else {
                            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2085 
                                = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
                            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2084 
                                = ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                    ? ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                        ? ((6U == (7U 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                            ? 3U : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1808))
                                        : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1808))
                                    : (IData)(GameBoySoC__DOT__cpu__DOT___GEN_1808));
                        }
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2111 
                            = ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result)
                                : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                    ? ((6U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)
                                        : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8))
                                    : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8)));
                    } else {
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2085 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2084 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2111 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8;
                    }
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2113 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__imm8;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2083 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__PC;
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2086 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
                } else {
                    if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2112 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP;
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2087 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP;
                        if (GameBoySoC__DOT__cpu__DOT__u___05Fdone) {
                            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2085 = 0U;
                            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2084 = 0U;
                        } else {
                            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2085 
                                = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
                            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2084 
                                = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                    : ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                        : ((1U == (0xcfU 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                            : ((3U 
                                                == 
                                                (0xcfU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                : (
                                                   (0xbU 
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
                                                    ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                      : 
                                                     ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
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
                                                        ((IData)(GameBoySoC__DOT__cpu__DOT___u_T_89)
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                          : 
                                                         ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                           : 
                                                          ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                            : 
                                                           ((0x36U 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                             : 
                                                            ((0x2aU 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
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
                                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
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
                                                                    ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                      : 
                                                                     ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h504a3c3c__0)
                                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                       : 
                                                                      ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)
                                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                        : 
                                                                       ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)
                                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                         : 
                                                                        ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)
                                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                          : 
                                                                         ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0)
                                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                           : 
                                                                          ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)
                                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                            : 
                                                                           ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)
                                                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                             : 
                                                                            ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hca3a8028__0)
                                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                                                              : 
                                                                             ((0xc6U 
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
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_564)
                                                                                 : 
                                                                                ((0xc1U 
                                                                                == 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_564)
                                                                                 : 
                                                                                ((0xcdU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_134)
                                                                                 : 
                                                                                ((0xc9U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_564)
                                                                                 : 
                                                                                ((0xd9U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_564)
                                                                                 : 
                                                                                ((0xc7U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_564)
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
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_504)
                                                                                 : 
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_504)
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
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_564)
                                                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))))))))))))))))))))))))))))))))))))))))))))))))))))))))))));
                        }
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2113 
                            = ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                : ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                    : ((1U == (0xcfU 
                                               & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                        : ((3U == (0xcfU 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                            : ((0xbU 
                                                == 
                                                (0xcfU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                : (
                                                   (9U 
                                                    == 
                                                    (0xcfU 
                                                     & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                    : 
                                                   ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0)
                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                     : 
                                                    ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0)
                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                      : 
                                                     ((0x34U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                       ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_133)
                                                       : 
                                                      ((0x35U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                        ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_133)
                                                        : 
                                                       ((IData)(GameBoySoC__DOT__cpu__DOT___u_T_89)
                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                         : 
                                                        ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0)
                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                          : 
                                                         ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0)
                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                           : 
                                                          ((0x36U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                            : 
                                                           ((0x2aU 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                             : 
                                                            ((0x3aU 
                                                              == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                              ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                              : 
                                                             ((0x22U 
                                                               == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                               : 
                                                              ((0x32U 
                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                : 
                                                               ((0xf2U 
                                                                 == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                 : 
                                                                ((0xe2U 
                                                                  == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                  : 
                                                                 ((0xe0U 
                                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                   : 
                                                                  ((0xf0U 
                                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                    : 
                                                                   ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0)
                                                                     ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                     : 
                                                                    ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h504a3c3c__0)
                                                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                      : 
                                                                     ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0)
                                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                       : 
                                                                      ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0)
                                                                        ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                        : 
                                                                       ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0)
                                                                         ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                         : 
                                                                        ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0)
                                                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                          : 
                                                                         ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0)
                                                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                           : 
                                                                          ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0)
                                                                            ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                            : 
                                                                           ((IData)(GameBoySoC__DOT__cpu__DOT____VdfgTmp_hca3a8028__0)
                                                                             ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                             : 
                                                                            ((0xc6U 
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
                                                                                 : 
                                                                                ((0x18U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                                 : 
                                                                                ((0x10U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                                 : 
                                                                                ((0xc5U 
                                                                                == 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                                 : 
                                                                                ((0xc1U 
                                                                                == 
                                                                                (0xcfU 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_398)
                                                                                 : 
                                                                                ((0xcdU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                                 : 
                                                                                ((0xc9U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_398)
                                                                                 : 
                                                                                ((0xd9U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_398)
                                                                                 : 
                                                                                ((0xc7U 
                                                                                == 
                                                                                (0xc7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                                 : 
                                                                                ((0xfbU 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                                 : 
                                                                                ((0xf3U 
                                                                                == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                                 : 
                                                                                ((0x20U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                                 : 
                                                                                ((0xc2U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                                 : 
                                                                                ((0xc4U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)
                                                                                 : 
                                                                                ((0xc0U 
                                                                                == 
                                                                                (0xe7U 
                                                                                & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                                                                 ? 
                                                                                ((IData)(GameBoySoC__DOT__cpu__DOT__u_condition)
                                                                                 ? (IData)(GameBoySoC__DOT__cpu__DOT___GEN_398)
                                                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8))
                                                                                 : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8))))))))))))))))))))))))))))))))))))))))))))))))))));
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2083 
                            = GameBoySoC__DOT__cpu__DOT__u___05FPC;
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2086 
                            = GameBoySoC__DOT__cpu__DOT__u___05FPC;
                    } else {
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2112 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2087 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2085 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2084 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2113 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__imm8;
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2083 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__PC;
                        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2086 
                            = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
                    }
                    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2111 
                        = vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8;
                }
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2112 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__SP;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2087 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2085 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__state;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2084 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2113 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__imm8;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2083 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__PC;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2086 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2111 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8;
            }
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2096 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__IR2;
        }
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2082 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__imm16;
    }
}

VL_INLINE_OPT void VGameBoySoC___024root___nba_sequent__TOP__1(VGameBoySoC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__cbOut_F;
    GameBoySoC__DOT__cpu__DOT__cbOut_F = 0;
    // Body
    GameBoySoC__DOT__cpu__DOT__cbOut_F = ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                           ? ((0x80U 
                                               & (((2U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                    ? 
                                                   ((0U 
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
                                                     (0U 
                                                      == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result))
                                                      : 
                                                     ((1U 
                                                       == 
                                                       (7U 
                                                        & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                           >> 3U)))
                                                       ? 
                                                      (0U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result))
                                                       : 
                                                      ((2U 
                                                        == 
                                                        (7U 
                                                         & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                            >> 3U)))
                                                        ? 
                                                       (0U 
                                                        == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result))
                                                        : 
                                                       ((3U 
                                                         == 
                                                         (7U 
                                                          & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                             >> 3U)))
                                                         ? 
                                                        (0U 
                                                         == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result))
                                                         : 
                                                        ((4U 
                                                          == 
                                                          (7U 
                                                           & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                              >> 3U)))
                                                          ? 
                                                         (0U 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result))
                                                          : 
                                                         ((5U 
                                                           == 
                                                           (7U 
                                                            & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                               >> 3U)))
                                                           ? 
                                                          (0U 
                                                           == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result))
                                                           : 
                                                          ((6U 
                                                            == 
                                                            (7U 
                                                             & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                >> 3U)))
                                                            ? 
                                                           (0U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result))
                                                            : 
                                                           ((7U 
                                                             == 
                                                             (7U 
                                                              & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                 >> 3U)))
                                                             ? 
                                                            (0U 
                                                             == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result))
                                                             : 
                                                            ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                             >> 7U)))))))))
                                                     : 
                                                    ((1U 
                                                      == 
                                                      (3U 
                                                       & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                          >> 6U)))
                                                      ? 
                                                     (~ 
                                                      (0xffU 
                                                       & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand) 
                                                          >> 
                                                          (7U 
                                                           & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                              >> 3U)))))
                                                      : 
                                                     ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                      >> 7U)))
                                                    : 
                                                   ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                    >> 7U)) 
                                                  << 7U)) 
                                              | ((0x40U 
                                                  & (((2U 
                                                       == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                       ? 
                                                      ((0U 
                                                        == 
                                                        (3U 
                                                         & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                            >> 6U)))
                                                        ? 
                                                       ((0U 
                                                         != 
                                                         (7U 
                                                          & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                             >> 3U))) 
                                                        & ((1U 
                                                            != 
                                                            (7U 
                                                             & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                >> 3U))) 
                                                           & ((2U 
                                                               != 
                                                               (7U 
                                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                   >> 3U))) 
                                                              & ((3U 
                                                                  != 
                                                                  (7U 
                                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                      >> 3U))) 
                                                                 & ((4U 
                                                                     != 
                                                                     (7U 
                                                                      & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                         >> 3U))) 
                                                                    & ((5U 
                                                                        != 
                                                                        (7U 
                                                                         & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                            >> 3U))) 
                                                                       & ((6U 
                                                                           != 
                                                                           (7U 
                                                                            & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                               >> 3U))) 
                                                                          & ((7U 
                                                                              != 
                                                                              (7U 
                                                                               & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                                >> 3U))) 
                                                                             & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                                                >> 6U)))))))))
                                                        : 
                                                       ((1U 
                                                         != 
                                                         (3U 
                                                          & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                             >> 6U))) 
                                                        & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                           >> 6U)))
                                                       : 
                                                      ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                       >> 6U)) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & (((2U 
                                                          == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                          ? 
                                                         ((0U 
                                                           == 
                                                           (3U 
                                                            & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                               >> 6U)))
                                                           ? 
                                                          ((0U 
                                                            != 
                                                            (7U 
                                                             & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                >> 3U))) 
                                                           & ((1U 
                                                               != 
                                                               (7U 
                                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                   >> 3U))) 
                                                              & ((2U 
                                                                  != 
                                                                  (7U 
                                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                      >> 3U))) 
                                                                 & ((3U 
                                                                     != 
                                                                     (7U 
                                                                      & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                         >> 3U))) 
                                                                    & ((4U 
                                                                        != 
                                                                        (7U 
                                                                         & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                            >> 3U))) 
                                                                       & ((5U 
                                                                           != 
                                                                           (7U 
                                                                            & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                               >> 3U))) 
                                                                          & ((6U 
                                                                              != 
                                                                              (7U 
                                                                               & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                                >> 3U))) 
                                                                             & ((7U 
                                                                                != 
                                                                                (7U 
                                                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                                >> 3U))) 
                                                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                                                >> 5U)))))))))
                                                           : 
                                                          ((1U 
                                                            == 
                                                            (3U 
                                                             & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                >> 6U))) 
                                                           | ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                              >> 5U)))
                                                          : 
                                                         ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                          >> 5U)) 
                                                        << 5U)) 
                                                    | (0x10U 
                                                       & (((2U 
                                                            == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                                            ? 
                                                           ((0U 
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
                                                             ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand) 
                                                              >> 7U)
                                                              : 
                                                             ((1U 
                                                               == 
                                                               (7U 
                                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                   >> 3U)))
                                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand)
                                                               : 
                                                              ((2U 
                                                                == 
                                                                (7U 
                                                                 & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                    >> 3U)))
                                                                ? 
                                                               ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand) 
                                                                >> 7U)
                                                                : 
                                                               ((3U 
                                                                 == 
                                                                 (7U 
                                                                  & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                     >> 3U)))
                                                                 ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand)
                                                                 : 
                                                                ((4U 
                                                                  == 
                                                                  (7U 
                                                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                      >> 3U)))
                                                                  ? 
                                                                 ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand) 
                                                                  >> 7U)
                                                                  : 
                                                                 ((5U 
                                                                   == 
                                                                   (7U 
                                                                    & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                                       >> 3U)))
                                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand)
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
                                                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_operand)
                                                                       : 
                                                                      ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                                       >> 4U)))))))))
                                                             : 
                                                            ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                             >> 4U))
                                                            : 
                                                           ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                            >> 4U)) 
                                                          << 4U)))))
                                           : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled));
    if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2105 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__B;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2090 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1760;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2106 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2091 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1761;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2107 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__D;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2092 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1762;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2108 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__E;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2093 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1763;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2109 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__H;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2094 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1764;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2110 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__L;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2095 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1765;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2103 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2088 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1758;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2104 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2089 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1759;
    } else if ((5U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2105 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__B;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2090 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1760;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2106 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2091 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1761;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2107 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__D;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2092 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1762;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2108 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__E;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2093 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1763;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2109 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__H;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2094 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1764;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2110 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__L;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2095 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1765;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2103 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2088 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1758;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2104 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2089 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1759;
    } else if ((4U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        if ((0xcbU == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))) {
            if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2105 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_B;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2090 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_B;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2106 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_C;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2091 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_C;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2107 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_D;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2092 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_D;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2108 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_E;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2093 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_E;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2109 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_H;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2094 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_H;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2110 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_L;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2095 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_L;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2103 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2088 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2104 
                    = GameBoySoC__DOT__cpu__DOT__cbOut_F;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2089 
                    = GameBoySoC__DOT__cpu__DOT__cbOut_F;
            } else {
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2105 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__B;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2090 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2106 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__C;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2091 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2107 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__D;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2092 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2108 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__E;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2093 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2109 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__H;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2094 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2110 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__L;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2095 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2103 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__A;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2088 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2104 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__F;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2089 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
            }
        } else if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))) {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2105 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2090 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2106 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2091 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2107 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2092 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2108 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2093 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2109 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2094 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2110 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2095 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2103 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2088 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2104 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2089 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF;
        } else {
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2105 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__B;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2090 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2106 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__C;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2091 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2107 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__D;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2092 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2108 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__E;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2093 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2109 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__H;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2094 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2110 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__L;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2095 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2103 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__A;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2088 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2104 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2089 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
        }
    } else {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2105 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__B;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2090 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2106 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2091 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2107 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__D;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2092 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2108 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__E;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2093 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2109 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__H;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2094 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2110 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__L;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2095 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2103 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2088 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2104 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2089 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled;
    }
}
