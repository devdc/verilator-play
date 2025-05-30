// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsha256_processor_tb__Syms.h"


VL_ATTR_COLD void Vsha256_processor_tb___024root__trace_init_sub__TOP__0(Vsha256_processor_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+98,0,"ext_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"test_complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"test_passed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("sha256_processor_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"ext_clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"test_complete",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+100,0,"test_passed",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"data_in",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+4,0,"data_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"data_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+7,0,"hash_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+15,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"FILE_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declArray(c+102,0,"EXPECTED_HASH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->pushPrefix("uut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"data_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBit(c+4,0,"data_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"data_last",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+7,0,"hash_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+15,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+101,0,"BLOCK_SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+16,0,"block_buffer",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declBus(c+32,0,"byte_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+33,0,"block_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+110,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+111,0,"LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+112,0,"PAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+113,0,"HASH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declArray(c+35,0,"core_hash_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+43,0,"core_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"core_start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+45,0,"core_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+61,0,"core_hash_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+69,0,"core_use_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+7,0,"hash_state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declQuad(c+70,0,"total_bits",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+72,0,"seen_last",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+73,0,"need_length_block",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"pad_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+75,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->pushPrefix("sha_core", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+98,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+45,0,"block_in",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 511,0);
    tracep->declArray(c+61,0,"hash_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+69,0,"use_init",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declArray(c+35,0,"hash_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 255,0);
    tracep->declBit(c+43,0,"ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+115,0,"H0_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+116,0,"H1_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+117,0,"H2_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+118,0,"H3_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,0,"H4_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,0,"H5_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,0,"H6_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,0,"H7_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+76,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,0,"c",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,0,"d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,0,"e",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,0,"f",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,0,"g",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"h",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+84,0,"h0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+85,0,"h1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,0,"h2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,0,"h3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,0,"h4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,0,"h5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,0,"h6",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,0,"h7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,0,"t",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+93,0,"msg_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+94,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+123,0,"IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+124,0,"PREP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+125,0,"COMP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+126,0,"DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+95,0,"T1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+96,0,"T2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+97,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsha256_processor_tb___024root__trace_init_top(Vsha256_processor_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsha256_processor_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsha256_processor_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsha256_processor_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsha256_processor_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsha256_processor_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsha256_processor_tb___024root__trace_register(Vsha256_processor_tb___024root* vlSelf, VerilatedVcd* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsha256_processor_tb___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vsha256_processor_tb___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vsha256_processor_tb___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vsha256_processor_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsha256_processor_tb___024root__trace_const_0_sub_0(Vsha256_processor_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsha256_processor_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root__trace_const_0\n"); );
    // Init
    Vsha256_processor_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsha256_processor_tb___024root*>(voidSelf);
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsha256_processor_tb___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

extern const VlWide<8>/*255:0*/ Vsha256_processor_tb__ConstPool__CONST_h7044a45f_0;

VL_ATTR_COLD void Vsha256_processor_tb___024root__trace_const_0_sub_0(Vsha256_processor_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+101,(0x40U),32);
    bufp->fullWData(oldp+102,(Vsha256_processor_tb__ConstPool__CONST_h7044a45f_0),256);
    bufp->fullIData(oldp+110,(0U),32);
    bufp->fullIData(oldp+111,(1U),32);
    bufp->fullIData(oldp+112,(2U),32);
    bufp->fullIData(oldp+113,(3U),32);
    bufp->fullIData(oldp+114,(4U),32);
    bufp->fullIData(oldp+115,(0x6a09e667U),32);
    bufp->fullIData(oldp+116,(0xbb67ae85U),32);
    bufp->fullIData(oldp+117,(0x3c6ef372U),32);
    bufp->fullIData(oldp+118,(0xa54ff53aU),32);
    bufp->fullIData(oldp+119,(0x510e527fU),32);
    bufp->fullIData(oldp+120,(0x9b05688cU),32);
    bufp->fullIData(oldp+121,(0x1f83d9abU),32);
    bufp->fullIData(oldp+122,(0x5be0cd19U),32);
    bufp->fullCData(oldp+123,(0U),2);
    bufp->fullCData(oldp+124,(1U),2);
    bufp->fullCData(oldp+125,(2U),2);
    bufp->fullCData(oldp+126,(3U),2);
}

VL_ATTR_COLD void Vsha256_processor_tb___024root__trace_full_0_sub_0(Vsha256_processor_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsha256_processor_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root__trace_full_0\n"); );
    // Init
    Vsha256_processor_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsha256_processor_tb___024root*>(voidSelf);
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsha256_processor_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsha256_processor_tb___024root__trace_full_0_sub_0(Vsha256_processor_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Vsha256_processor_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsha256_processor_tb___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.sha256_processor_tb__DOT__rst));
    bufp->fullBit(oldp+2,(vlSelfRef.sha256_processor_tb__DOT__start));
    bufp->fullCData(oldp+3,(vlSelfRef.sha256_processor_tb__DOT__data_in),8);
    bufp->fullBit(oldp+4,(vlSelfRef.sha256_processor_tb__DOT__data_valid));
    bufp->fullBit(oldp+5,(vlSelfRef.sha256_processor_tb__DOT__data_last));
    bufp->fullIData(oldp+6,(vlSelfRef.sha256_processor_tb__DOT__i),32);
    bufp->fullWData(oldp+7,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__hash_state),256);
    bufp->fullBit(oldp+15,((4U == (IData)(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__state))));
    bufp->fullWData(oldp+16,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_buffer),512);
    bufp->fullCData(oldp+32,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__byte_index),6);
    bufp->fullBit(oldp+33,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__block_ready));
    bufp->fullCData(oldp+34,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__state),3);
    bufp->fullWData(oldp+35,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_out),256);
    bufp->fullBit(oldp+43,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_ready));
    bufp->fullBit(oldp+44,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_start));
    bufp->fullWData(oldp+45,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_block),512);
    bufp->fullWData(oldp+61,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_hash_init),256);
    bufp->fullBit(oldp+69,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__core_use_init));
    bufp->fullQData(oldp+70,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__total_bits),64);
    bufp->fullBit(oldp+72,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__seen_last));
    bufp->fullBit(oldp+73,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__need_length_block));
    bufp->fullCData(oldp+74,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__pad_index),6);
    bufp->fullIData(oldp+75,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__i),32);
    bufp->fullIData(oldp+76,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__a),32);
    bufp->fullIData(oldp+77,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__b),32);
    bufp->fullIData(oldp+78,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__c),32);
    bufp->fullIData(oldp+79,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__d),32);
    bufp->fullIData(oldp+80,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__e),32);
    bufp->fullIData(oldp+81,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__f),32);
    bufp->fullIData(oldp+82,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__g),32);
    bufp->fullIData(oldp+83,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h),32);
    bufp->fullIData(oldp+84,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0),32);
    bufp->fullIData(oldp+85,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1),32);
    bufp->fullIData(oldp+86,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2),32);
    bufp->fullIData(oldp+87,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3),32);
    bufp->fullIData(oldp+88,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4),32);
    bufp->fullIData(oldp+89,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5),32);
    bufp->fullIData(oldp+90,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6),32);
    bufp->fullIData(oldp+91,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7),32);
    bufp->fullCData(oldp+92,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t),7);
    bufp->fullCData(oldp+93,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__msg_idx),7);
    bufp->fullCData(oldp+94,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__state),2);
    bufp->fullIData(oldp+95,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__T1),32);
    bufp->fullIData(oldp+96,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__T2),32);
    bufp->fullIData(oldp+97,(vlSelfRef.sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__i),32);
    bufp->fullBit(oldp+98,(vlSelfRef.ext_clk));
    bufp->fullBit(oldp+99,(vlSelfRef.test_complete));
    bufp->fullBit(oldp+100,(vlSelfRef.test_passed));
}
