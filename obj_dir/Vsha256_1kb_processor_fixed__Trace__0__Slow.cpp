// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsha256_1kb_processor_fixed__Syms.h"


VL_ATTR_COLD void Vsha256_1kb_processor_fixed___024root__trace_init_sub__TOP__0(Vsha256_1kb_processor_fixed___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_1kb_processor_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_1kb_processor_fixed___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+325,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+328,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8191,0);
    tracep->declArray(c+584,0,"hash_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+592,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("sha256_1kb_processor_fixed", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+325,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+327,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+328,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 8191,0);
    tracep->declArray(c+584,0,"hash_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+592,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+593,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+594,0,"PROCESSING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+595,0,"WAITING",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+596,0,"DONE_STATE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+2,0,"block_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+3,0,"core_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+4,0,"core_block_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+20,0,"core_hash_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+28,0,"core_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+29,0,"padded_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 8703,0);
    tracep->declBit(c+301,0,"core_start_delayed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+302,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("core_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+325,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+326,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+301,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+4,0,"block_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBit(c+303,0,"init_hash",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+20,0,"hash_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+28,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+597,0,"H0_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+598,0,"H1_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+599,0,"H2_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+600,0,"H3_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+601,0,"H4_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+602,0,"H5_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+603,0,"H6_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+604,0,"H7_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"h0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"h1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"h2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"h3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"h4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+317,0,"h5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"h6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"h7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+320,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+321,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+605,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+606,0,"PREP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+607,0,"COMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+608,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+322,0,"T1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+323,0,"T2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+324,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsha256_1kb_processor_fixed___024root__trace_init_top(Vsha256_1kb_processor_fixed___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_1kb_processor_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_1kb_processor_fixed___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsha256_1kb_processor_fixed___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsha256_1kb_processor_fixed___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsha256_1kb_processor_fixed___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsha256_1kb_processor_fixed___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsha256_1kb_processor_fixed___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsha256_1kb_processor_fixed___024root__trace_register(Vsha256_1kb_processor_fixed___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_1kb_processor_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_1kb_processor_fixed___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsha256_1kb_processor_fixed___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vsha256_1kb_processor_fixed___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vsha256_1kb_processor_fixed___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vsha256_1kb_processor_fixed___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsha256_1kb_processor_fixed___024root__trace_const_0_sub_0(Vsha256_1kb_processor_fixed___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsha256_1kb_processor_fixed___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_1kb_processor_fixed___024root__trace_const_0\n"); );
    // Init
    Vsha256_1kb_processor_fixed___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsha256_1kb_processor_fixed___024root*>(voidSelf);
    Vsha256_1kb_processor_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsha256_1kb_processor_fixed___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsha256_1kb_processor_fixed___024root__trace_const_0_sub_0(Vsha256_1kb_processor_fixed___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_1kb_processor_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_1kb_processor_fixed___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+593,(0U),3);
    bufp->fullCData(oldp+594,(1U),3);
    bufp->fullCData(oldp+595,(2U),3);
    bufp->fullCData(oldp+596,(3U),3);
    bufp->fullIData(oldp+597,(0x6a09e667U),32);
    bufp->fullIData(oldp+598,(0xbb67ae85U),32);
    bufp->fullIData(oldp+599,(0x3c6ef372U),32);
    bufp->fullIData(oldp+600,(0xa54ff53aU),32);
    bufp->fullIData(oldp+601,(0x510e527fU),32);
    bufp->fullIData(oldp+602,(0x9b05688cU),32);
    bufp->fullIData(oldp+603,(0x1f83d9abU),32);
    bufp->fullIData(oldp+604,(0x5be0cd19U),32);
    bufp->fullCData(oldp+605,(0U),2);
    bufp->fullCData(oldp+606,(1U),2);
    bufp->fullCData(oldp+607,(2U),2);
    bufp->fullCData(oldp+608,(3U),2);
}

VL_ATTR_COLD void Vsha256_1kb_processor_fixed___024root__trace_full_0_sub_0(Vsha256_1kb_processor_fixed___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsha256_1kb_processor_fixed___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_1kb_processor_fixed___024root__trace_full_0\n"); );
    // Init
    Vsha256_1kb_processor_fixed___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsha256_1kb_processor_fixed___024root*>(voidSelf);
    Vsha256_1kb_processor_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsha256_1kb_processor_fixed___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsha256_1kb_processor_fixed___024root__trace_full_0_sub_0(Vsha256_1kb_processor_fixed___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_1kb_processor_fixed__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_1kb_processor_fixed___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelfRef.sha256_1kb_processor_fixed__DOT__state),3);
    bufp->fullCData(oldp+2,(vlSelfRef.sha256_1kb_processor_fixed__DOT__block_count),5);
    bufp->fullBit(oldp+3,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_start));
    bufp->fullWData(oldp+4,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_block_in),512);
    bufp->fullWData(oldp+20,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_hash_out),256);
    bufp->fullBit(oldp+28,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_ready));
    bufp->fullWData(oldp+29,(vlSelfRef.sha256_1kb_processor_fixed__DOT__padded_data),8704);
    bufp->fullBit(oldp+301,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_start_delayed));
    bufp->fullIData(oldp+302,(vlSelfRef.sha256_1kb_processor_fixed__DOT__i),32);
    bufp->fullBit(oldp+303,((0U == (IData)(vlSelfRef.sha256_1kb_processor_fixed__DOT__block_count))));
    bufp->fullIData(oldp+304,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__a),32);
    bufp->fullIData(oldp+305,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__b),32);
    bufp->fullIData(oldp+306,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__c),32);
    bufp->fullIData(oldp+307,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__d),32);
    bufp->fullIData(oldp+308,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__e),32);
    bufp->fullIData(oldp+309,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__f),32);
    bufp->fullIData(oldp+310,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__g),32);
    bufp->fullIData(oldp+311,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__h),32);
    bufp->fullIData(oldp+312,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__h0),32);
    bufp->fullIData(oldp+313,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__h1),32);
    bufp->fullIData(oldp+314,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__h2),32);
    bufp->fullIData(oldp+315,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__h3),32);
    bufp->fullIData(oldp+316,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__h4),32);
    bufp->fullIData(oldp+317,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__h5),32);
    bufp->fullIData(oldp+318,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__h6),32);
    bufp->fullIData(oldp+319,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__h7),32);
    bufp->fullCData(oldp+320,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__t),7);
    bufp->fullCData(oldp+321,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__state),2);
    bufp->fullIData(oldp+322,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__T1),32);
    bufp->fullIData(oldp+323,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__T2),32);
    bufp->fullIData(oldp+324,(vlSelfRef.sha256_1kb_processor_fixed__DOT__core_inst__DOT__i),32);
    bufp->fullBit(oldp+325,(vlSelfRef.clk));
    bufp->fullBit(oldp+326,(vlSelfRef.rst));
    bufp->fullBit(oldp+327,(vlSelfRef.start));
    bufp->fullWData(oldp+328,(vlSelfRef.data_in),8192);
    bufp->fullWData(oldp+584,(vlSelfRef.hash_out),256);
    bufp->fullBit(oldp+592,(vlSelfRef.done));
}
