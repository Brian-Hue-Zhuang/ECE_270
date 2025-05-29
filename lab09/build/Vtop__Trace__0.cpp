// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Vtop___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_0_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__keyout),5);
        bufp->chgBit(oldp+1,((0x10U == (IData)(vlSelf->top__DOT__keyout))));
        bufp->chgBit(oldp+2,((1U & (IData)(vlSelf->top__DOT__keyout))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+3,(vlSelf->top__DOT__clock));
        bufp->chgBit(oldp+4,(vlSelf->top__DOT__strobe));
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__psc__DOT__counter),8);
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__sk1__DOT__press_state));
    }
    bufp->chgBit(oldp+7,(vlSelf->hz100));
    bufp->chgBit(oldp+8,(vlSelf->reset));
    bufp->chgIData(oldp+9,(vlSelf->pb),21);
    bufp->chgCData(oldp+10,(vlSelf->left),8);
    bufp->chgCData(oldp+11,(vlSelf->right),8);
    bufp->chgCData(oldp+12,(vlSelf->ss7),8);
    bufp->chgCData(oldp+13,(vlSelf->ss6),8);
    bufp->chgCData(oldp+14,(vlSelf->ss5),8);
    bufp->chgCData(oldp+15,(vlSelf->ss4),8);
    bufp->chgCData(oldp+16,(vlSelf->ss3),8);
    bufp->chgCData(oldp+17,(vlSelf->ss2),8);
    bufp->chgCData(oldp+18,(vlSelf->ss1),8);
    bufp->chgCData(oldp+19,(vlSelf->ss0),8);
    bufp->chgBit(oldp+20,(vlSelf->red));
    bufp->chgBit(oldp+21,(vlSelf->green));
    bufp->chgBit(oldp+22,(vlSelf->blue));
    bufp->chgCData(oldp+23,(vlSelf->txdata),8);
    bufp->chgCData(oldp+24,(vlSelf->rxdata),8);
    bufp->chgBit(oldp+25,(vlSelf->txclk));
    bufp->chgBit(oldp+26,(vlSelf->rxclk));
    bufp->chgBit(oldp+27,(vlSelf->txready));
    bufp->chgBit(oldp+28,(vlSelf->rxready));
    bufp->chgCData(oldp+29,(vlSelf->top__DOT__seq),8);
    bufp->chgCData(oldp+30,(vlSelf->top__DOT__check__DOT__lockstate),4);
    bufp->chgCData(oldp+31,(vlSelf->top__DOT__check__DOT__n_lockstate),4);
    bufp->chgBit(oldp+32,(((1U & (IData)(vlSelf->top__DOT__keyout)) 
                           == (1U & ((IData)(vlSelf->top__DOT__seq) 
                                     >> (7U & (~ (IData)(vlSelf->top__DOT__check__DOT__lockstate))))))));
    bufp->chgBit(oldp+33,(((~ (IData)((0U != (0xfU 
                                              & ((IData)(vlSelf->top__DOT__keyout) 
                                                 >> 1U))))) 
                           & (8U == (IData)(vlSelf->top__DOT__check__DOT__lockstate)))));
    bufp->chgQData(oldp+34,(vlSelf->top__DOT____Vcellout__info__ss),64);
    bufp->chgIData(oldp+36,((0xfffffU & vlSelf->pb)),20);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
