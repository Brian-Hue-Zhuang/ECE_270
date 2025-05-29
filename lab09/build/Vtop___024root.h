// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(hz100,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ top__DOT__strobe;
    VL_OUT8(left,7,0);
    VL_OUT8(right,7,0);
    VL_OUT8(ss7,7,0);
    VL_OUT8(ss6,7,0);
    VL_OUT8(ss5,7,0);
    VL_OUT8(ss4,7,0);
    VL_OUT8(ss3,7,0);
    VL_OUT8(ss2,7,0);
    VL_OUT8(ss1,7,0);
    VL_OUT8(ss0,7,0);
    VL_OUT8(red,0,0);
    VL_OUT8(green,0,0);
    VL_OUT8(blue,0,0);
    VL_OUT8(txdata,7,0);
    VL_IN8(rxdata,7,0);
    VL_OUT8(txclk,0,0);
    VL_OUT8(rxclk,0,0);
    VL_IN8(txready,0,0);
    VL_IN8(rxready,0,0);
    CData/*0:0*/ top__DOT__clock;
    CData/*4:0*/ top__DOT__keyout;
    CData/*7:0*/ top__DOT__seq;
    CData/*7:0*/ top__DOT__psc__DOT__counter;
    CData/*0:0*/ top__DOT__sk1__DOT__press_state;
    CData/*3:0*/ top__DOT__check__DOT__lockstate;
    CData/*3:0*/ top__DOT__check__DOT__n_lockstate;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__hz100__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top__DOT__strobe__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(pb,20,0);
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ top__DOT____Vcellout__info__ss;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
