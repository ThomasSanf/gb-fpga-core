// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VGAMEBOYSOC__SYMS_H_
#define VERILATED_VGAMEBOYSOC__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VGameBoySoC.h"

// INCLUDE MODULE CLASSES
#include "VGameBoySoC___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VGameBoySoC__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VGameBoySoC* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VGameBoySoC___024root          TOP;

    // CONSTRUCTORS
    VGameBoySoC__Syms(VerilatedContext* contextp, const char* namep, VGameBoySoC* modelp);
    ~VGameBoySoC__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
