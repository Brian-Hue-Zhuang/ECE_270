// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vll_control__Syms.h"


VL_ATTR_COLD void Vll_control___024root__trace_init_sub__TOP__0(Vll_control___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+83,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"alt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"vel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+87,0,"land",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"crash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("ll_control", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+83,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+85,0,"alt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"vel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+87,0,"land",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"crash",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+89,0,"wen",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"sum",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+134,0,"status",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"n_crash",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"n_land",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+4,0,"n_wen",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"finished",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("add", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+85,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+135,0,"op",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+6,0,"b_comp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"b_final",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+7,0,"unused_co",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+85,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBus(c+86,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+135,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->declBit(c+7,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bcd0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+91,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+135,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"sum1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+92,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"correction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+136,0,"bcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,0,"sum2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+14,0,"placeholder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+90,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+91,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+135,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+12,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+92,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fa0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+93,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+95,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+96,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+19,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+97,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+99,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+21,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("corrected", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+12,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+22,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+135,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+13,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+14,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fa0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+18,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+19,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+25,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+20,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+23,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+26,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+21,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("bcd1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+101,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+102,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+9,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"sum1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+103,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"correction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+137,0,"bcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+30,0,"sum2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+31,0,"placeholder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+101,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+102,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+8,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+29,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+103,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fa0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+104,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+105,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+106,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+107,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+32,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+108,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+110,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+111,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("corrected", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+29,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+39,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+135,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+31,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fa0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+35,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+35,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+36,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+37,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+38,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+31,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("bcd2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+112,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+113,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+9,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"sum1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+114,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"correction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+138,0,"bcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+47,0,"sum2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+48,0,"placeholder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+112,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+113,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+9,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+114,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fa0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+115,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+9,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+117,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+49,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+53,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+119,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+50,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+54,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+121,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+51,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("corrected", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+46,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+135,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+48,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fa0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+52,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+52,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+53,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+59,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+54,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+57,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+60,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+55,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+58,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+61,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("bcd3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+123,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+7,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"sum1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+125,0,"carry",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"correction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+139,0,"bcd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+64,0,"sum2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+65,0,"placeholder",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("adder1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+123,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+124,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+10,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+125,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fa0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+126,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+127,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+10,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+128,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+129,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+130,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+131,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+67,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+132,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+68,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("corrected", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+63,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+73,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+135,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+65,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"c1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"c2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"c3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("fa0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+69,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+69,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+70,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+76,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+71,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+7,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+74,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fa3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+72,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+75,0,"ci",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"s",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+65,0,"co",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("comp0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+91,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+79,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("comp1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+102,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+80,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("comp2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+113,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+81,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("comp3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+124,0,"in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+82,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vll_control___024root__trace_init_top(Vll_control___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_init_top\n"); );
    // Body
    Vll_control___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vll_control___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Vll_control___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vll_control___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vll_control___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vll_control___024root__trace_register(Vll_control___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vll_control___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vll_control___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vll_control___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vll_control___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vll_control___024root__trace_const_0_sub_0(Vll_control___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vll_control___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_const_0\n"); );
    // Init
    Vll_control___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vll_control___024root*>(voidSelf);
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vll_control___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vll_control___024root__trace_const_0_sub_0(Vll_control___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+134,(vlSelf->ll_control__DOT__status));
    bufp->fullBit(oldp+135,(0U));
    bufp->fullCData(oldp+136,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__bcd),4);
    bufp->fullCData(oldp+137,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__bcd),4);
    bufp->fullCData(oldp+138,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__bcd),4);
    bufp->fullCData(oldp+139,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__bcd),4);
}

VL_ATTR_COLD void Vll_control___024root__trace_full_0_sub_0(Vll_control___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vll_control___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_full_0\n"); );
    // Init
    Vll_control___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vll_control___024root*>(voidSelf);
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vll_control___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vll_control___024root__trace_full_0_sub_0(Vll_control___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vll_control___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullSData(oldp+1,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT____Vcellout__bcd3__s) 
                              << 0xcU) | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)
                                             ? ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a) 
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
                                             : (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                                 << 3U) 
                                                | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                                    << 2U) 
                                                   | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                       << 1U) 
                                                      | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa0__a))))) 
                                           << 8U) | 
                                          ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b)
                                              ? ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a) 
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
                                              : (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa0__a))))) 
                                            << 4U) 
                                           | ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b)
                                               ? ((
                                                   ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a) 
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
                                               : (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa0__a))))))))),16);
    bufp->fullBit(oldp+2,(vlSelf->ll_control__DOT__n_crash));
    bufp->fullBit(oldp+3,((1U & (~ (IData)(vlSelf->ll_control__DOT__n_crash)))));
    bufp->fullBit(oldp+4,((1U & (~ (IData)(vlSelf->ll_control__DOT__finished)))));
    bufp->fullBit(oldp+5,(vlSelf->ll_control__DOT__finished));
    bufp->fullSData(oldp+6,((((IData)(vlSelf->ll_control__DOT__add__DOT____Vcellout__comp3__out) 
                              << 0xcU) | (((IData)(vlSelf->ll_control__DOT__add__DOT____Vcellout__comp2__out) 
                                           << 8U) | 
                                          (((IData)(vlSelf->ll_control__DOT__add__DOT____Vcellout__comp1__out) 
                                            << 4U) 
                                           | (IData)(vlSelf->ll_control__DOT__add__DOT____Vcellout__comp0__out))))),16);
    bufp->fullBit(oldp+7,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b));
    bufp->fullBit(oldp+8,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b));
    bufp->fullBit(oldp+9,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b));
    bufp->fullBit(oldp+10,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b));
    bufp->fullCData(oldp+11,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b)
                               ? ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a) 
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
                                                | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa0__a))))
                               : (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                   << 3U) | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                              << 2U) 
                                             | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                 << 1U) 
                                                | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa0__a)))))),4);
    bufp->fullCData(oldp+12,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a) 
                               << 3U) | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                          << 2U) | 
                                         (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                           << 1U) | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa0__a))))),4);
    bufp->fullCData(oldp+13,(((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                    & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                   | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                       | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                      & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2)))) 
                               << 3U) | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                           ^ ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                              ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2))) 
                                          << 2U) | 
                                         ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                            ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                           << 1U) | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa0__a))))),4);
    bufp->fullBit(oldp+14,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a) 
                            & (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                   | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2))))));
    bufp->fullBit(oldp+15,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c1));
    bufp->fullBit(oldp+16,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c2));
    bufp->fullBit(oldp+17,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c3));
    bufp->fullBit(oldp+18,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa0__a));
    bufp->fullBit(oldp+19,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a));
    bufp->fullBit(oldp+20,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a));
    bufp->fullBit(oldp+21,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a));
    bufp->fullCData(oldp+22,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                               << 2U) | ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                         << 1U))),4);
    bufp->fullBit(oldp+23,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2));
    bufp->fullBit(oldp+24,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                             & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                            | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                               & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2)))));
    bufp->fullBit(oldp+25,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__a) 
                            ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b))));
    bufp->fullBit(oldp+26,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                            ^ ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                               ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2)))));
    bufp->fullBit(oldp+27,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa3__a) 
                            ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                   | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__corrected__DOT__c2))))));
    bufp->fullCData(oldp+28,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b)
                               ? ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a) 
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
                                                | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa0__a))))
                               : (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                   << 3U) | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                              << 2U) 
                                             | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                 << 1U) 
                                                | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa0__a)))))),4);
    bufp->fullCData(oldp+29,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a) 
                               << 3U) | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                          << 2U) | 
                                         (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                           << 1U) | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa0__a))))),4);
    bufp->fullCData(oldp+30,(((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                    & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                   | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                       | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                      & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2)))) 
                               << 3U) | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                           ^ ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                              ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2))) 
                                          << 2U) | 
                                         ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                            ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                           << 1U) | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa0__a))))),4);
    bufp->fullBit(oldp+31,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a) 
                            & (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                   | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2))))));
    bufp->fullBit(oldp+32,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c1));
    bufp->fullBit(oldp+33,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c2));
    bufp->fullBit(oldp+34,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c3));
    bufp->fullBit(oldp+35,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa0__a));
    bufp->fullBit(oldp+36,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a));
    bufp->fullBit(oldp+37,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a));
    bufp->fullBit(oldp+38,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a));
    bufp->fullCData(oldp+39,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                               << 2U) | ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                         << 1U))),4);
    bufp->fullBit(oldp+40,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2));
    bufp->fullBit(oldp+41,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                             & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                            | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                               & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2)))));
    bufp->fullBit(oldp+42,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__a) 
                            ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b))));
    bufp->fullBit(oldp+43,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                            ^ ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                               ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2)))));
    bufp->fullBit(oldp+44,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa3__a) 
                            ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                   | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__corrected__DOT__c2))))));
    bufp->fullCData(oldp+45,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)
                               ? ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a) 
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
                                                | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa0__a))))
                               : (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                   << 3U) | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                              << 2U) 
                                             | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                                 << 1U) 
                                                | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa0__a)))))),4);
    bufp->fullCData(oldp+46,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a) 
                               << 3U) | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                          << 2U) | 
                                         (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                           << 1U) | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa0__a))))),4);
    bufp->fullCData(oldp+47,(((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                    & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                   | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                       | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                      & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2)))) 
                               << 3U) | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                           ^ ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                              ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2))) 
                                          << 2U) | 
                                         ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                            ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                           << 1U) | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa0__a))))),4);
    bufp->fullBit(oldp+48,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a) 
                            & (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                   | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2))))));
    bufp->fullBit(oldp+49,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c1));
    bufp->fullBit(oldp+50,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c2));
    bufp->fullBit(oldp+51,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c3));
    bufp->fullBit(oldp+52,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa0__a));
    bufp->fullBit(oldp+53,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a));
    bufp->fullBit(oldp+54,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a));
    bufp->fullBit(oldp+55,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a));
    bufp->fullCData(oldp+56,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                               << 2U) | ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                         << 1U))),4);
    bufp->fullBit(oldp+57,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2));
    bufp->fullBit(oldp+58,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                             & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                            | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                               & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2)))));
    bufp->fullBit(oldp+59,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__a) 
                            ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b))));
    bufp->fullBit(oldp+60,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                            ^ ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                               ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2)))));
    bufp->fullBit(oldp+61,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa3__a) 
                            ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                   | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__corrected__DOT__c2))))));
    bufp->fullCData(oldp+62,(vlSelf->ll_control__DOT__add__DOT__adder__DOT____Vcellout__bcd3__s),4);
    bufp->fullCData(oldp+63,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa3__a) 
                               << 3U) | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                          << 2U) | 
                                         (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                           << 1U) | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa0__a))))),4);
    bufp->fullCData(oldp+64,(((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa3__a) 
                                ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                    & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                   | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                       | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                      & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2)))) 
                               << 3U) | ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                           ^ ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                              ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2))) 
                                          << 2U) | 
                                         ((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__a) 
                                            ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                                           << 1U) | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa0__a))))),4);
    bufp->fullBit(oldp+65,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa3__a) 
                            & (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                   | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2))))));
    bufp->fullBit(oldp+66,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c1));
    bufp->fullBit(oldp+67,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c2));
    bufp->fullBit(oldp+68,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c3));
    bufp->fullBit(oldp+69,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa0__a));
    bufp->fullBit(oldp+70,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__a));
    bufp->fullBit(oldp+71,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a));
    bufp->fullBit(oldp+72,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa3__a));
    bufp->fullCData(oldp+73,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) 
                               << 2U) | ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                         << 1U))),4);
    bufp->fullBit(oldp+74,(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2));
    bufp->fullBit(oldp+75,((((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a) 
                             & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                            | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                               & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2)))));
    bufp->fullBit(oldp+76,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__a) 
                            ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b))));
    bufp->fullBit(oldp+77,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a) 
                            ^ ((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) 
                               ^ (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2)))));
    bufp->fullBit(oldp+78,(((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa3__a) 
                            ^ (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a) 
                                & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b)) 
                               | (((IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa1__b) 
                                   | (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT____Vcellinp__fa2__a)) 
                                  & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__corrected__DOT__c2))))));
    bufp->fullCData(oldp+79,(vlSelf->ll_control__DOT__add__DOT____Vcellout__comp0__out),4);
    bufp->fullCData(oldp+80,(vlSelf->ll_control__DOT__add__DOT____Vcellout__comp1__out),4);
    bufp->fullCData(oldp+81,(vlSelf->ll_control__DOT__add__DOT____Vcellout__comp2__out),4);
    bufp->fullCData(oldp+82,(vlSelf->ll_control__DOT__add__DOT____Vcellout__comp3__out),4);
    bufp->fullBit(oldp+83,(vlSelf->clk));
    bufp->fullBit(oldp+84,(vlSelf->rst));
    bufp->fullSData(oldp+85,(vlSelf->alt),16);
    bufp->fullSData(oldp+86,(vlSelf->vel),16);
    bufp->fullBit(oldp+87,(vlSelf->land));
    bufp->fullBit(oldp+88,(vlSelf->crash));
    bufp->fullBit(oldp+89,(vlSelf->wen));
    bufp->fullCData(oldp+90,((0xfU & (IData)(vlSelf->alt))),4);
    bufp->fullCData(oldp+91,((0xfU & (IData)(vlSelf->vel))),4);
    bufp->fullBit(oldp+92,((1U & ((((IData)(vlSelf->alt) 
                                    & (IData)(vlSelf->vel)) 
                                   >> 3U) | ((((IData)(vlSelf->vel) 
                                               | (IData)(vlSelf->alt)) 
                                              >> 3U) 
                                             & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd0__DOT__adder1__DOT__c3))))));
    bufp->fullBit(oldp+93,((1U & (IData)(vlSelf->alt))));
    bufp->fullBit(oldp+94,((1U & (IData)(vlSelf->vel))));
    bufp->fullBit(oldp+95,((1U & ((IData)(vlSelf->alt) 
                                  >> 1U))));
    bufp->fullBit(oldp+96,((1U & ((IData)(vlSelf->vel) 
                                  >> 1U))));
    bufp->fullBit(oldp+97,((1U & ((IData)(vlSelf->alt) 
                                  >> 2U))));
    bufp->fullBit(oldp+98,((1U & ((IData)(vlSelf->vel) 
                                  >> 2U))));
    bufp->fullBit(oldp+99,((1U & ((IData)(vlSelf->alt) 
                                  >> 3U))));
    bufp->fullBit(oldp+100,((1U & ((IData)(vlSelf->vel) 
                                   >> 3U))));
    bufp->fullCData(oldp+101,((0xfU & ((IData)(vlSelf->alt) 
                                       >> 4U))),4);
    bufp->fullCData(oldp+102,((0xfU & ((IData)(vlSelf->vel) 
                                       >> 4U))),4);
    bufp->fullBit(oldp+103,((1U & ((((IData)(vlSelf->alt) 
                                     & (IData)(vlSelf->vel)) 
                                    >> 7U) | ((((IData)(vlSelf->vel) 
                                                | (IData)(vlSelf->alt)) 
                                               >> 7U) 
                                              & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd1__DOT__adder1__DOT__c3))))));
    bufp->fullBit(oldp+104,((1U & ((IData)(vlSelf->alt) 
                                   >> 4U))));
    bufp->fullBit(oldp+105,((1U & ((IData)(vlSelf->vel) 
                                   >> 4U))));
    bufp->fullBit(oldp+106,((1U & ((IData)(vlSelf->alt) 
                                   >> 5U))));
    bufp->fullBit(oldp+107,((1U & ((IData)(vlSelf->vel) 
                                   >> 5U))));
    bufp->fullBit(oldp+108,((1U & ((IData)(vlSelf->alt) 
                                   >> 6U))));
    bufp->fullBit(oldp+109,((1U & ((IData)(vlSelf->vel) 
                                   >> 6U))));
    bufp->fullBit(oldp+110,((1U & ((IData)(vlSelf->alt) 
                                   >> 7U))));
    bufp->fullBit(oldp+111,((1U & ((IData)(vlSelf->vel) 
                                   >> 7U))));
    bufp->fullCData(oldp+112,((0xfU & ((IData)(vlSelf->alt) 
                                       >> 8U))),4);
    bufp->fullCData(oldp+113,((0xfU & ((IData)(vlSelf->vel) 
                                       >> 8U))),4);
    bufp->fullBit(oldp+114,((1U & ((((IData)(vlSelf->alt) 
                                     & (IData)(vlSelf->vel)) 
                                    >> 0xbU) | ((((IData)(vlSelf->vel) 
                                                  | (IData)(vlSelf->alt)) 
                                                 >> 0xbU) 
                                                & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd2__DOT__adder1__DOT__c3))))));
    bufp->fullBit(oldp+115,((1U & ((IData)(vlSelf->alt) 
                                   >> 8U))));
    bufp->fullBit(oldp+116,((1U & ((IData)(vlSelf->vel) 
                                   >> 8U))));
    bufp->fullBit(oldp+117,((1U & ((IData)(vlSelf->alt) 
                                   >> 9U))));
    bufp->fullBit(oldp+118,((1U & ((IData)(vlSelf->vel) 
                                   >> 9U))));
    bufp->fullBit(oldp+119,((1U & ((IData)(vlSelf->alt) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+120,((1U & ((IData)(vlSelf->vel) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+121,((1U & ((IData)(vlSelf->alt) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+122,((1U & ((IData)(vlSelf->vel) 
                                   >> 0xbU))));
    bufp->fullCData(oldp+123,((0xfU & ((IData)(vlSelf->alt) 
                                       >> 0xcU))),4);
    bufp->fullCData(oldp+124,((0xfU & ((IData)(vlSelf->vel) 
                                       >> 0xcU))),4);
    bufp->fullBit(oldp+125,((1U & ((((IData)(vlSelf->alt) 
                                     & (IData)(vlSelf->vel)) 
                                    >> 0xfU) | ((((IData)(vlSelf->vel) 
                                                  | (IData)(vlSelf->alt)) 
                                                 >> 0xfU) 
                                                & (IData)(vlSelf->ll_control__DOT__add__DOT__adder__DOT__bcd3__DOT__adder1__DOT__c3))))));
    bufp->fullBit(oldp+126,((1U & ((IData)(vlSelf->alt) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+127,((1U & ((IData)(vlSelf->vel) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+128,((1U & ((IData)(vlSelf->alt) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+129,((1U & ((IData)(vlSelf->vel) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+130,((1U & ((IData)(vlSelf->alt) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+131,((1U & ((IData)(vlSelf->vel) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+132,((1U & ((IData)(vlSelf->alt) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+133,((1U & ((IData)(vlSelf->vel) 
                                   >> 0xfU))));
}
