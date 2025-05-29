// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__hz100__0 = vlSelf->hz100;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__strobe__0 
        = vlSelf->top__DOT__strobe;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 8, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtop___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<QData/*63:0*/, 32> Vtop__ConstPool__TABLE_h27ba938f_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h58c203c7_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_hf6f357f4_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vtop__ConstPool__TABLE_h99fcc2d9_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vtop__ConstPool__TABLE_hc52109ef_0;

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*4:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->right = vlSelf->top__DOT__seq;
    vlSelf->top__DOT__keyout = ((0x1eU & (IData)(vlSelf->top__DOT__keyout)) 
                                | (IData)((0U != (0xaaaaaU 
                                                  & vlSelf->pb))));
    vlSelf->top__DOT__keyout = ((0x1dU & (IData)(vlSelf->top__DOT__keyout)) 
                                | ((IData)((0U != (3U 
                                                   & (((((vlSelf->pb 
                                                          >> 2U) 
                                                         | (vlSelf->pb 
                                                            >> 6U)) 
                                                        | (vlSelf->pb 
                                                           >> 0xaU)) 
                                                       | (vlSelf->pb 
                                                          >> 0xeU)) 
                                                      | (vlSelf->pb 
                                                         >> 0x12U))))) 
                                   << 1U));
    vlSelf->top__DOT__keyout = ((0x1bU & (IData)(vlSelf->top__DOT__keyout)) 
                                | ((IData)((0U != (0xfU 
                                                   & ((vlSelf->pb 
                                                       >> 4U) 
                                                      | (vlSelf->pb 
                                                         >> 0xcU))))) 
                                   << 2U));
    vlSelf->top__DOT__keyout = ((7U & (IData)(vlSelf->top__DOT__keyout)) 
                                | ((((IData)((0U != 
                                              (0xfU 
                                               & (vlSelf->pb 
                                                  >> 0x10U)))) 
                                     << 1U) | (0U != 
                                               (0xffU 
                                                & (vlSelf->pb 
                                                   >> 8U)))) 
                                   << 3U));
    __Vtableidx2 = (((IData)(vlSelf->top__DOT__clock) 
                     << 4U) | (IData)(vlSelf->top__DOT__check__DOT__lockstate));
    vlSelf->top__DOT____Vcellout__info__ss = Vtop__ConstPool__TABLE_h27ba938f_0
        [__Vtableidx2];
    vlSelf->red = Vtop__ConstPool__TABLE_h58c203c7_0
        [__Vtableidx2];
    vlSelf->green = Vtop__ConstPool__TABLE_hf6f357f4_0
        [__Vtableidx2];
    vlSelf->blue = Vtop__ConstPool__TABLE_h99fcc2d9_0
        [__Vtableidx2];
    __Vtableidx1 = ((((1U & (IData)(vlSelf->top__DOT__keyout)) 
                      == (1U & ((IData)(vlSelf->top__DOT__seq) 
                                >> (7U & (~ (IData)(vlSelf->top__DOT__check__DOT__lockstate)))))) 
                     << 5U) | (((0x10U == (IData)(vlSelf->top__DOT__keyout)) 
                                << 4U) | (IData)(vlSelf->top__DOT__check__DOT__lockstate)));
    vlSelf->top__DOT__check__DOT__n_lockstate = Vtop__ConstPool__TABLE_hc52109ef_0
        [__Vtableidx1];
    vlSelf->ss7 = (0xffU & (IData)((vlSelf->top__DOT____Vcellout__info__ss 
                                    >> 0x38U)));
    vlSelf->ss6 = (0xffU & (IData)((vlSelf->top__DOT____Vcellout__info__ss 
                                    >> 0x30U)));
    vlSelf->ss5 = (0xffU & (IData)((vlSelf->top__DOT____Vcellout__info__ss 
                                    >> 0x28U)));
    vlSelf->ss4 = (0xffU & (IData)((vlSelf->top__DOT____Vcellout__info__ss 
                                    >> 0x20U)));
    vlSelf->ss3 = (0xffU & (IData)((vlSelf->top__DOT____Vcellout__info__ss 
                                    >> 0x18U)));
    vlSelf->ss2 = (0xffU & (IData)((vlSelf->top__DOT____Vcellout__info__ss 
                                    >> 0x10U)));
    vlSelf->ss1 = (0xffU & (IData)((vlSelf->top__DOT____Vcellout__info__ss 
                                    >> 8U)));
    vlSelf->ss0 = (0xffU & (IData)(vlSelf->top__DOT____Vcellout__info__ss));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge hz100 or posedge reset)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge reset or posedge top.strobe)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge hz100 or posedge reset)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge reset or posedge top.strobe)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->hz100 = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->pb = VL_RAND_RESET_I(21);
    vlSelf->left = VL_RAND_RESET_I(8);
    vlSelf->right = VL_RAND_RESET_I(8);
    vlSelf->ss7 = VL_RAND_RESET_I(8);
    vlSelf->ss6 = VL_RAND_RESET_I(8);
    vlSelf->ss5 = VL_RAND_RESET_I(8);
    vlSelf->ss4 = VL_RAND_RESET_I(8);
    vlSelf->ss3 = VL_RAND_RESET_I(8);
    vlSelf->ss2 = VL_RAND_RESET_I(8);
    vlSelf->ss1 = VL_RAND_RESET_I(8);
    vlSelf->ss0 = VL_RAND_RESET_I(8);
    vlSelf->red = VL_RAND_RESET_I(1);
    vlSelf->green = VL_RAND_RESET_I(1);
    vlSelf->blue = VL_RAND_RESET_I(1);
    vlSelf->txdata = VL_RAND_RESET_I(8);
    vlSelf->rxdata = VL_RAND_RESET_I(8);
    vlSelf->txclk = VL_RAND_RESET_I(1);
    vlSelf->rxclk = VL_RAND_RESET_I(1);
    vlSelf->txready = VL_RAND_RESET_I(1);
    vlSelf->rxready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__clock = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__keyout = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__strobe = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__seq = VL_RAND_RESET_I(8);
    vlSelf->top__DOT____Vcellout__info__ss = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__psc__DOT__counter = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__sk1__DOT__press_state = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__check__DOT__lockstate = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__check__DOT__n_lockstate = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__hz100__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__top__DOT__strobe__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
