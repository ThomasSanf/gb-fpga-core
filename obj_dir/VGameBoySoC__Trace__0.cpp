// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VGameBoySoC__Syms.h"


void VGameBoySoC___024root__trace_chg_0_sub_0(VGameBoySoC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VGameBoySoC___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root__trace_chg_0\n"); );
    // Init
    VGameBoySoC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VGameBoySoC___024root*>(voidSelf);
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VGameBoySoC___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VGameBoySoC___024root__trace_chg_0_sub_0(VGameBoySoC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr),16);
        bufp->chgBit(oldp+1,(vlSelf->GameBoySoC__DOT__cpu_io_memWrite));
        bufp->chgCData(oldp+2,(vlSelf->GameBoySoC__DOT__memory__DOT__wram_MPORT_3_data),8);
        bufp->chgCData(oldp+3,(vlSelf->GameBoySoC__DOT__cpu_io_memReadData),8);
        bufp->chgCData(oldp+4,(vlSelf->GameBoySoC__DOT__memory__DOT__regIE),8);
        bufp->chgCData(oldp+5,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF),8);
        bufp->chgSData(oldp+6,(((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT____VdfgTmp_ha309eb35__0)
                                 ? (0x1fffU & ((0U 
                                                == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState))
                                                ? (
                                                   (((8U 
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
                                                : (
                                                   (2U 
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
        bufp->chgBit(oldp+7,(vlSelf->GameBoySoC__DOT__ppu__DOT__vram_io_read));
        bufp->chgCData(oldp+8,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC),8);
        bufp->chgCData(oldp+9,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY),8);
        bufp->chgCData(oldp+10,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX),8);
        bufp->chgCData(oldp+11,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP),8);
        bufp->chgBit(oldp+12,(vlSelf->GameBoySoC__DOT__ppu__DOT__vblankIRQ));
        bufp->chgBit(oldp+13,(vlSelf->GameBoySoC__DOT__cpu__DOT__IME));
        bufp->chgBit(oldp+14,(vlSelf->GameBoySoC__DOT__cpu__DOT__intr_io_should_irq));
        bufp->chgSData(oldp+15,(((1U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))
                                  ? 0x40U : ((2U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))
                                              ? 0x48U
                                              : ((4U 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))
                                                  ? 0x50U
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))
                                                   ? 0x58U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))
                                                    ? 0x60U
                                                    : 0U)))))),16);
        bufp->chgCData(oldp+16,(((1U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))
                                  ? 0U : ((2U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))
                                           ? 1U : (
                                                   (4U 
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
                                                      : 0U)))))),3);
        bufp->chgCData(oldp+17,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op),4);
        bufp->chgCData(oldp+18,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_a),8);
        bufp->chgCData(oldp+19,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_b),8);
        bufp->chgBit(oldp+20,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_carryIn));
        bufp->chgCData(oldp+21,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_out),8);
        bufp->chgBit(oldp+22,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_flagZ));
        bufp->chgBit(oldp+23,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_flagN));
        bufp->chgBit(oldp+24,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_flagH));
        bufp->chgBit(oldp+25,((1U & ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_op))
                                      ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sum9) 
                                         >> 8U) : (
                                                   (1U 
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
        bufp->chgCData(oldp+26,(vlSelf->GameBoySoC__DOT__cpu__DOT__A),8);
        bufp->chgCData(oldp+27,(vlSelf->GameBoySoC__DOT__cpu__DOT__F),8);
        bufp->chgCData(oldp+28,(vlSelf->GameBoySoC__DOT__cpu__DOT__B),8);
        bufp->chgCData(oldp+29,(vlSelf->GameBoySoC__DOT__cpu__DOT__C),8);
        bufp->chgCData(oldp+30,(vlSelf->GameBoySoC__DOT__cpu__DOT__D),8);
        bufp->chgCData(oldp+31,(vlSelf->GameBoySoC__DOT__cpu__DOT__E),8);
        bufp->chgCData(oldp+32,(vlSelf->GameBoySoC__DOT__cpu__DOT__H),8);
        bufp->chgCData(oldp+33,(vlSelf->GameBoySoC__DOT__cpu__DOT__L),8);
        bufp->chgSData(oldp+34,(vlSelf->GameBoySoC__DOT__cpu__DOT__PC),16);
        bufp->chgSData(oldp+35,(vlSelf->GameBoySoC__DOT__cpu__DOT__SP),16);
        bufp->chgCData(oldp+36,(vlSelf->GameBoySoC__DOT__cpu__DOT__IR),8);
        bufp->chgCData(oldp+37,(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2),8);
        bufp->chgCData(oldp+38,(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8),8);
        bufp->chgSData(oldp+39,(vlSelf->GameBoySoC__DOT__cpu__DOT__imm16),16);
        bufp->chgCData(oldp+40,(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8),8);
        bufp->chgBit(oldp+41,(vlSelf->GameBoySoC__DOT__cpu__DOT__IME_pending));
        bufp->chgSData(oldp+42,(vlSelf->GameBoySoC__DOT__cpu__DOT__PC_sampled),16);
        bufp->chgSData(oldp+43,(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled),16);
        bufp->chgCData(oldp+44,(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled),8);
        bufp->chgCData(oldp+45,(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled),8);
        bufp->chgCData(oldp+46,(vlSelf->GameBoySoC__DOT__cpu__DOT__B_sampled),8);
        bufp->chgCData(oldp+47,(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled),8);
        bufp->chgCData(oldp+48,(vlSelf->GameBoySoC__DOT__cpu__DOT__D_sampled),8);
        bufp->chgCData(oldp+49,(vlSelf->GameBoySoC__DOT__cpu__DOT__E_sampled),8);
        bufp->chgCData(oldp+50,(vlSelf->GameBoySoC__DOT__cpu__DOT__H_sampled),8);
        bufp->chgCData(oldp+51,(vlSelf->GameBoySoC__DOT__cpu__DOT__L_sampled),8);
        bufp->chgCData(oldp+52,(vlSelf->GameBoySoC__DOT__cpu__DOT__state),3);
        bufp->chgCData(oldp+53,(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle),2);
        bufp->chgCData(oldp+54,(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle),3);
        bufp->chgBit(oldp+55,(vlSelf->GameBoySoC__DOT__cpu__DOT__halted));
        bufp->chgBit(oldp+56,(vlSelf->GameBoySoC__DOT__cpu__DOT__canTakeInterrupt));
        bufp->chgCData(oldp+57,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_tmp8),8);
        bufp->chgSData(oldp+58,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL),16);
        bufp->chgCData(oldp+59,((3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                       >> 4U))),4);
        bufp->chgSData(oldp+60,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_result),16);
        bufp->chgSData(oldp+61,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_result_1),16);
        bufp->chgSData(oldp+62,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_operand),16);
        bufp->chgSData(oldp+63,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_result_2),16);
        bufp->chgBit(oldp+64,((0xfffU < (0xffffU & 
                                         ((0xfffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_HL)) 
                                          + (0xfffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_operand)))))));
        bufp->chgCData(oldp+65,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_oldVal),8);
        bufp->chgSData(oldp+66,((0xff00U | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__C_sampled))),16);
        bufp->chgSData(oldp+67,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_regPair),16);
        bufp->chgCData(oldp+68,((0x38U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))),8);
        bufp->chgCData(oldp+69,((3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR) 
                                       >> 3U))),5);
        bufp->chgBit(oldp+70,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_condition));
        bufp->chgBit(oldp+71,((1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                     >> 6U))));
        bufp->chgBit(oldp+72,((1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                     >> 5U))));
        bufp->chgCData(oldp+73,(((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h54193848__0)
                                  ? 0x60U : 0U)),8);
        bufp->chgCData(oldp+74,(((1U & (((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                         >> 5U) | (9U 
                                                   < 
                                                   (0xfU 
                                                    & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled)))))
                                  ? 6U : 0U)),8);
        bufp->chgCData(oldp+75,(((0x10U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))
                                  ? 0x60U : 0U)),8);
        bufp->chgCData(oldp+76,(((0x20U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))
                                  ? 6U : 0U)),8);
        bufp->chgCData(oldp+77,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_correction),8);
        bufp->chgBit(oldp+78,((1U & ((0x40U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled))
                                      ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                         >> 4U) : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT____VdfgTmp_h54193848__0) 
                                                   | ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                                      >> 4U))))));
        bufp->chgCData(oldp+79,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_adjusted),8);
        bufp->chgBit(oldp+80,((1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled) 
                                     >> 7U))));
        bufp->chgCData(oldp+81,(((0xfeU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled) 
                                           << 1U)) 
                                 | (1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                          >> 4U)))),8);
        bufp->chgBit(oldp+82,((1U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled))));
        bufp->chgCData(oldp+83,(((0x80U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                           << 3U)) 
                                 | (0x7fU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__A_sampled) 
                                             >> 1U)))),8);
        bufp->chgSData(oldp+84,(((((0x80U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8))
                                    ? 0xffU : 0U) << 8U) 
                                 | (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8))),16);
        bufp->chgSData(oldp+85,((0x1ffU & ((0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)))),9);
        bufp->chgBit(oldp+86,((1U & (((0xfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)) 
                                      + (0xfU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8))) 
                                     >> 4U))));
        bufp->chgBit(oldp+87,((1U & (((0xffU & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__SP_sampled)) 
                                      + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__imm8)) 
                                     >> 8U))));
        bufp->chgBit(oldp+88,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05Fdone));
        bufp->chgCData(oldp+89,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FC),8);
        bufp->chgCData(oldp+90,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FB),8);
        bufp->chgCData(oldp+91,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FE),8);
        bufp->chgCData(oldp+92,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FD),8);
        bufp->chgCData(oldp+93,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FL),8);
        bufp->chgCData(oldp+94,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FH),8);
        bufp->chgSData(oldp+95,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FSP),16);
        bufp->chgCData(oldp+96,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FF),8);
        bufp->chgCData(oldp+97,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FA),8);
        bufp->chgCData(oldp+98,(((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                  ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                  : ((0x76U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
                                      ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                      : ((1U == (0xcfU 
                                                 & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR)))
                                          ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle)
                                          : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1856))))),3);
        bufp->chgSData(oldp+99,(vlSelf->GameBoySoC__DOT__cpu__DOT__u___05FPC),16);
        bufp->chgBit(oldp+100,(((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
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
                                                      : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1700)))))))))))));
        bufp->chgBit(oldp+101,(((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR))
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
                                                   : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1770))))))))));
        bufp->chgSData(oldp+102,((0xffffU & ((IData)(1U) 
                                             + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__PC)))),16);
        bufp->chgBit(oldp+103,((6U == (0xc7U & (IData)(vlSelf->GameBoySoC__DOT__cpu_io_memReadData)))));
        bufp->chgBit(oldp+104,(vlSelf->GameBoySoC__DOT__cpu__DOT__needsImm8));
        bufp->chgBit(oldp+105,(vlSelf->GameBoySoC__DOT__cpu__DOT__needsImm16));
        bufp->chgCData(oldp+106,((3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+107,((7U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                        >> 3U))),3);
        bufp->chgCData(oldp+108,((7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2))),3);
        bufp->chgBit(oldp+109,((6U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))));
        bufp->chgBit(oldp+110,((1U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                      >> 7U))));
        bufp->chgBit(oldp+111,((1U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8))));
        bufp->chgCData(oldp+112,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result),8);
        bufp->chgBit(oldp+113,((1U & ((0U == (3U & 
                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                               >> 6U)))
                                       ? ((0U == (7U 
                                                  & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                     >> 3U)))
                                           ? ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                              >> 7U)
                                           : ((1U == 
                                               (7U 
                                                & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                   >> 3U)))
                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8)
                                               : ((2U 
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
                                       : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                          >> 4U)))));
        bufp->chgBit(oldp+114,((1U & ((0U == (3U & 
                                              ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                               >> 6U)))
                                       ? (0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result))
                                       : ((1U == (3U 
                                                  & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                     >> 6U)))
                                           ? (~ (0xffU 
                                                 & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__CB_imm8) 
                                                    >> 
                                                    (7U 
                                                     & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                        >> 3U)))))
                                           : ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                              >> 7U))))));
        bufp->chgBit(oldp+115,(((0U != (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                              >> 6U))) 
                                & ((1U != (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                 >> 6U))) 
                                   & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                      >> 6U)))));
        bufp->chgBit(oldp+116,(((0U != (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                              >> 6U))) 
                                & ((1U == (3U & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2) 
                                                 >> 6U))) 
                                   | ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__F_sampled) 
                                      >> 5U)))));
        bufp->chgCData(oldp+117,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_F),8);
        bufp->chgCData(oldp+118,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_B),8);
        bufp->chgCData(oldp+119,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_C),8);
        bufp->chgCData(oldp+120,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_D),8);
        bufp->chgCData(oldp+121,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_E),8);
        bufp->chgCData(oldp+122,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_H),8);
        bufp->chgCData(oldp+123,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_L),8);
        bufp->chgCData(oldp+124,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_A),8);
        bufp->chgCData(oldp+125,(((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                   ? ((6U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_result)
                                       : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2088))
                                   : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_2088))),8);
        bufp->chgCData(oldp+126,(((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__mcycle))
                                   ? ((6U == (7U & (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__IR2)))
                                       ? ((3U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__tcycle))
                                           ? 3U : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_126))
                                       : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_126))
                                   : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_126))),3);
        bufp->chgBit(oldp+127,(vlSelf->GameBoySoC__DOT__cpu__DOT__cbOut_done));
        bufp->chgSData(oldp+128,(((7U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922)
                                   : ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922)
                                       : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922)
                                           : ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922)
                                               : ((3U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922)
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
                                                      : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922))
                                                     : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1922))))))))),16);
        bufp->chgBit(oldp+129,(((7U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
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
                                                 : 
                                                ((5U 
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
                                                   : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1926))))))))));
        bufp->chgCData(oldp+130,(((7U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927)
                                   : ((0U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                       ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927)
                                       : ((1U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                           ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927)
                                           : ((2U == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                               ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927)
                                               : ((3U 
                                                   == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                   ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__state))
                                                    ? (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927)
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
                                                      : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927))
                                                     : (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT___GEN_1927))))))))),8);
        bufp->chgCData(oldp+131,(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active),8);
        bufp->chgBit(oldp+132,((0U != (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__intr__DOT__active))));
        bufp->chgSData(oldp+133,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_a),9);
        bufp->chgSData(oldp+134,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_b),9);
        bufp->chgSData(oldp+135,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sum9),9);
        bufp->chgSData(oldp+136,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__sumc9),9);
        bufp->chgSData(oldp+137,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diff9),9);
        bufp->chgSData(oldp+138,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__diffc9),9);
        bufp->chgCData(oldp+139,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__io_flagH_aNib),4);
        bufp->chgCData(oldp+140,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__io_flagH_bNib),4);
        bufp->chgCData(oldp+141,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r),8);
        bufp->chgCData(oldp+142,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_1),8);
        bufp->chgCData(oldp+143,(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu__DOT__r_2),8);
        bufp->chgCData(oldp+144,((0xffU & ((IData)(1U) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_a)))),8);
        bufp->chgCData(oldp+145,((0xffU & ((IData)(vlSelf->GameBoySoC__DOT__cpu__DOT__u_alu_io_a) 
                                           - (IData)(1U)))),8);
        bufp->chgCData(oldp+146,((0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434))),8);
        bufp->chgBit(oldp+147,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_write));
        bufp->chgCData(oldp+148,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData),8);
        bufp->chgCData(oldp+149,(((0U == (0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                   ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regP1)
                                   : ((1U == (0xffU 
                                              & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                       ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSB)
                                       : ((2U == (0xffU 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_434)))
                                           ? (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSC)
                                           : (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_43))))),8);
        bufp->chgCData(oldp+150,(vlSelf->GameBoySoC__DOT__memory__DOT__rom
                                 [vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr]),8);
        bufp->chgBit(oldp+151,(((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_4))));
        bufp->chgSData(oldp+152,((0xffffU & ((IData)(0x4000U) 
                                             + ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr) 
                                                - (IData)(0xc000U))))),16);
        bufp->chgCData(oldp+153,(vlSelf->GameBoySoC__DOT__memory__DOT__rom
                                 [(0xffffU & ((IData)(0x4000U) 
                                              + ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr) 
                                                 - (IData)(0xc000U))))]),8);
        bufp->chgBit(oldp+154,(((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_4)) 
                                   & (0xe000U > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))))));
        bufp->chgSData(oldp+155,((0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))),13);
        bufp->chgCData(oldp+156,(vlSelf->GameBoySoC__DOT__memory__DOT__wram
                                 [(0x1fffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))]),8);
        bufp->chgBit(oldp+157,(((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_4)) 
                                   & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_46)))));
        bufp->chgBit(oldp+158,(((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
                                & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                   & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                      & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                         & ((0x8000U 
                                             <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                            & ((0xa000U 
                                                <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                               & ((0xc000U 
                                                   <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                                  & (0xe000U 
                                                     > (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)))))))))));
        bufp->chgBit(oldp+159,(((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
                                & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                   & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                      & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                         & ((0x8000U 
                                             <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                            & ((0xa000U 
                                                <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                               & ((0xc000U 
                                                   <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_46))))))))));
        bufp->chgBit(oldp+160,(((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_4)) 
                                   & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_49)))));
        bufp->chgCData(oldp+161,((0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))),8);
        bufp->chgCData(oldp+162,(((0x9fU >= (0xffU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)))
                                   ? vlSelf->GameBoySoC__DOT__memory__DOT__oam
                                  [(0xffU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))]
                                   : 0U)),8);
        bufp->chgCData(oldp+163,(vlSelf->GameBoySoC__DOT__memory__DOT__oam
                                 [0U]),8);
        bufp->chgBit(oldp+164,(((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
                                & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                   & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                      & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                         & ((0x8000U 
                                             <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                            & ((0xa000U 
                                                <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                               & ((0xc000U 
                                                   <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_49))))))))));
        bufp->chgBit(oldp+165,(((0x8000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                & ((~ (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___T_4)) 
                                   & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_53)))));
        bufp->chgCData(oldp+166,((0x7fU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))),7);
        bufp->chgCData(oldp+167,(((0x7eU >= (0x7fU 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)))
                                   ? vlSelf->GameBoySoC__DOT__memory__DOT__hram
                                  [(0x7fU & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr))]
                                   : 0U)),8);
        bufp->chgBit(oldp+168,(((IData)(vlSelf->GameBoySoC__DOT__cpu_io_memWrite) 
                                & ((0x2000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                   & ((0x4000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                      & ((0x6000U <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                         & ((0x8000U 
                                             <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                            & ((0xa000U 
                                                <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                               & ((0xc000U 
                                                   <= (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr)) 
                                                  & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT___GEN_53))))))))));
        bufp->chgSData(oldp+169,((0xffffU & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr) 
                                             - (IData)(0xff00U)))),16);
        bufp->chgCData(oldp+170,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regP1),8);
        bufp->chgCData(oldp+171,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSB),8);
        bufp->chgCData(oldp+172,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSC),8);
        bufp->chgCData(oldp+173,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV),8);
        bufp->chgCData(oldp+174,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTIMA),8);
        bufp->chgCData(oldp+175,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTMA),8);
        bufp->chgCData(oldp+176,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTAC),8);
        bufp->chgSData(oldp+177,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__divCounter),16);
        bufp->chgCData(oldp+178,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10),8);
        bufp->chgCData(oldp+179,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11),8);
        bufp->chgCData(oldp+180,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12),8);
        bufp->chgCData(oldp+181,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13),8);
        bufp->chgCData(oldp+182,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14),8);
        bufp->chgCData(oldp+183,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21),8);
        bufp->chgCData(oldp+184,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22),8);
        bufp->chgCData(oldp+185,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23),8);
        bufp->chgCData(oldp+186,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24),8);
        bufp->chgCData(oldp+187,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30),8);
        bufp->chgCData(oldp+188,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31),8);
        bufp->chgCData(oldp+189,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32),8);
        bufp->chgCData(oldp+190,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33),8);
        bufp->chgCData(oldp+191,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34),8);
        bufp->chgCData(oldp+192,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41),8);
        bufp->chgCData(oldp+193,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42),8);
        bufp->chgCData(oldp+194,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43),8);
        bufp->chgCData(oldp+195,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44),8);
        bufp->chgCData(oldp+196,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50),8);
        bufp->chgCData(oldp+197,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51),8);
        bufp->chgCData(oldp+198,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52),8);
        bufp->chgCData(oldp+199,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT),8);
        bufp->chgCData(oldp+200,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC),8);
        bufp->chgCData(oldp+201,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA),8);
        bufp->chgCData(oldp+202,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0),8);
        bufp->chgCData(oldp+203,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1),8);
        bufp->chgCData(oldp+204,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY),8);
        bufp->chgCData(oldp+205,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX),8);
        bufp->chgCData(oldp+206,(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT),8);
        bufp->chgCData(oldp+207,(vlSelf->GameBoySoC__DOT__ppu__DOT__vram__DOT__mem_io_rdata_MPORT_data),8);
        bufp->chgBit(oldp+208,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushEnable));
        bufp->chgCData(oldp+209,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_0),2);
        bufp->chgCData(oldp+210,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_1),2);
        bufp->chgCData(oldp+211,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_2),2);
        bufp->chgCData(oldp+212,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_3),2);
        bufp->chgCData(oldp+213,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_4),2);
        bufp->chgCData(oldp+214,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_5),2);
        bufp->chgCData(oldp+215,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_6),2);
        bufp->chgCData(oldp+216,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_pushPixels_7),2);
        bufp->chgBit(oldp+217,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_popEnable));
        bufp->chgCData(oldp+218,(((0x1fU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
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
                                                        : (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT___GEN_21)))))))))))),2);
        bufp->chgBit(oldp+219,((0U < (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count))));
        bufp->chgCData(oldp+220,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__count),6);
        bufp->chgBit(oldp+221,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO_io_clear));
        bufp->chgSData(oldp+222,(vlSelf->GameBoySoC__DOT__ppu__DOT__dotCounter),9);
        bufp->chgCData(oldp+223,(vlSelf->GameBoySoC__DOT__ppu__DOT__lyReg),8);
        bufp->chgBit(oldp+224,((1U & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC) 
                                      >> 4U))));
        bufp->chgBit(oldp+225,((1U & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC) 
                                      >> 3U))));
        bufp->chgCData(oldp+226,(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherState),3);
        bufp->chgCData(oldp+227,(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX),8);
        bufp->chgCData(oldp+228,(vlSelf->GameBoySoC__DOT__ppu__DOT__tileNum),8);
        bufp->chgCData(oldp+229,(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow),8);
        bufp->chgCData(oldp+230,(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh),8);
        bufp->chgCData(oldp+231,(vlSelf->GameBoySoC__DOT__ppu__DOT__xPos),8);
        bufp->chgCData(oldp+232,(vlSelf->GameBoySoC__DOT__ppu__DOT__discardPixels),4);
        bufp->chgCData(oldp+233,(vlSelf->GameBoySoC__DOT__ppu__DOT__mode),2);
        bufp->chgSData(oldp+234,(((8U & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC))
                                   ? 0x1c00U : 0x1800U)),13);
        bufp->chgCData(oldp+235,(vlSelf->GameBoySoC__DOT__ppu__DOT__scrolledY),8);
        bufp->chgCData(oldp+236,((0xffU & ((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX) 
                                           + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX)))),8);
        bufp->chgCData(oldp+237,((0x1fU & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__scrolledY) 
                                           >> 3U))),5);
        bufp->chgCData(oldp+238,((0x1fU & (((IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX) 
                                            + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__fetcherX)) 
                                           >> 3U))),5);
        bufp->chgSData(oldp+239,((0x1fffU & ((((8U 
                                                & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC))
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
        bufp->chgSData(oldp+240,(((0x10U & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC))
                                   ? 0U : 0x800U)),12);
        bufp->chgSData(oldp+241,((0x1ffU & ((0x10U 
                                             & (IData)(vlSelf->GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC))
                                             ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileNum)
                                             : ((IData)(0x80U) 
                                                + (
                                                   (0x100U 
                                                    & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileNum) 
                                                       << 1U)) 
                                                   | (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileNum)))))),9);
        bufp->chgCData(oldp+242,((7U & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__scrolledY))),8);
        bufp->chgSData(oldp+243,(vlSelf->GameBoySoC__DOT__ppu__DOT__tileAddr),14);
        bufp->chgSData(oldp+244,((0x3fffU & ((IData)(1U) 
                                             + (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileAddr)))),14);
        bufp->chgBit(oldp+245,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                      >> 7U))));
        bufp->chgBit(oldp+246,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh) 
                                      >> 7U))));
        bufp->chgCData(oldp+247,(((2U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh) 
                                         >> 6U)) | 
                                  (1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                         >> 7U)))),2);
        bufp->chgCData(oldp+248,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+249,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh) 
                                        >> 6U))),2);
        bufp->chgCData(oldp+250,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                        >> 5U))),3);
        bufp->chgCData(oldp+251,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh) 
                                        >> 5U))),3);
        bufp->chgCData(oldp+252,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                        >> 4U))),4);
        bufp->chgCData(oldp+253,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh) 
                                        >> 4U))),4);
        bufp->chgCData(oldp+254,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                        >> 3U))),5);
        bufp->chgCData(oldp+255,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh) 
                                        >> 3U))),5);
        bufp->chgCData(oldp+256,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                        >> 2U))),6);
        bufp->chgCData(oldp+257,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh) 
                                        >> 2U))),6);
        bufp->chgCData(oldp+258,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                        >> 1U))),7);
        bufp->chgCData(oldp+259,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh) 
                                        >> 1U))),7);
        bufp->chgCData(oldp+260,((1U & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow))),8);
        bufp->chgCData(oldp+261,((1U & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataHigh))),8);
        bufp->chgCData(oldp+262,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                        >> 5U))),2);
        bufp->chgCData(oldp+263,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                        >> 4U))),2);
        bufp->chgCData(oldp+264,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                        >> 3U))),2);
        bufp->chgCData(oldp+265,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                        >> 2U))),2);
        bufp->chgCData(oldp+266,((1U & ((IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow) 
                                        >> 1U))),2);
        bufp->chgCData(oldp+267,((1U & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__tileDataLow))),2);
        bufp->chgCData(oldp+268,((((0x1fU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                    ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_31)
                                    : ((0x1eU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                        ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_30)
                                        : ((0x1dU == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                            ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_29)
                                            : ((0x1cU 
                                                == (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head))
                                                ? (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_28)
                                                : (
                                                   (0x1bU 
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
        bufp->chgCData(oldp+269,((3U & (IData)(vlSelf->GameBoySoC__DOT__ppu__DOT___palPx_T))),8);
        bufp->chgCData(oldp+270,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_0),2);
        bufp->chgCData(oldp+271,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_1),2);
        bufp->chgCData(oldp+272,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_2),2);
        bufp->chgCData(oldp+273,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_3),2);
        bufp->chgCData(oldp+274,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_4),2);
        bufp->chgCData(oldp+275,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_5),2);
        bufp->chgCData(oldp+276,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_6),2);
        bufp->chgCData(oldp+277,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_7),2);
        bufp->chgCData(oldp+278,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_8),2);
        bufp->chgCData(oldp+279,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_9),2);
        bufp->chgCData(oldp+280,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_10),2);
        bufp->chgCData(oldp+281,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_11),2);
        bufp->chgCData(oldp+282,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_12),2);
        bufp->chgCData(oldp+283,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_13),2);
        bufp->chgCData(oldp+284,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_14),2);
        bufp->chgCData(oldp+285,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_15),2);
        bufp->chgCData(oldp+286,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_16),2);
        bufp->chgCData(oldp+287,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_17),2);
        bufp->chgCData(oldp+288,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_18),2);
        bufp->chgCData(oldp+289,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_19),2);
        bufp->chgCData(oldp+290,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_20),2);
        bufp->chgCData(oldp+291,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_21),2);
        bufp->chgCData(oldp+292,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_22),2);
        bufp->chgCData(oldp+293,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_23),2);
        bufp->chgCData(oldp+294,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_24),2);
        bufp->chgCData(oldp+295,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_25),2);
        bufp->chgCData(oldp+296,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_26),2);
        bufp->chgCData(oldp+297,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_27),2);
        bufp->chgCData(oldp+298,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_28),2);
        bufp->chgCData(oldp+299,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_29),2);
        bufp->chgCData(oldp+300,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_30),2);
        bufp->chgCData(oldp+301,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__fifo_31),2);
        bufp->chgCData(oldp+302,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__head),5);
        bufp->chgCData(oldp+303,(vlSelf->GameBoySoC__DOT__ppu__DOT__pixelFIFO__DOT__tail),5);
        bufp->chgBit(oldp+304,(vlSelf->GameBoySoC__DOT__ppu__DOT__vram__DOT__mem_io_rdata_MPORT_en_pipe_0));
        bufp->chgSData(oldp+305,(vlSelf->GameBoySoC__DOT__ppu__DOT__vram__DOT__mem_io_rdata_MPORT_addr_pipe_0),13);
    }
    bufp->chgBit(oldp+306,(vlSelf->clock));
    bufp->chgBit(oldp+307,(vlSelf->reset));
    bufp->chgSData(oldp+308,(vlSelf->io_dbg_pc),16);
    bufp->chgCData(oldp+309,(vlSelf->io_dbg_opcode),8);
    bufp->chgCData(oldp+310,(vlSelf->io_dbg_a),8);
    bufp->chgCData(oldp+311,(vlSelf->io_dbg_f),8);
    bufp->chgCData(oldp+312,(vlSelf->io_dbg_b),8);
    bufp->chgCData(oldp+313,(vlSelf->io_dbg_c),8);
    bufp->chgCData(oldp+314,(vlSelf->io_dbg_d),8);
    bufp->chgCData(oldp+315,(vlSelf->io_dbg_e),8);
    bufp->chgCData(oldp+316,(vlSelf->io_dbg_h),8);
    bufp->chgCData(oldp+317,(vlSelf->io_dbg_l),8);
    bufp->chgCData(oldp+318,(vlSelf->io_dbg_state),8);
    bufp->chgCData(oldp+319,(vlSelf->io_dbg_tcycle),8);
    bufp->chgCData(oldp+320,(vlSelf->io_dbg_mcycle),8);
    bufp->chgCData(oldp+321,(vlSelf->io_dbg_IR),8);
    bufp->chgCData(oldp+322,(vlSelf->io_dbg_ly),8);
    bufp->chgIData(oldp+323,(vlSelf->io_extRomLoadAddr),32);
    bufp->chgCData(oldp+324,(vlSelf->io_extRomLoadData),8);
    bufp->chgBit(oldp+325,(vlSelf->io_extRomLoadEn));
    bufp->chgBit(oldp+326,(vlSelf->io_pixelValid));
    bufp->chgCData(oldp+327,(vlSelf->io_pixelX),8);
    bufp->chgCData(oldp+328,(vlSelf->io_pixelY),8);
    bufp->chgCData(oldp+329,(vlSelf->io_pixelColor),2);
    bufp->chgBit(oldp+330,(vlSelf->io_hblank));
    bufp->chgBit(oldp+331,(vlSelf->io_vblank));
    bufp->chgBit(oldp+332,(vlSelf->io_lcdEnable));
    bufp->chgSData(oldp+333,((0xffffU & vlSelf->io_extRomLoadAddr)),16);
}

void VGameBoySoC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VGameBoySoC___024root__trace_cleanup\n"); );
    // Init
    VGameBoySoC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VGameBoySoC___024root*>(voidSelf);
    VGameBoySoC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
