// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vll_control__Syms.h"


void Vll_control___024root__trace_chg_0_sub_0(Vll_control___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vll_control___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_chg_0\n"); );
    // Init
    Vll_control___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vll_control___024root*>(voidSelf);
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vll_control___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vll_control___024root__trace_chg_0_sub_0(Vll_control___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgSData(oldp+0,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT____Vcellout__bcd3__s) 
                                 << 0xcU) | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)
                                                ? (
                                                   (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a) 
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
                                                : (
                                                   ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a) 
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
                                                          | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa0__a))))))))),16);
        bufp->chgBit(oldp+1,(vlSelf->ll_control__DOT__n_crash));
        bufp->chgBit(oldp+2,((1U & (~ (IData)(vlSelf->ll_control__DOT__n_crash)))));
        bufp->chgBit(oldp+3,((1U & (~ (IData)(vlSelf->ll_control__DOT__finished)))));
        bufp->chgBit(oldp+4,(vlSelf->ll_control__DOT__finished));
        bufp->chgSData(oldp+5,((((IData)(vlSelf->ll_control__DOT__add__DOT____Vcellout__comp3__out) 
                                 << 0xcU) | (((IData)(vlSelf->ll_control__DOT__add__DOT____Vcellout__comp2__out) 
                                              << 8U) 
                                             | (((IData)(vlSelf->ll_control__DOT__add__DOT____Vcellout__comp1__out) 
                                                 << 4U) 
                                                | (IData)(vlSelf->ll_control__DOT__add__DOT____Vcellout__comp0__out))))),16);
        bufp->chgBit(oldp+6,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b));
        bufp->chgBit(oldp+7,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b));
        bufp->chgBit(oldp+8,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b));
        bufp->chgBit(oldp+9,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b));
        bufp->chgCData(oldp+10,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b)
                                  ? ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                       ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                           & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                          | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                              | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                             & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2)))) 
                                      << 3U) | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                                  ^ 
                                                  ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                                   ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2))) 
                                                 << 2U) 
                                                | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                     ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa0__a))))
                                  : (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                      << 3U) | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa0__a)))))),4);
        bufp->chgCData(oldp+11,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                  << 3U) | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                             << 2U) 
                                            | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                << 1U) 
                                               | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa0__a))))),4);
        bufp->chgCData(oldp+12,(((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                   ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                       & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                      | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                          | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                         & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2)))) 
                                  << 3U) | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                              ^ ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                                << 1U) 
                                               | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa0__a))))),4);
        bufp->chgBit(oldp+13,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a) 
                               & (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                   & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                      | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2))))));
        bufp->chgBit(oldp+14,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c1));
        bufp->chgBit(oldp+15,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c2));
        bufp->chgBit(oldp+16,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c3));
        bufp->chgBit(oldp+17,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa0__a));
        bufp->chgBit(oldp+18,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a));
        bufp->chgBit(oldp+19,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a));
        bufp->chgBit(oldp+20,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a));
        bufp->chgCData(oldp+21,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                  << 2U) | ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                            << 1U))),4);
        bufp->chgBit(oldp+22,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2));
        bufp->chgBit(oldp+23,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                   | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2)))));
        bufp->chgBit(oldp+24,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a) 
                               ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b))));
        bufp->chgBit(oldp+25,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                               ^ ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                  ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2)))));
        bufp->chgBit(oldp+26,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a) 
                               ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                   & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                      | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2))))));
        bufp->chgCData(oldp+27,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b)
                                  ? ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                       ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                           & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                          | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                              | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                             & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2)))) 
                                      << 3U) | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                                  ^ 
                                                  ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                                   ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2))) 
                                                 << 2U) 
                                                | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                     ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa0__a))))
                                  : (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                      << 3U) | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa0__a)))))),4);
        bufp->chgCData(oldp+28,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                  << 3U) | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                             << 2U) 
                                            | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                << 1U) 
                                               | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa0__a))))),4);
        bufp->chgCData(oldp+29,(((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                   ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                       & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                      | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                          | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                         & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2)))) 
                                  << 3U) | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                              ^ ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                                << 1U) 
                                               | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa0__a))))),4);
        bufp->chgBit(oldp+30,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a) 
                               & (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                   & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                      | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2))))));
        bufp->chgBit(oldp+31,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c1));
        bufp->chgBit(oldp+32,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c2));
        bufp->chgBit(oldp+33,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c3));
        bufp->chgBit(oldp+34,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa0__a));
        bufp->chgBit(oldp+35,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a));
        bufp->chgBit(oldp+36,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a));
        bufp->chgBit(oldp+37,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a));
        bufp->chgCData(oldp+38,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                  << 2U) | ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                            << 1U))),4);
        bufp->chgBit(oldp+39,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2));
        bufp->chgBit(oldp+40,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                   | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2)))));
        bufp->chgBit(oldp+41,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a) 
                               ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b))));
        bufp->chgBit(oldp+42,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                               ^ ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                  ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2)))));
        bufp->chgBit(oldp+43,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a) 
                               ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                   & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                      | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2))))));
        bufp->chgCData(oldp+44,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)
                                  ? ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                       ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                           & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                          | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                              | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                             & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2)))) 
                                      << 3U) | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                                  ^ 
                                                  ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                                   ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2))) 
                                                 << 2U) 
                                                | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                     ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa0__a))))
                                  : (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                      << 3U) | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa0__a)))))),4);
        bufp->chgCData(oldp+45,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                  << 3U) | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                             << 2U) 
                                            | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                << 1U) 
                                               | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa0__a))))),4);
        bufp->chgCData(oldp+46,(((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                   ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                       & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                      | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                          | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                         & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2)))) 
                                  << 3U) | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                              ^ ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                                << 1U) 
                                               | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa0__a))))),4);
        bufp->chgBit(oldp+47,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a) 
                               & (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                   & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                      | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2))))));
        bufp->chgBit(oldp+48,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c1));
        bufp->chgBit(oldp+49,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c2));
        bufp->chgBit(oldp+50,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c3));
        bufp->chgBit(oldp+51,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa0__a));
        bufp->chgBit(oldp+52,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a));
        bufp->chgBit(oldp+53,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a));
        bufp->chgBit(oldp+54,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a));
        bufp->chgCData(oldp+55,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                  << 2U) | ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                            << 1U))),4);
        bufp->chgBit(oldp+56,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2));
        bufp->chgBit(oldp+57,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                   | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2)))));
        bufp->chgBit(oldp+58,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a) 
                               ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b))));
        bufp->chgBit(oldp+59,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                               ^ ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                  ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2)))));
        bufp->chgBit(oldp+60,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a) 
                               ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                   & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                      | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2))))));
        bufp->chgCData(oldp+61,(vlSelf->ll_control__DOT__add__DOT__adder__DOT____Vcellout__bcd3__s),4);
        bufp->chgCData(oldp+62,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                  << 3U) | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                             << 2U) 
                                            | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                << 1U) 
                                               | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa0__a))))),4);
        bufp->chgCData(oldp+63,(((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                   ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                       & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                      | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                          | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                         & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2)))) 
                                  << 3U) | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                              ^ ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2))) 
                                             << 2U) 
                                            | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                 ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                                << 1U) 
                                               | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa0__a))))),4);
        bufp->chgBit(oldp+64,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa3__a) 
                               & (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                   & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                      | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2))))));
        bufp->chgBit(oldp+65,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c1));
        bufp->chgBit(oldp+66,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c2));
        bufp->chgBit(oldp+67,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c3));
        bufp->chgBit(oldp+68,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa0__a));
        bufp->chgBit(oldp+69,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__a));
        bufp->chgBit(oldp+70,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a));
        bufp->chgBit(oldp+71,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa3__a));
        bufp->chgCData(oldp+72,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                  << 2U) | ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                            << 1U))),4);
        bufp->chgBit(oldp+73,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2));
        bufp->chgBit(oldp+74,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                   | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2)))));
        bufp->chgBit(oldp+75,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__a) 
                               ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b))));
        bufp->chgBit(oldp+76,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a) 
                               ^ ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                  ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2)))));
        bufp->chgBit(oldp+77,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa3__a) 
                               ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                   & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                  | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                      | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                     & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2))))));
        bufp->chgCData(oldp+78,(vlSelf->ll_control__DOT__add__DOT____Vcellout__comp0__out),4);
        bufp->chgCData(oldp+79,(vlSelf->ll_control__DOT__add__DOT____Vcellout__comp1__out),4);
        bufp->chgCData(oldp+80,(vlSelf->ll_control__DOT__add__DOT____Vcellout__comp2__out),4);
        bufp->chgCData(oldp+81,(vlSelf->ll_control__DOT__add__DOT____Vcellout__comp3__out),4);
    }
    bufp->chgBit(oldp+82,(vlSelf->clk));
    bufp->chgBit(oldp+83,(vlSelf->rst));
    bufp->chgSData(oldp+84,(vlSelf->alt),16);
    bufp->chgSData(oldp+85,(vlSelf->vel),16);
    bufp->chgBit(oldp+86,(vlSelf->land));
    bufp->chgBit(oldp+87,(vlSelf->crash));
    bufp->chgBit(oldp+88,(vlSelf->wen));
    bufp->chgCData(oldp+89,((0xfU & (IData)(vlSelf->alt))),4);
    bufp->chgCData(oldp+90,((0xfU & (IData)(vlSelf->vel))),4);
    bufp->chgBit(oldp+91,((1U & ((((IData)(vlSelf->alt) 
                                   & (IData)(vlSelf->vel)) 
                                  >> 3U) | ((((IData)(vlSelf->vel) 
                                              | (IData)(vlSelf->alt)) 
                                             >> 3U) 
                                            & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c3))))));
    bufp->chgBit(oldp+92,((1U & (IData)(vlSelf->alt))));
    bufp->chgBit(oldp+93,((1U & (IData)(vlSelf->vel))));
    bufp->chgBit(oldp+94,((1U & ((IData)(vlSelf->alt) 
                                 >> 1U))));
    bufp->chgBit(oldp+95,((1U & ((IData)(vlSelf->vel) 
                                 >> 1U))));
    bufp->chgBit(oldp+96,((1U & ((IData)(vlSelf->alt) 
                                 >> 2U))));
    bufp->chgBit(oldp+97,((1U & ((IData)(vlSelf->vel) 
                                 >> 2U))));
    bufp->chgBit(oldp+98,((1U & ((IData)(vlSelf->alt) 
                                 >> 3U))));
    bufp->chgBit(oldp+99,((1U & ((IData)(vlSelf->vel) 
                                 >> 3U))));
    bufp->chgCData(oldp+100,((0xfU & ((IData)(vlSelf->alt) 
                                      >> 4U))),4);
    bufp->chgCData(oldp+101,((0xfU & ((IData)(vlSelf->vel) 
                                      >> 4U))),4);
    bufp->chgBit(oldp+102,((1U & ((((IData)(vlSelf->alt) 
                                    & (IData)(vlSelf->vel)) 
                                   >> 7U) | ((((IData)(vlSelf->vel) 
                                               | (IData)(vlSelf->alt)) 
                                              >> 7U) 
                                             & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c3))))));
    bufp->chgBit(oldp+103,((1U & ((IData)(vlSelf->alt) 
                                  >> 4U))));
    bufp->chgBit(oldp+104,((1U & ((IData)(vlSelf->vel) 
                                  >> 4U))));
    bufp->chgBit(oldp+105,((1U & ((IData)(vlSelf->alt) 
                                  >> 5U))));
    bufp->chgBit(oldp+106,((1U & ((IData)(vlSelf->vel) 
                                  >> 5U))));
    bufp->chgBit(oldp+107,((1U & ((IData)(vlSelf->alt) 
                                  >> 6U))));
    bufp->chgBit(oldp+108,((1U & ((IData)(vlSelf->vel) 
                                  >> 6U))));
    bufp->chgBit(oldp+109,((1U & ((IData)(vlSelf->alt) 
                                  >> 7U))));
    bufp->chgBit(oldp+110,((1U & ((IData)(vlSelf->vel) 
                                  >> 7U))));
    bufp->chgCData(oldp+111,((0xfU & ((IData)(vlSelf->alt) 
                                      >> 8U))),4);
    bufp->chgCData(oldp+112,((0xfU & ((IData)(vlSelf->vel) 
                                      >> 8U))),4);
    bufp->chgBit(oldp+113,((1U & ((((IData)(vlSelf->alt) 
                                    & (IData)(vlSelf->vel)) 
                                   >> 0xbU) | ((((IData)(vlSelf->vel) 
                                                 | (IData)(vlSelf->alt)) 
                                                >> 0xbU) 
                                               & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c3))))));
    bufp->chgBit(oldp+114,((1U & ((IData)(vlSelf->alt) 
                                  >> 8U))));
    bufp->chgBit(oldp+115,((1U & ((IData)(vlSelf->vel) 
                                  >> 8U))));
    bufp->chgBit(oldp+116,((1U & ((IData)(vlSelf->alt) 
                                  >> 9U))));
    bufp->chgBit(oldp+117,((1U & ((IData)(vlSelf->vel) 
                                  >> 9U))));
    bufp->chgBit(oldp+118,((1U & ((IData)(vlSelf->alt) 
                                  >> 0xaU))));
    bufp->chgBit(oldp+119,((1U & ((IData)(vlSelf->vel) 
                                  >> 0xaU))));
    bufp->chgBit(oldp+120,((1U & ((IData)(vlSelf->alt) 
                                  >> 0xbU))));
    bufp->chgBit(oldp+121,((1U & ((IData)(vlSelf->vel) 
                                  >> 0xbU))));
    bufp->chgCData(oldp+122,((0xfU & ((IData)(vlSelf->alt) 
                                      >> 0xcU))),4);
    bufp->chgCData(oldp+123,((0xfU & ((IData)(vlSelf->vel) 
                                      >> 0xcU))),4);
    bufp->chgBit(oldp+124,((1U & ((((IData)(vlSelf->alt) 
                                    & (IData)(vlSelf->vel)) 
                                   >> 0xfU) | ((((IData)(vlSelf->vel) 
                                                 | (IData)(vlSelf->alt)) 
                                                >> 0xfU) 
                                               & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c3))))));
    bufp->chgBit(oldp+125,((1U & ((IData)(vlSelf->alt) 
                                  >> 0xcU))));
    bufp->chgBit(oldp+126,((1U & ((IData)(vlSelf->vel) 
                                  >> 0xcU))));
    bufp->chgBit(oldp+127,((1U & ((IData)(vlSelf->alt) 
                                  >> 0xdU))));
    bufp->chgBit(oldp+128,((1U & ((IData)(vlSelf->vel) 
                                  >> 0xdU))));
    bufp->chgBit(oldp+129,((1U & ((IData)(vlSelf->alt) 
                                  >> 0xeU))));
    bufp->chgBit(oldp+130,((1U & ((IData)(vlSelf->vel) 
                                  >> 0xeU))));
    bufp->chgBit(oldp+131,((1U & ((IData)(vlSelf->alt) 
                                  >> 0xfU))));
    bufp->chgBit(oldp+132,((1U & ((IData)(vlSelf->vel) 
                                  >> 0xfU))));
}

void Vll_control___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_cleanup\n"); );
    // Init
    Vll_control___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vll_control___024root*>(voidSelf);
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
