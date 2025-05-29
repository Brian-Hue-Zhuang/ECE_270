// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vll_control.h for the primary calling header

#ifndef VERILATED_VLL_CONTROL___024ROOT_H_
#define VERILATED_VLL_CONTROL___024ROOT_H_  // guard

#include "verilated.h"


class Vll_control__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vll_control___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(land,0,0);
    VL_OUT8(crash,0,0);
    VL_OUT8(wen,0,0);
    CData/*0:0*/ ll_control__DOT__status;
    CData/*0:0*/ ll_control__DOT__n_crash;
    CData/*0:0*/ ll_control__DOT__finished;
    CData/*3:0*/ ll_control__DOT__add__DOT____Vcellout__comp0__out;
    CData/*3:0*/ ll_control__DOT__add__DOT____Vcellout__comp1__out;
    CData/*3:0*/ ll_control__DOT__add__DOT____Vcellout__comp2__out;
    CData/*3:0*/ ll_control__DOT__add__DOT____Vcellout__comp3__out;
    CData/*3:0*/ ll_control__DOT__add__DOT__adder__DOT____Vcellout__bcd3__s;
    CData/*3:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__bcd;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c1;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c2;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c3;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa0__a;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a;
    CData/*3:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__bcd;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c1;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c2;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c3;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa0__a;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a;
    CData/*3:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__bcd;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c1;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c2;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c3;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa0__a;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a;
    CData/*3:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__bcd;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c1;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c2;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c3;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa0__a;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__a;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a;
    CData/*0:0*/ ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa3__a;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(alt,15,0);
    VL_IN16(vel,15,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vll_control__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vll_control___024root(Vll_control__Syms* symsp, const char* v__name);
    ~Vll_control___024root();
    VL_UNCOPYABLE(Vll_control___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
