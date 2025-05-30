// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsha256_1kb_processor_fixed.h for the primary calling header

#include "Vsha256_1kb_processor_fixed__pch.h"
#include "Vsha256_1kb_processor_fixed__Syms.h"
#include "Vsha256_1kb_processor_fixed___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsha256_1kb_processor_fixed___024root___dump_triggers__stl(Vsha256_1kb_processor_fixed___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsha256_1kb_processor_fixed___024root___eval_triggers__stl(Vsha256_1kb_processor_fixed___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_1kb_processor_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_1kb_processor_fixed___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsha256_1kb_processor_fixed___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
