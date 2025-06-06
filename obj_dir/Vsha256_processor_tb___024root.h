// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsha256_processor_tb.h for the primary calling header

#ifndef VERILATED_VSHA256_PROCESSOR_TB___024ROOT_H_
#define VERILATED_VSHA256_PROCESSOR_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vsha256_processor_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsha256_processor_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(ext_clk,0,0);
        CData/*0:0*/ sha256_processor_tb__DOT__rst;
        VL_OUT8(test_complete,0,0);
        VL_OUT8(test_passed,0,0);
        CData/*0:0*/ sha256_processor_tb__DOT__start;
        CData/*7:0*/ sha256_processor_tb__DOT__data_in;
        CData/*0:0*/ sha256_processor_tb__DOT__data_valid;
        CData/*0:0*/ sha256_processor_tb__DOT__data_last;
        CData/*5:0*/ sha256_processor_tb__DOT__uut__DOT__byte_index;
        CData/*0:0*/ sha256_processor_tb__DOT__uut__DOT__block_ready;
        CData/*2:0*/ sha256_processor_tb__DOT__uut__DOT__state;
        CData/*0:0*/ sha256_processor_tb__DOT__uut__DOT__core_ready;
        CData/*0:0*/ sha256_processor_tb__DOT__uut__DOT__core_start;
        CData/*0:0*/ sha256_processor_tb__DOT__uut__DOT__core_use_init;
        CData/*0:0*/ sha256_processor_tb__DOT__uut__DOT__core_busy;
        CData/*0:0*/ sha256_processor_tb__DOT__uut__DOT__core_ready_prev;
        CData/*0:0*/ sha256_processor_tb__DOT__uut__DOT__seen_last;
        CData/*0:0*/ sha256_processor_tb__DOT__uut__DOT__need_length_block;
        CData/*5:0*/ sha256_processor_tb__DOT__uut__DOT__pad_index;
        CData/*6:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__t;
        CData/*1:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__state;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__ext_clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__sha256_processor_tb__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr_hbe8e34d3__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        IData/*31:0*/ sha256_processor_tb__DOT__i;
        VlWide<16>/*511:0*/ sha256_processor_tb__DOT__uut__DOT__block_buffer;
        VlWide<8>/*255:0*/ sha256_processor_tb__DOT__uut__DOT__core_hash_out;
        VlWide<16>/*511:0*/ sha256_processor_tb__DOT__uut__DOT__core_block;
        VlWide<8>/*255:0*/ sha256_processor_tb__DOT__uut__DOT__core_hash_init;
        VlWide<8>/*255:0*/ sha256_processor_tb__DOT__uut__DOT__hash_state;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__i;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__a;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__b;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__c;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__d;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__e;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__f;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__g;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h0;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h1;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h2;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h3;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h4;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h5;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h6;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__h7;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__S1;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__T1;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__S0;
        IData/*31:0*/ sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__T2;
        IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ror__0__Vfuncout;
        IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ror__0__x;
        IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ror__1__Vfuncout;
        IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ror__1__x;
        IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ror__2__Vfuncout;
        IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ror__2__x;
        IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ror__3__Vfuncout;
        IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ror__3__x;
        IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ror__4__Vfuncout;
        IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ror__4__x;
    };
    struct {
        IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ror__5__Vfuncout;
        IData/*31:0*/ __Vfunc_sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__ror__5__x;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ sha256_processor_tb__DOT__uut__DOT__total_bits;
        VlUnpacked<IData/*31:0*/, 64> sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__K_ROM;
        VlUnpacked<IData/*31:0*/, 64> sha256_processor_tb__DOT__uut__DOT__sha_core__DOT__w;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerScheduler __VtrigSched_h92403816__0;
    VlTriggerScheduler __VtrigSched_h924037d5__0;
    VlTriggerScheduler __VtrigSched_h2a3a6b26__0;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsha256_processor_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsha256_processor_tb___024root(Vsha256_processor_tb__Syms* symsp, const char* v__name);
    ~Vsha256_processor_tb___024root();
    VL_UNCOPYABLE(Vsha256_processor_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
