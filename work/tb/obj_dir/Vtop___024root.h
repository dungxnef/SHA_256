// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_IN8(stop,0,0);
    VL_IN8(ready,0,0);
    VL_IN8(data_i,7,0);
    VL_OUT8(overflow,0,0);
    VL_OUT8(padded,0,0);
    VL_OUT8(rdy_o,0,0);
    CData/*5:0*/ top__DOT__dut__DOT__input_processed__DOT__add_512_block;
    CData/*0:0*/ top__DOT__dut__DOT__input_processed__DOT__temp_chk;
    CData/*0:0*/ top__DOT__dut__DOT__input_processed__DOT__padd0s_done;
    CData/*0:0*/ top__DOT__dut__DOT__input_processed__DOT__addr63;
    CData/*5:0*/ top__DOT__dut__DOT__core__DOT__count;
    CData/*5:0*/ top__DOT__dut__DOT__core__DOT__count16;
    CData/*5:0*/ top__DOT__dut__DOT__core__DOT__count15;
    CData/*5:0*/ top__DOT__dut__DOT__core__DOT__count7;
    CData/*5:0*/ top__DOT__dut__DOT__core__DOT__count2;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__done;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__w_rdy;
    CData/*5:0*/ top__DOT__dut__DOT__core__DOT__count_hash;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__reset_hash;
    CData/*0:0*/ top__DOT__dut__DOT__core__DOT__hash_cal;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    VL_OUTW(result_o,255,0,8);
    VlWide<16>/*511:0*/ top__DOT__dut__DOT__padded_input;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__w_o;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__w_value;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__k_value;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__hash__DOT__a;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__hash__DOT__b;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__hash__DOT__c;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__hash__DOT__d;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__hash__DOT__e;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__hash__DOT__f;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__hash__DOT__g;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__hash__DOT__h;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__hash__DOT__h_new;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__hash__DOT__compress__DOT__temp1;
    IData/*31:0*/ top__DOT__dut__DOT__core__DOT__hash__DOT__compress__DOT__temp2;
    QData/*63:0*/ top__DOT__dut__DOT__input_processed__DOT__m_size;
    VlUnpacked<CData/*7:0*/, 64> top__DOT__dut__DOT__input_processed__DOT__block_512;
    VlUnpacked<IData/*31:0*/, 64> top__DOT__dut__DOT__core__DOT__k;
    VlUnpacked<IData/*31:0*/, 64> top__DOT__dut__DOT__core__DOT__w;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
