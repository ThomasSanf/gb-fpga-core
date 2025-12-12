// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGameBoySoC.h for the primary calling header

#include "VGameBoySoC__pch.h"
#include "VGameBoySoC___024root.h"

VL_ATTR_COLD void VGameBoySoC___024root___stl_sequent__TOP__1(VGameBoySoC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root___stl_sequent__TOP__1\n"); );
    // Body
    if ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2103 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__A;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2088 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1758;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2104 
            = vlSelf->GameBoySoC__DOT__cpu__DOT__F;
        vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2089 
            = vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1759;
    } else if ((5U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))) {
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
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2103 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2088 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2104 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_F;
                vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2089 
                    = vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_F;
            } else {
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
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2103 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2088 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2104 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF;
            vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2089 
                = vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF;
        } else {
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

VL_ATTR_COLD void VGameBoySoC___024root___stl_sequent__TOP__0(VGameBoySoC___024root* vlSelf);

VL_ATTR_COLD void VGameBoySoC___024root___eval_stl(VGameBoySoC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VGameBoySoC___024root___stl_sequent__TOP__0(vlSelf);
        VGameBoySoC___024root___stl_sequent__TOP__1(vlSelf);
    }
}

VL_ATTR_COLD void VGameBoySoC___024root___eval_triggers__stl(VGameBoySoC___024root* vlSelf);

VL_ATTR_COLD bool VGameBoySoC___024root___eval_phase__stl(VGameBoySoC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VGameBoySoC___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VGameBoySoC___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VGameBoySoC___024root___dump_triggers__ico(VGameBoySoC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VGameBoySoC___024root___dump_triggers__act(VGameBoySoC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VGameBoySoC___024root___dump_triggers__nba(VGameBoySoC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VGameBoySoC___024root___ctor_var_reset(VGameBoySoC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = 0;
    vlSelf->reset = 0;
    vlSelf->io_dbg_pc = 0;
    vlSelf->io_dbg_opcode = 0;
    vlSelf->io_dbg_a = 0;
    vlSelf->io_dbg_f = 0;
    vlSelf->io_dbg_b = 0;
    vlSelf->io_dbg_c = 0;
    vlSelf->io_dbg_d = 0;
    vlSelf->io_dbg_e = 0;
    vlSelf->io_dbg_h = 0;
    vlSelf->io_dbg_l = 0;
    vlSelf->io_dbg_state = 0;
    vlSelf->io_dbg_tcycle = 0;
    vlSelf->io_dbg_mcycle = 0;
    vlSelf->io_dbg_IR = 0;
    vlSelf->io_dbg_ly = 0;
    vlSelf->io_extRomLoadAddr = 0;
    vlSelf->io_extRomLoadData = 0;
    vlSelf->io_extRomLoadEn = 0;
    vlSelf->io_pixelValid = 0;
    vlSelf->io_pixelX = 0;
    vlSelf->io_pixelY = 0;
    vlSelf->io_pixelColor = 0;
    vlSelf->GameBoySoC__DOT__cpu_io_memRead = 0;
    vlSelf->GameBoySoC__DOT__cpu_io_memWrite = 0;
    vlSelf->GameBoySoC__DOT__cpu_io_memReadData = 0;
    vlSelf->GameBoySoC__DOT__ppu_io_vramRead = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__A = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__F = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__B = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__C = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__D = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__E = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__H = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__L = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__PC = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__SP = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__IR = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__IR2 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__imm8 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__imm16 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__state = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_1 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_81 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_133 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_89 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___u_T_103 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___u_out_PC_T_4 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_398 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_443 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__u_condition = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__u_adjusted = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___tcycle_T_1 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___T_1 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___PC_T_1 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__needsImm8_new = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__needsImm16_new = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1715 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1716 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1717 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1718 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1719 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1720 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1721 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1722 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1723 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1724 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1737 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1738 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___T_4 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1756 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1758 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1759 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1760 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1761 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1762 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1763 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1764 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1765 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___T_6 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1766 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1768 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___T_8 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___T_10 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___T_12 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___T_13 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___cbOut_operand_T_13 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_F = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___T_18 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2082 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2083 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2084 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2085 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2086 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2087 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2088 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2089 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2090 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2091 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2092 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2093 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2094 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2095 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2096 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2103 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2104 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2105 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2106 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2107 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2108 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2109 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2110 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2111 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2112 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2113 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2734558b__0 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h044855b3__0 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hfd0c7d8d__0 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7347a28d__0 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h0f4cf0f6__0 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h504a3c3c__0 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h03c34ea4__0 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h4060f9f5__0 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h7780515d__0 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hb1f2c5d2__0 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h9292fa83__0 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h2973ccb9__0 = 0;
    vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_hca3a8028__0 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_popEnable = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_clear = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__dotCounter = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__vblankIRQ = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT___dotCounter_T_1 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT___lyReg_T_1 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT___T_4 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherDotCount = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__tileNum = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__xPos = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__discardPixels = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__mode = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT___T_9 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_9 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_10 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_11 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_13 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT___fetcherDotCount_T_1 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__scrolledY = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__tileAddr = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_81 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_82 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_85 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_86 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_96 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT___T_25 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT___xPos_T_1 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT___GEN_170 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT____VdfgTmp_h0b25f272__0 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_0 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_1 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_2 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_3 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_4 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_5 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_6 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_7 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_8 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_9 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_10 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_11 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_12 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_13 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_14 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_15 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_128 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_129 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_130 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_131 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_132 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_133 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_134 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_135 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_136 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_137 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_138 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_139 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_140 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_141 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_142 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_143 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___tail_T_1 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___head_T_1 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___count_T_1 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___count_T_3 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_272 = 0;
    vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_273 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__bootRom_io_address = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_addr = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_write = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData = 0;
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->GameBoySoC__DOT__memory__DOT__rom[__Vi0] = 0;
    }
    vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr_pipe_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->GameBoySoC__DOT__memory__DOT__vram[__Vi0] = 0;
    }
    vlSelf->GameBoySoC__DOT__memory__DOT__vram_MPORT_1_data = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__vram_rdata_MPORT_addr_pipe_0 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__vram_io_ppuVramData_MPORT_addr_pipe_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->GameBoySoC__DOT__memory__DOT__extRam[__Vi0] = 0;
    }
    vlSelf->GameBoySoC__DOT__memory__DOT__extRam_rdata_MPORT_1_addr_pipe_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->GameBoySoC__DOT__memory__DOT__wram[__Vi0] = 0;
    }
    vlSelf->GameBoySoC__DOT__memory__DOT__wram_rdata_MPORT_2_addr_pipe_0 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__wram_rdata_MPORT_3_addr_pipe_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 160; ++__Vi0) {
        vlSelf->GameBoySoC__DOT__memory__DOT__oam[__Vi0] = 0;
    }
    vlSelf->GameBoySoC__DOT__memory__DOT__oam_rdata_MPORT_4_addr_pipe_0 = 0;
    for (int __Vi0 = 0; __Vi0 < 127; ++__Vi0) {
        vlSelf->GameBoySoC__DOT__memory__DOT__hram[__Vi0] = 0;
    }
    vlSelf->GameBoySoC__DOT__memory__DOT__bootRomEnable = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ramEnabled = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__regIE = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_108 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_114 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_117 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_120 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_128 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_131 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_134 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_137 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_140 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_398 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT___GEN_502 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT____Vlvbound_h5559fb94__0 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT____Vlvbound_ha6cb93b5__0 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regP1 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSB = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSC = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTIMA = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTMA = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTAC = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__divCounter = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___divCounter_T_1 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_0 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_798 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_802 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_803 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_804 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_806 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837 = 0;
    vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = 0;
}
