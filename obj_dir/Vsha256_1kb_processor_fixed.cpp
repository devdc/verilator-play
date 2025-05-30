// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsha256_1kb_processor_fixed__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsha256_1kb_processor_fixed::Vsha256_1kb_processor_fixed(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsha256_1kb_processor_fixed__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , start{vlSymsp->TOP.start}
    , done{vlSymsp->TOP.done}
    , data_in{vlSymsp->TOP.data_in}
    , hash_out{vlSymsp->TOP.hash_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsha256_1kb_processor_fixed::Vsha256_1kb_processor_fixed(const char* _vcname__)
    : Vsha256_1kb_processor_fixed(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsha256_1kb_processor_fixed::~Vsha256_1kb_processor_fixed() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsha256_1kb_processor_fixed___024root___eval_debug_assertions(Vsha256_1kb_processor_fixed___024root* vlSelf);
#endif  // VL_DEBUG
void Vsha256_1kb_processor_fixed___024root___eval_static(Vsha256_1kb_processor_fixed___024root* vlSelf);
void Vsha256_1kb_processor_fixed___024root___eval_initial(Vsha256_1kb_processor_fixed___024root* vlSelf);
void Vsha256_1kb_processor_fixed___024root___eval_settle(Vsha256_1kb_processor_fixed___024root* vlSelf);
void Vsha256_1kb_processor_fixed___024root___eval(Vsha256_1kb_processor_fixed___024root* vlSelf);

void Vsha256_1kb_processor_fixed::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsha256_1kb_processor_fixed::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsha256_1kb_processor_fixed___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsha256_1kb_processor_fixed___024root___eval_static(&(vlSymsp->TOP));
        Vsha256_1kb_processor_fixed___024root___eval_initial(&(vlSymsp->TOP));
        Vsha256_1kb_processor_fixed___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsha256_1kb_processor_fixed___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsha256_1kb_processor_fixed::eventsPending() { return false; }

uint64_t Vsha256_1kb_processor_fixed::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsha256_1kb_processor_fixed::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsha256_1kb_processor_fixed___024root___eval_final(Vsha256_1kb_processor_fixed___024root* vlSelf);

VL_ATTR_COLD void Vsha256_1kb_processor_fixed::final() {
    Vsha256_1kb_processor_fixed___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsha256_1kb_processor_fixed::hierName() const { return vlSymsp->name(); }
const char* Vsha256_1kb_processor_fixed::modelName() const { return "Vsha256_1kb_processor_fixed"; }
unsigned Vsha256_1kb_processor_fixed::threads() const { return 1; }
void Vsha256_1kb_processor_fixed::prepareClone() const { contextp()->prepareClone(); }
void Vsha256_1kb_processor_fixed::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsha256_1kb_processor_fixed::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsha256_1kb_processor_fixed___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsha256_1kb_processor_fixed___024root__trace_init_top(Vsha256_1kb_processor_fixed___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsha256_1kb_processor_fixed___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsha256_1kb_processor_fixed___024root*>(voidSelf);
    Vsha256_1kb_processor_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    if (strlen(vlSymsp->name())) tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsha256_1kb_processor_fixed___024root__trace_decl_types(tracep);
    Vsha256_1kb_processor_fixed___024root__trace_init_top(vlSelf, tracep);
    if (strlen(vlSymsp->name())) tracep->popPrefix();
}

VL_ATTR_COLD void Vsha256_1kb_processor_fixed___024root__trace_register(Vsha256_1kb_processor_fixed___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsha256_1kb_processor_fixed::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsha256_1kb_processor_fixed::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsha256_1kb_processor_fixed___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
