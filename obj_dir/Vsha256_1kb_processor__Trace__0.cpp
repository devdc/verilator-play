// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsha256_1kb_processor__Syms.h"


void Vsha256_1kb_processor___024root__trace_chg_0_sub_0(Vsha256_1kb_processor___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsha256_1kb_processor___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_1kb_processor___024root__trace_chg_0\n"); );
    // Init
    Vsha256_1kb_processor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsha256_1kb_processor___024root*>(voidSelf);
    Vsha256_1kb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsha256_1kb_processor___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsha256_1kb_processor___024root__trace_chg_0_sub_0(Vsha256_1kb_processor___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_1kb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_1kb_processor___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[1U])) {
        bufp->chgCData(oldp+0,(vlSelfRef.sha256_1kb_processor__DOT__state),3);
        bufp->chgCData(oldp+1,(vlSelfRef.sha256_1kb_processor__DOT__block_count),5);
        bufp->chgBit(oldp+2,(vlSelfRef.sha256_1kb_processor__DOT__core_start));
        bufp->chgWData(oldp+3,(vlSelfRef.sha256_1kb_processor__DOT__core_block_in),512);
        bufp->chgWData(oldp+19,(vlSelfRef.sha256_1kb_processor__DOT__core_hash_out),256);
        bufp->chgBit(oldp+27,(vlSelfRef.sha256_1kb_processor__DOT__core_ready));
        bufp->chgWData(oldp+28,(vlSelfRef.sha256_1kb_processor__DOT__padded_data),8704);
        bufp->chgIData(oldp+300,(vlSelfRef.sha256_1kb_processor__DOT__i),32);
        bufp->chgBit(oldp+301,((0U == (IData)(vlSelfRef.sha256_1kb_processor__DOT__block_count))));
        bufp->chgIData(oldp+302,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__a),32);
        bufp->chgIData(oldp+303,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__b),32);
        bufp->chgIData(oldp+304,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__c),32);
        bufp->chgIData(oldp+305,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__d),32);
        bufp->chgIData(oldp+306,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__e),32);
        bufp->chgIData(oldp+307,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__f),32);
        bufp->chgIData(oldp+308,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__g),32);
        bufp->chgIData(oldp+309,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h),32);
        bufp->chgIData(oldp+310,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h0),32);
        bufp->chgIData(oldp+311,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h1),32);
        bufp->chgIData(oldp+312,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h2),32);
        bufp->chgIData(oldp+313,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h3),32);
        bufp->chgIData(oldp+314,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h4),32);
        bufp->chgIData(oldp+315,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h5),32);
        bufp->chgIData(oldp+316,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h6),32);
        bufp->chgIData(oldp+317,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__h7),32);
        bufp->chgCData(oldp+318,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__t),6);
        bufp->chgCData(oldp+319,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__msg_idx),6);
        bufp->chgCData(oldp+320,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__state),2);
        bufp->chgIData(oldp+321,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__T1),32);
        bufp->chgIData(oldp+322,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__T2),32);
        bufp->chgIData(oldp+323,(vlSelfRef.sha256_1kb_processor__DOT__core_inst__DOT__i),32);
    }
    bufp->chgBit(oldp+324,(vlSelfRef.clk));
    bufp->chgBit(oldp+325,(vlSelfRef.rst));
    bufp->chgBit(oldp+326,(vlSelfRef.start));
    bufp->chgWData(oldp+327,(vlSelfRef.data_in),8192);
    bufp->chgWData(oldp+583,(vlSelfRef.hash_out),256);
    bufp->chgBit(oldp+591,(vlSelfRef.done));
}

void Vsha256_1kb_processor___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_1kb_processor___024root__trace_cleanup\n"); );
    // Init
    Vsha256_1kb_processor___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsha256_1kb_processor___024root*>(voidSelf);
    Vsha256_1kb_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
