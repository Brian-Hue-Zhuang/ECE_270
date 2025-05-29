// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vll_control.h for the primary calling header

#include "Vll_control__pch.h"
#include "Vll_control___024root.h"

VL_ATTR_COLD void Vll_control___024root___eval_static(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vll_control___024root___eval_initial(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = vlSelf->rst;
}

VL_ATTR_COLD void Vll_control___024root___eval_final(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vll_control___024root___dump_triggers__stl(Vll_control___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vll_control___024root___eval_phase__stl(Vll_control___024root* vlSelf);

VL_ATTR_COLD void Vll_control___024root___eval_settle(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_settle\n"); );
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
            Vll_control___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 109, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vll_control___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vll_control___024root___dump_triggers__stl(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vll_control___024root___ico_sequent__TOP__0(Vll_control___024root* vlSelf);

VL_ATTR_COLD void Vll_control___024root___eval_stl(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vll_control___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vll_control___024root___eval_triggers__stl(Vll_control___024root* vlSelf);

VL_ATTR_COLD bool Vll_control___024root___eval_phase__stl(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vll_control___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vll_control___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vll_control___024root___dump_triggers__ico(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void Vll_control___024root___dump_triggers__act(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vll_control___024root___dump_triggers__nba(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or posedge rst)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vll_control___024root___ctor_var_reset(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->alt = VL_RAND_RESET_I(16);
    vlSelf->vel = VL_RAND_RESET_I(16);
    vlSelf->land = VL_RAND_RESET_I(1);
    vlSelf->crash = VL_RAND_RESET_I(1);
    vlSelf->wen = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__status = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__n_crash = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__finished = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT____Vcellout__comp0__out = VL_RAND_RESET_I(4);
    vlSelf->ll_control__DOT__add__DOT____Vcellout__comp1__out = VL_RAND_RESET_I(4);
    vlSelf->ll_control__DOT__add__DOT____Vcellout__comp2__out = VL_RAND_RESET_I(4);
    vlSelf->ll_control__DOT__add__DOT____Vcellout__comp3__out = VL_RAND_RESET_I(4);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT____Vcellout__bcd3__s = VL_RAND_RESET_I(4);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__bcd = VL_RAND_RESET_I(4);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c3 = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa0__a = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__bcd = VL_RAND_RESET_I(4);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c3 = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa0__a = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__bcd = VL_RAND_RESET_I(4);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c3 = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa0__a = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__bcd = VL_RAND_RESET_I(4);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c1 = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c3 = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2 = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa0__a = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__a = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a = VL_RAND_RESET_I(1);
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa3__a = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
