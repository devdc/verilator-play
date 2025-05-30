// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsha256_processor_tb__Syms.h"


void Vsha256_processor_tb___024root__trace_chg_0_sub_0(Vsha256_processor_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsha256_processor_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root__trace_chg_0\n"); );
    // Init
    Vsha256_processor_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsha256_processor_tb___024root*>(voidSelf);
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsha256_processor_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsha256_processor_tb___024root__trace_chg_0_sub_0(Vsha256_processor_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.sha256_processor_tb__DOT__rst));
        bufp->chgBit(oldp+1,(vlSelfRef.sha256_processor_tb__DOT__start));
        bufp->chgCData(oldp+2,(vlSelfRef.sha256_processor_tb__DOT__data_in),8);
        bufp->chgBit(oldp+3,(vlSelfRef.sha256_processor_tb__DOT__data_valid));
        bufp->chgBit(oldp+4,(vlSelfRef.sha256_processor_tb__DOT__data_last));
        bufp->chgIData(oldp+5,(vlSelfRef.sha256_processor_tb__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelfRef.__Vm_traceActivity[3U])) {
        bufp->chgWData(oldp+6,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state),256);
        bufp->chgBit(oldp+14,((4U == (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__state))));
        bufp->chgWData(oldp+15,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer),512);
        bufp->chgCData(oldp+31,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__byte_index),6);
        bufp->chgBit(oldp+32,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_ready));
        bufp->chgCData(oldp+33,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__state),3);
        bufp->chgWData(oldp+34,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out),256);
        bufp->chgBit(oldp+42,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_ready));
        bufp->chgBit(oldp+43,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_start));
        bufp->chgWData(oldp+44,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block),512);
        bufp->chgWData(oldp+60,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init),256);
        bufp->chgBit(oldp+68,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_use_init));
        bufp->chgBit(oldp+69,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_busy));
        bufp->chgQData(oldp+70,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__total_bits),64);
        bufp->chgBit(oldp+72,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__seen_last));
        bufp->chgBit(oldp+73,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__need_length_block));
        bufp->chgCData(oldp+74,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__pad_index),6);
        bufp->chgIData(oldp+75,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__i),32);
        bufp->chgIData(oldp+76,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__a),32);
        bufp->chgIData(oldp+77,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__b),32);
        bufp->chgIData(oldp+78,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__c),32);
        bufp->chgIData(oldp+79,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__d),32);
        bufp->chgIData(oldp+80,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__e),32);
        bufp->chgIData(oldp+81,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__f),32);
        bufp->chgIData(oldp+82,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__g),32);
        bufp->chgIData(oldp+83,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h),32);
        bufp->chgIData(oldp+84,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0),32);
        bufp->chgIData(oldp+85,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1),32);
        bufp->chgIData(oldp+86,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2),32);
        bufp->chgIData(oldp+87,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3),32);
        bufp->chgIData(oldp+88,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4),32);
        bufp->chgIData(oldp+89,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5),32);
        bufp->chgIData(oldp+90,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6),32);
        bufp->chgIData(oldp+91,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7),32);
        bufp->chgCData(oldp+92,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t),7);
        bufp->chgCData(oldp+93,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx),7);
        bufp->chgCData(oldp+94,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__state),2);
        bufp->chgIData(oldp+95,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__T1),32);
        bufp->chgIData(oldp+96,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__T2),32);
        bufp->chgIData(oldp+97,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__i),32);
    }
    bufp->chgBit(oldp+98,(vlSelfRef.ext_clk));
    bufp->chgBit(oldp+99,(vlSelfRef.test_complete));
    bufp->chgBit(oldp+100,(vlSelfRef.test_passed));
}

void Vsha256_processor_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root__trace_cleanup\n"); );
    // Init
    Vsha256_processor_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsha256_processor_tb___024root*>(voidSelf);
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
