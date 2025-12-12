// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VGameBoySoC__pch.h"

//============================================================
// Constructors

VGameBoySoC::VGameBoySoC(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VGameBoySoC__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_dbg_opcode{vlSymsp->TOP.io_dbg_opcode}
    , io_dbg_a{vlSymsp->TOP.io_dbg_a}
    , io_dbg_f{vlSymsp->TOP.io_dbg_f}
    , io_dbg_b{vlSymsp->TOP.io_dbg_b}
    , io_dbg_c{vlSymsp->TOP.io_dbg_c}
    , io_dbg_d{vlSymsp->TOP.io_dbg_d}
    , io_dbg_e{vlSymsp->TOP.io_dbg_e}
    , io_dbg_h{vlSymsp->TOP.io_dbg_h}
    , io_dbg_l{vlSymsp->TOP.io_dbg_l}
    , io_dbg_state{vlSymsp->TOP.io_dbg_state}
    , io_dbg_tcycle{vlSymsp->TOP.io_dbg_tcycle}
    , io_dbg_mcycle{vlSymsp->TOP.io_dbg_mcycle}
    , io_dbg_IR{vlSymsp->TOP.io_dbg_IR}
    , io_dbg_ly{vlSymsp->TOP.io_dbg_ly}
    , io_extRomLoadData{vlSymsp->TOP.io_extRomLoadData}
    , io_extRomLoadEn{vlSymsp->TOP.io_extRomLoadEn}
    , io_pixelValid{vlSymsp->TOP.io_pixelValid}
    , io_pixelX{vlSymsp->TOP.io_pixelX}
    , io_pixelY{vlSymsp->TOP.io_pixelY}
    , io_pixelColor{vlSymsp->TOP.io_pixelColor}
    , io_dbg_pc{vlSymsp->TOP.io_dbg_pc}
    , io_extRomLoadAddr{vlSymsp->TOP.io_extRomLoadAddr}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VGameBoySoC::VGameBoySoC(const char* _vcname__)
    : VGameBoySoC(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VGameBoySoC::~VGameBoySoC() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VGameBoySoC___024root___eval_debug_assertions(VGameBoySoC___024root* vlSelf);
#endif  // VL_DEBUG
void VGameBoySoC___024root___eval_static(VGameBoySoC___024root* vlSelf);
void VGameBoySoC___024root___eval_initial(VGameBoySoC___024root* vlSelf);
void VGameBoySoC___024root___eval_settle(VGameBoySoC___024root* vlSelf);
void VGameBoySoC___024root___eval(VGameBoySoC___024root* vlSelf);

void VGameBoySoC::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VGameBoySoC::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VGameBoySoC___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VGameBoySoC___024root___eval_static(&(vlSymsp->TOP));
        VGameBoySoC___024root___eval_initial(&(vlSymsp->TOP));
        VGameBoySoC___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VGameBoySoC___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VGameBoySoC::eventsPending() { return false; }

uint64_t VGameBoySoC::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VGameBoySoC::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VGameBoySoC___024root___eval_final(VGameBoySoC___024root* vlSelf);

VL_ATTR_COLD void VGameBoySoC::final() {
    VGameBoySoC___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VGameBoySoC::hierName() const { return vlSymsp->name(); }
const char* VGameBoySoC::modelName() const { return "VGameBoySoC"; }
unsigned VGameBoySoC::threads() const { return 1; }
void VGameBoySoC::prepareClone() const { contextp()->prepareClone(); }
void VGameBoySoC::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void VGameBoySoC::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'VGameBoySoC::trace()' called on model that was Verilated without --trace option");
}
