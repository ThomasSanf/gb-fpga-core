// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VGameBoySoC.h for the primary calling header

#include "VGameBoySoC__pch.h"
#include "VGameBoySoC__Syms.h"
#include "VGameBoySoC___024root.h"

void VGameBoySoC___024root___ctor_var_reset(VGameBoySoC___024root* vlSelf);

VGameBoySoC___024root::VGameBoySoC___024root(VGameBoySoC__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VGameBoySoC___024root___ctor_var_reset(this);
}

void VGameBoySoC___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VGameBoySoC___024root::~VGameBoySoC___024root() {
}
