// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VLL_CONTROL__SYMS_H_
#define VERILATED_VLL_CONTROL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vll_control.h"

// INCLUDE MODULE CLASSES
#include "Vll_control___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vll_control__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vll_control* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vll_control___024root          TOP;

    // CONSTRUCTORS
    Vll_control__Syms(VerilatedContext* contextp, const char* namep, Vll_control* modelp);
    ~Vll_control__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
