// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vll_control.h for the primary calling header

#include "Vll_control__pch.h"
#include "Vll_control___024root.h"

extern const VlUnpacked<CData/*3:0*/, 16> Vll_control__ConstPool__TABLE_h05577678_0;

VL_INLINE_OPT void Vll_control___024root___ico_sequent__TOP__0(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___ico_sequent__TOP__0\n"); );
    // Init
    CData/*3:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    vlSelf->ll_control__DOT__n_crash = ((0x9970U > (IData)(vlSelf->vel)) 
                                        & ((IData)(vlSelf->vel) 
                                           >> 0xfU));
    __Vtableidx1 = (0xfU & (IData)(vlSelf->vel));
    vlSelf->ll_control__DOT__add__DOT____Vcellout__comp0__out 
        = Vll_control__ConstPool__TABLE_h05577678_0
        [__Vtableidx1];
    __Vtableidx2 = (0xfU & ((IData)(vlSelf->vel) >> 4U));
    vlSelf->ll_control__DOT__add__DOT____Vcellout__comp1__out 
        = Vll_control__ConstPool__TABLE_h05577678_0
        [__Vtableidx2];
    __Vtableidx3 = (0xfU & ((IData)(vlSelf->vel) >> 8U));
    vlSelf->ll_control__DOT__add__DOT____Vcellout__comp2__out 
        = Vll_control__ConstPool__TABLE_h05577678_0
        [__Vtableidx3];
    __Vtableidx4 = (0xfU & ((IData)(vlSelf->vel) >> 0xcU));
    vlSelf->ll_control__DOT__add__DOT____Vcellout__comp3__out 
        = Vll_control__ConstPool__TABLE_h05577678_0
        [__Vtableidx4];
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa0__a 
        = (1U & ((IData)(vlSelf->alt) ^ (IData)(vlSelf->vel)));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c1 
        = (1U & ((IData)(vlSelf->alt) & (IData)(vlSelf->vel)));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a 
        = (1U & (((IData)(vlSelf->alt) >> 1U) ^ (((IData)(vlSelf->vel) 
                                                  >> 1U) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c1))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c2 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 1U) | ((((IData)(vlSelf->vel) 
                              | (IData)(vlSelf->alt)) 
                             >> 1U) & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c1))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a 
        = (1U & (((IData)(vlSelf->alt) >> 2U) ^ (((IData)(vlSelf->vel) 
                                                  >> 2U) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c2))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c3 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 2U) | ((((IData)(vlSelf->vel) 
                              | (IData)(vlSelf->alt)) 
                             >> 2U) & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c2))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a 
        = (1U & (((IData)(vlSelf->alt) >> 3U) ^ (((IData)(vlSelf->vel) 
                                                  >> 3U) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c3))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b 
        = (1U & (((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                   >> 3U) | ((((IData)(vlSelf->vel) 
                               | (IData)(vlSelf->alt)) 
                              >> 3U) & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c3))) 
                 | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                     | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a)) 
                    & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2 
        = ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a) 
           & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa0__a 
        = (1U & (((IData)(vlSelf->alt) >> 4U) ^ (((IData)(vlSelf->vel) 
                                                  >> 4U) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c1 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 4U) | ((((IData)(vlSelf->vel) 
                              | (IData)(vlSelf->alt)) 
                             >> 4U) & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a 
        = (1U & (((IData)(vlSelf->alt) >> 5U) ^ (((IData)(vlSelf->vel) 
                                                  >> 5U) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c1))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c2 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 5U) | ((((IData)(vlSelf->vel) 
                              | (IData)(vlSelf->alt)) 
                             >> 5U) & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c1))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a 
        = (1U & (((IData)(vlSelf->alt) >> 6U) ^ (((IData)(vlSelf->vel) 
                                                  >> 6U) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c2))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c3 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 6U) | ((((IData)(vlSelf->vel) 
                              | (IData)(vlSelf->alt)) 
                             >> 6U) & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c2))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a 
        = (1U & (((IData)(vlSelf->alt) >> 7U) ^ (((IData)(vlSelf->vel) 
                                                  >> 7U) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c3))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b 
        = (1U & (((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                   >> 7U) | ((((IData)(vlSelf->vel) 
                               | (IData)(vlSelf->alt)) 
                              >> 7U) & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c3))) 
                 | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                     | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a)) 
                    & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2 
        = ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a) 
           & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa0__a 
        = (1U & (((IData)(vlSelf->alt) >> 8U) ^ (((IData)(vlSelf->vel) 
                                                  >> 8U) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c1 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 8U) | ((((IData)(vlSelf->vel) 
                              | (IData)(vlSelf->alt)) 
                             >> 8U) & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a 
        = (1U & (((IData)(vlSelf->alt) >> 9U) ^ (((IData)(vlSelf->vel) 
                                                  >> 9U) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c1))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c2 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 9U) | ((((IData)(vlSelf->vel) 
                              | (IData)(vlSelf->alt)) 
                             >> 9U) & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c1))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a 
        = (1U & (((IData)(vlSelf->alt) >> 0xaU) ^ (
                                                   ((IData)(vlSelf->vel) 
                                                    >> 0xaU) 
                                                   ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c2))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c3 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 0xaU) | ((((IData)(vlSelf->vel) 
                                | (IData)(vlSelf->alt)) 
                               >> 0xaU) & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c2))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a 
        = (1U & (((IData)(vlSelf->alt) >> 0xbU) ^ (
                                                   ((IData)(vlSelf->vel) 
                                                    >> 0xbU) 
                                                   ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c3))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b 
        = (1U & (((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                   >> 0xbU) | ((((IData)(vlSelf->vel) 
                                 | (IData)(vlSelf->alt)) 
                                >> 0xbU) & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c3))) 
                 | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                     | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a)) 
                    & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2 
        = ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a) 
           & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa0__a 
        = (1U & (((IData)(vlSelf->alt) >> 0xcU) ^ (
                                                   ((IData)(vlSelf->vel) 
                                                    >> 0xcU) 
                                                   ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c1 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 0xcU) | ((((IData)(vlSelf->vel) 
                                | (IData)(vlSelf->alt)) 
                               >> 0xcU) & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__a 
        = (1U & (((IData)(vlSelf->alt) >> 0xdU) ^ (
                                                   ((IData)(vlSelf->vel) 
                                                    >> 0xdU) 
                                                   ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c1))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c2 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 0xdU) | ((((IData)(vlSelf->vel) 
                                | (IData)(vlSelf->alt)) 
                               >> 0xdU) & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c1))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a 
        = (1U & (((IData)(vlSelf->alt) >> 0xeU) ^ (
                                                   ((IData)(vlSelf->vel) 
                                                    >> 0xeU) 
                                                   ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c2))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c3 
        = (1U & ((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                  >> 0xeU) | ((((IData)(vlSelf->vel) 
                                | (IData)(vlSelf->alt)) 
                               >> 0xeU) & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c2))));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa3__a 
        = (IData)(((((IData)(vlSelf->alt) ^ (IData)(vlSelf->vel)) 
                    >> 0xfU) ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c3)));
    vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b 
        = (1U & (((((IData)(vlSelf->alt) & (IData)(vlSelf->vel)) 
                   >> 0xfU) | ((((IData)(vlSelf->vel) 
                                 | (IData)(vlSelf->alt)) 
                                >> 0xfU) & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c3))) 
                 | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a) 
                     | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__a)) 
                    & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa3__a))));
    if (vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) {
        vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2 
            = vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__a;
        vlSelf->ll_control__DOT__add__DOT__adder__DOT____Vcellout__bcd3__s 
            = ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa3__a) 
                 ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a) 
                     & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                    | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) 
                        | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                       & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2)))) 
                << 3U) | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a) 
                            ^ ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) 
                               ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2))) 
                           << 2U) | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                       ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                      << 1U) | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa0__a))));
    } else {
        vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2 = 0U;
        vlSelf->ll_control__DOT__add__DOT__adder__DOT____Vcellout__bcd3__s 
            = (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa3__a) 
                << 3U) | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a) 
                           << 2U) | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                      << 1U) | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa0__a))));
    }
    vlSelf->ll_control__DOT__finished = (IData)((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT____Vcellout__bcd3__s) 
                                                  >> 3U) 
                                                 | (0U 
                                                    == 
                                                    (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT____Vcellout__bcd3__s) 
                                                      << 0xcU) 
                                                     | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)
                                                           ? 
                                                          ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                                             ^ 
                                                             (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                                               & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                                              | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                                                  | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                                                 & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2)))) 
                                                            << 3U) 
                                                           | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                                                ^ 
                                                                ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                                                 ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2))) 
                                                               << 2U) 
                                                              | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                                   ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa0__a))))
                                                           : 
                                                          (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                                            << 3U) 
                                                           | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                                               << 2U) 
                                                              | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                                  << 1U) 
                                                                 | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa0__a))))) 
                                                         << 8U) 
                                                        | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b)
                                                              ? 
                                                             ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                                                ^ 
                                                                (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                                                  & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                                                 | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                                                     | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                                                    & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2)))) 
                                                               << 3U) 
                                                              | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                                                   ^ 
                                                                   ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                                                    ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2))) 
                                                                  << 2U) 
                                                                 | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                                      ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa0__a))))
                                                              : 
                                                             (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                                               << 3U) 
                                                              | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                                                  << 2U) 
                                                                 | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                                     << 1U) 
                                                                    | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa0__a))))) 
                                                            << 4U) 
                                                           | ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b)
                                                               ? 
                                                              ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                                                 ^ 
                                                                 (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                                                   & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                                                  | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                                                      | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                                                     & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2)))) 
                                                                << 3U) 
                                                               | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                                                    ^ 
                                                                    ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                                                     ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2))) 
                                                                   << 2U) 
                                                                  | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                                       ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa0__a))))
                                                               : 
                                                              (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                                                << 3U) 
                                                               | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                                                   << 2U) 
                                                                  | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                                      << 1U) 
                                                                     | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa0__a)))))))))));
}

void Vll_control___024root___eval_ico(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vll_control___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vll_control___024root___eval_triggers__ico(Vll_control___024root* vlSelf);

bool Vll_control___024root___eval_phase__ico(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vll_control___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vll_control___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vll_control___024root___eval_act(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vll_control___024root___nba_sequent__TOP__0(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__land;
    __Vdly__land = 0;
    CData/*0:0*/ __Vdly__crash;
    __Vdly__crash = 0;
    // Body
    __Vdly__crash = vlSelf->crash;
    __Vdly__land = vlSelf->land;
    if (vlSelf->rst) {
        __Vdly__land = 0U;
        __Vdly__crash = 0U;
    } else if ((((IData)(vlSelf->ll_control__DOT__finished) 
                 & (~ (IData)(vlSelf->crash))) & (~ (IData)(vlSelf->land)))) {
        __Vdly__land = (1U & (~ (IData)(vlSelf->ll_control__DOT__n_crash)));
        __Vdly__crash = vlSelf->ll_control__DOT__n_crash;
    }
    vlSelf->wen = ((1U & (~ (IData)(vlSelf->rst))) 
                   && (1U & (~ (IData)(vlSelf->ll_control__DOT__finished))));
    vlSelf->land = __Vdly__land;
    vlSelf->crash = __Vdly__crash;
}

void Vll_control___024root___eval_nba(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vll_control___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vll_control___024root___eval_triggers__act(Vll_control___024root* vlSelf);

bool Vll_control___024root___eval_phase__act(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vll_control___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vll_control___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vll_control___024root___eval_phase__nba(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vll_control___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vll_control___024root___dump_triggers__ico(Vll_control___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vll_control___024root___dump_triggers__nba(Vll_control___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vll_control___024root___dump_triggers__act(Vll_control___024root* vlSelf);
#endif  // VL_DEBUG

void Vll_control___024root___eval(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vll_control___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 109, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vll_control___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vll_control___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("top.sv", 109, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vll_control___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 109, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vll_control___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vll_control___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vll_control___024root___eval_debug_assertions(Vll_control___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
