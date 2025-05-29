// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vll_control__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vll_control::Vll_control(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vll_control__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , land{vlSymsp->TOP.land}
    , crash{vlSymsp->TOP.crash}
    , wen{vlSymsp->TOP.wen}
    , alt{vlSymsp->TOP.alt}
    , vel{vlSymsp->TOP.vel}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vll_control::Vll_control(const char* _vcname__)
    : Vll_control(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vll_control::~Vll_control() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vll_control___024root___eval_debug_assertions(Vll_control___024root* vlSelf);
#endif  // VL_DEBUG
void Vll_control___024root___eval_static(Vll_control___024root* vlSelf);
void Vll_control___024root___eval_initial(Vll_control___024root* vlSelf);
void Vll_control___024root___eval_settle(Vll_control___024root* vlSelf);
void Vll_control___024root___eval(Vll_control___024root* vlSelf);

void Vll_control::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vll_control::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vll_control___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vll_control___024root___eval_static(&(vlSymsp->TOP));
        Vll_control___024root___eval_initial(&(vlSymsp->TOP));
        Vll_control___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vll_control___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vll_control::eventsPending() { return false; }

uint64_t Vll_control::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vll_control::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vll_control___024root___eval_final(Vll_control___024root* vlSelf);

VL_ATTR_COLD void Vll_control::final() {
    Vll_control___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vll_control::hierName() const { return vlSymsp->name(); }
const char* Vll_control::modelName() const { return "Vll_control"; }
unsigned Vll_control::threads() const { return 1; }
void Vll_control::prepareClone() const { contextp()->prepareClone(); }
void Vll_control::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vll_control::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vll_control___024root__trace_decl_types(VerilatedFst* tracep);

void Vll_control___024root__trace_init_top(Vll_control___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vll_control___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vll_control___024root*>(voidSelf);
    Vll_control__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vll_control___024root__trace_decl_types(tracep);
    Vll_control___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vll_control___024root__trace_register(Vll_control___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vll_control::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vll_control::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    (void)levels; (void)options; // Prevent unused variable warning
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vll_control___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
