// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsha256_processor_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsha256_processor_tb::Vsha256_processor_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsha256_processor_tb__Syms(contextp(), _vcname__, this)}
    , ext_clk{vlSymsp->TOP.ext_clk}
    , test_complete{vlSymsp->TOP.test_complete}
    , test_passed{vlSymsp->TOP.test_passed}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsha256_processor_tb::Vsha256_processor_tb(const char* _vcname__)
    : Vsha256_processor_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsha256_processor_tb::~Vsha256_processor_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsha256_processor_tb___024root___eval_debug_assertions(Vsha256_processor_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vsha256_processor_tb___024root___eval_static(Vsha256_processor_tb___024root* vlSelf);
void Vsha256_processor_tb___024root___eval_initial(Vsha256_processor_tb___024root* vlSelf);
void Vsha256_processor_tb___024root___eval_settle(Vsha256_processor_tb___024root* vlSelf);
void Vsha256_processor_tb___024root___eval(Vsha256_processor_tb___024root* vlSelf);

void Vsha256_processor_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsha256_processor_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsha256_processor_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsha256_processor_tb___024root___eval_static(&(vlSymsp->TOP));
        Vsha256_processor_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vsha256_processor_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsha256_processor_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsha256_processor_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vsha256_processor_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vsha256_processor_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsha256_processor_tb___024root___eval_final(Vsha256_processor_tb___024root* vlSelf);

VL_ATTR_COLD void Vsha256_processor_tb::final() {
    Vsha256_processor_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsha256_processor_tb::hierName() const { return vlSymsp->name(); }
const char* Vsha256_processor_tb::modelName() const { return "Vsha256_processor_tb"; }
unsigned Vsha256_processor_tb::threads() const { return 1; }
void Vsha256_processor_tb::prepareClone() const { contextp()->prepareClone(); }
void Vsha256_processor_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsha256_processor_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsha256_processor_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsha256_processor_tb___024root__trace_init_top(Vsha256_processor_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsha256_processor_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsha256_processor_tb___024root*>(voidSelf);
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsha256_processor_tb___024root__trace_decl_types(tracep);
    Vsha256_processor_tb___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vsha256_processor_tb___024root__trace_register(Vsha256_processor_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsha256_processor_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsha256_processor_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsha256_processor_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
