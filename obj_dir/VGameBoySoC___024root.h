// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VGameBoySoC.h for the primary calling header

#ifndef VERILATED_VGAMEBOYSOC___024ROOT_H_
#define VERILATED_VGAMEBOYSOC___024ROOT_H_  // guard

#include "verilated.h"


class VGameBoySoC__Syms;

class alignas(VL_CACHE_LINE_BYTES) VGameBoySoC___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_dbg_opcode,7,0);
        VL_OUT8(io_dbg_a,7,0);
        VL_OUT8(io_dbg_f,7,0);
        VL_OUT8(io_dbg_b,7,0);
        VL_OUT8(io_dbg_c,7,0);
        VL_OUT8(io_dbg_d,7,0);
        VL_OUT8(io_dbg_e,7,0);
        VL_OUT8(io_dbg_h,7,0);
        VL_OUT8(io_dbg_l,7,0);
        VL_OUT8(io_dbg_state,7,0);
        VL_OUT8(io_dbg_tcycle,7,0);
        VL_OUT8(io_dbg_mcycle,7,0);
        VL_OUT8(io_dbg_IR,7,0);
        VL_OUT8(io_dbg_ly,7,0);
        VL_IN8(io_extRomLoadData,7,0);
        VL_IN8(io_extRomLoadEn,0,0);
        VL_OUT8(io_pixelValid,0,0);
        VL_OUT8(io_pixelX,7,0);
        VL_OUT8(io_pixelY,7,0);
        VL_OUT8(io_pixelColor,1,0);
        CData/*0:0*/ GameBoySoC__DOT__cpu_io_memRead;
        CData/*0:0*/ GameBoySoC__DOT__cpu_io_memWrite;
        CData/*7:0*/ GameBoySoC__DOT__cpu_io_memReadData;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__A;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__F;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__B;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__C;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__D;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__E;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__H;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__L;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__IR;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__IR2;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__imm8;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__CB_imm8;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__A_sampled;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__F_sampled;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__B_sampled;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__C_sampled;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__D_sampled;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__E_sampled;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__H_sampled;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__L_sampled;
        CData/*2:0*/ GameBoySoC__DOT__cpu__DOT__state;
        CData/*1:0*/ GameBoySoC__DOT__cpu__DOT__tcycle;
        CData/*2:0*/ GameBoySoC__DOT__cpu__DOT__mcycle;
        CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___u_T_1;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u___05FC;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u___05FB;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u___05FE;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u___05FD;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u___05FL;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u___05FH;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u___05FF;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__u___05FA;
        CData/*1:0*/ GameBoySoC__DOT__cpu__DOT___tcycle_T_1;
        CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___T_1;
        CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__needsImm8_new;
        CData/*0:0*/ GameBoySoC__DOT__cpu__DOT__needsImm16_new;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1717;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1718;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1719;
    };
    struct {
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1720;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1721;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1722;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1723;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1724;
        CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1738;
        CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___T_4;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1758;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1759;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1760;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1761;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1762;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1763;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1764;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1765;
        CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___T_6;
        CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1768;
        CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___T_8;
        CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___T_10;
        CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___T_12;
        CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___T_13;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__cbOut_operand;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__cbOut_result;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__cbOut_B;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__cbOut_C;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__cbOut_D;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__cbOut_E;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__cbOut_H;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__cbOut_L;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT__cbOut_A;
        CData/*0:0*/ GameBoySoC__DOT__cpu__DOT___T_18;
        CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2084;
        CData/*2:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2085;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2088;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2089;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2090;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2091;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2092;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2093;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2094;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2095;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2096;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2103;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2104;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2105;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2106;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2107;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2108;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2109;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2110;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2111;
        CData/*7:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2113;
        CData/*7:0*/ GameBoySoC__DOT__ppu__DOT__ly;
        CData/*7:0*/ GameBoySoC__DOT__ppu__DOT___ly_T_2;
        CData/*0:0*/ GameBoySoC__DOT__ppu__DOT__vblankIRQ;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs_io_addr;
        CData/*0:0*/ GameBoySoC__DOT__memory__DOT__ioRegs_io_write;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs_io_writeData;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__vram_MPORT_1_data;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__oam_rdata_MPORT_4_addr_pipe_0;
        CData/*0:0*/ GameBoySoC__DOT__memory__DOT__bootRomEnable;
        CData/*0:0*/ GameBoySoC__DOT__memory__DOT__ramEnabled;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__regIE;
        CData/*0:0*/ GameBoySoC__DOT__memory__DOT___GEN_108;
    };
    struct {
        CData/*0:0*/ GameBoySoC__DOT__memory__DOT___GEN_114;
        CData/*0:0*/ GameBoySoC__DOT__memory__DOT___GEN_117;
        CData/*0:0*/ GameBoySoC__DOT__memory__DOT___GEN_120;
        CData/*0:0*/ GameBoySoC__DOT__memory__DOT___GEN_128;
        CData/*0:0*/ GameBoySoC__DOT__memory__DOT___GEN_131;
        CData/*0:0*/ GameBoySoC__DOT__memory__DOT___GEN_134;
        CData/*0:0*/ GameBoySoC__DOT__memory__DOT___GEN_137;
        CData/*0:0*/ GameBoySoC__DOT__memory__DOT___GEN_140;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT___GEN_398;
        CData/*0:0*/ GameBoySoC__DOT__memory__DOT___GEN_502;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT____Vlvbound_h5559fb94__0;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT____Vlvbound_ha6cb93b5__0;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regP1;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSB;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSC;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDIV;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTIMA;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTMA;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regTAC;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_0;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regIF;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_2;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR10;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR11;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR12;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR13;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR14;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR21;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR22;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR23;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR24;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR30;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR31;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR32;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR33;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR34;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR41;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR42;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR43;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR44;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR50;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR51;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regNR52;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLCDC;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSTAT;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCY;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regSCX;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regLYC;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regDMA;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBGP;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP0;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regOBP1;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWY;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regWX;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__regBOOT;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_798;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_802;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_803;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_804;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_806;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_807;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_808;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_809;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_810;
    };
    struct {
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_811;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_812;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_813;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_814;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_815;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_816;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_817;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_818;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_819;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_820;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_821;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_822;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_823;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_824;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_825;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_826;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_827;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_828;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_829;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_830;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_831;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_832;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_833;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_834;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_835;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_836;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_837;
        CData/*7:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___GEN_838;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT16(io_dbg_pc,15,0);
        SData/*15:0*/ GameBoySoC__DOT__cpu__DOT__PC;
        SData/*15:0*/ GameBoySoC__DOT__cpu__DOT__SP;
        SData/*15:0*/ GameBoySoC__DOT__cpu__DOT__imm16;
        SData/*15:0*/ GameBoySoC__DOT__cpu__DOT__PC_sampled;
        SData/*15:0*/ GameBoySoC__DOT__cpu__DOT__SP_sampled;
        SData/*15:0*/ GameBoySoC__DOT__cpu__DOT__u___05FSP;
        SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___PC_T_1;
        SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1715;
        SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1716;
        SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1737;
        SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_1766;
        SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2082;
        SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2083;
        SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2086;
        SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2087;
        SData/*15:0*/ GameBoySoC__DOT__cpu__DOT___GEN_2112;
        SData/*8:0*/ GameBoySoC__DOT__ppu__DOT__lineCycle;
        SData/*8:0*/ GameBoySoC__DOT__ppu__DOT___lineCycle_T_1;
        SData/*15:0*/ GameBoySoC__DOT__memory__DOT__bootRom_io_address;
        SData/*12:0*/ GameBoySoC__DOT__memory__DOT__vram_rdata_MPORT_addr_pipe_0;
        SData/*12:0*/ GameBoySoC__DOT__memory__DOT__extRam_rdata_MPORT_1_addr_pipe_0;
        SData/*12:0*/ GameBoySoC__DOT__memory__DOT__wram_rdata_MPORT_2_addr_pipe_0;
        SData/*12:0*/ GameBoySoC__DOT__memory__DOT__wram_rdata_MPORT_3_addr_pipe_0;
        SData/*15:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT__divCounter;
        SData/*15:0*/ GameBoySoC__DOT__memory__DOT__ioRegs__DOT___divCounter_T_1;
        VL_IN(io_extRomLoadAddr,31,0);
        IData/*19:0*/ GameBoySoC__DOT__memory__DOT__rom_cartRomOut_addr_pipe_0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 1048576> GameBoySoC__DOT__memory__DOT__rom;
        VlUnpacked<CData/*7:0*/, 8192> GameBoySoC__DOT__memory__DOT__vram;
        VlUnpacked<CData/*7:0*/, 8192> GameBoySoC__DOT__memory__DOT__extRam;
        VlUnpacked<CData/*7:0*/, 8192> GameBoySoC__DOT__memory__DOT__wram;
    };
    struct {
        VlUnpacked<CData/*7:0*/, 160> GameBoySoC__DOT__memory__DOT__oam;
        VlUnpacked<CData/*7:0*/, 127> GameBoySoC__DOT__memory__DOT__hram;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VGameBoySoC__Syms* const vlSymsp;

    // CONSTRUCTORS
    VGameBoySoC___024root(VGameBoySoC__Syms* symsp, const char* v__name);
    ~VGameBoySoC___024root();
    VL_UNCOPYABLE(VGameBoySoC___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
