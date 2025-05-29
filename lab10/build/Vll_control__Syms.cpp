// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vll_control__pch.h"
#include "Vll_control.h"
#include "Vll_control___024root.h"

// FUNCTIONS
Vll_control__Syms::~Vll_control__Syms()
{
}

Vll_control__Syms::Vll_control__Syms(VerilatedContext* contextp, const char* namep, Vll_control* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(45);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
