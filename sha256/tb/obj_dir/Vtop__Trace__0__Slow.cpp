// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+68,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"stop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+72,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+73,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"padded",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"rdy_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+76,"clk_cycle_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declArray(c+77,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+68,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"stop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+72,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+73,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"padded",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"rdy_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+76,"clk_cycle_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declArray(c+77,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+68,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"stop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+72,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+73,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"input_padded",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"rdy_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+76,"clk_cycle",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declArray(c+77,"hash_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
    tracep->declArray(c+1,"padded_input",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 511,0);
    tracep->pushNamePrefix("core ");
    tracep->declArray(c+1,"mess",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
    tracep->declBit(c+68,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"padded_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"rdy_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+77,"hash_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
    tracep->declBus(c+85,"h0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,"h1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,"h2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,"h3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,"h4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,"h5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,"h6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,"h7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,"done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+18,"w_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+19,"stop_w_calc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+20,"count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+21,"count16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+22,"count15",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+23,"count7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+24,"count2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+25,"temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,"w_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,"count_hash",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+28,"w_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,"k_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+30,"hash_cal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("hash ");
    tracep->declBit(c+68,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+28,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"k_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+85,"h0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+86,"h1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+87,"h2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"h3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+89,"h4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"h5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"h6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"h7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+77,"hash_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
    tracep->declBus(c+31,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,"c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,"d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,"e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,"f",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,"g",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,"h",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,"a_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,"b_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,"c_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,"d_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,"e_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,"f_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,"g_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,"h_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,"h0_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,"h1_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,"h2_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,"h3_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,"h4_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,"h5_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,"h6_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,"h7_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compress ");
    tracep->declBus(c+29,"k_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+28,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+31,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+32,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"c",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+34,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"e",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"f",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+37,"g",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"h",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"a_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+31,"b_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+32,"c_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"d_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"e_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"f_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"g_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"h_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"ch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,"temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,"temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,"maj",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,"t1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,"t2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("S0 ");
    tracep->declBus(c+31,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"us0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("S1 ");
    tracep->declBus(c+35,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+54,"us1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("w_calc ");
    tracep->declBus(c+56,"w_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+57,"w_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+58,"w_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+59,"w_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+19,"w_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+25,"w_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"sigma0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,"sigma1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("s0 ");
    tracep->declBus(c+57,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"Y",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("s1 ");
    tracep->declBus(c+59,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+61,"Y",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("input_processed ");
    tracep->declBit(c+68,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"stop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+72,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+73,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"padded_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+1,"padd_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
    tracep->declBus(c+62,"add_512_block",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declQuad(c+63,"m_size",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBit(c+65,"temp_chk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+66,"padd0s_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+67,"addr63",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullWData(oldp+1,(vlSelf->top__DOT__dut__DOT__padded_input),512);
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__dut__DOT__core__DOT__done));
    bufp->fullBit(oldp+18,(vlSelf->top__DOT__dut__DOT__core__DOT__w_rdy));
    bufp->fullBit(oldp+19,(((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__w_rdy) 
                            & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__done)))));
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__dut__DOT__core__DOT__count),6);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__dut__DOT__core__DOT__count16),6);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__dut__DOT__core__DOT__count15),6);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__dut__DOT__core__DOT__count7),6);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__dut__DOT__core__DOT__count2),6);
    bufp->fullIData(oldp+25,((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__w_rdy) 
                               & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__done)))
                               ? (((((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                        << 0xfU) | 
                                       (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                        >> 0x11U)) 
                                      ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                          << 0xdU) 
                                         | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                            >> 0x13U))) 
                                     ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                        >> 0xaU)) + 
                                    ((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                        << 0x19U) | 
                                       (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                        >> 7U)) ^ (
                                                   (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                                    << 0xeU) 
                                                   | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                                      >> 0x12U))) 
                                     ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                        >> 3U))) + 
                                   vlSelf->top__DOT__dut__DOT__core__DOT__w
                                   [vlSelf->top__DOT__dut__DOT__core__DOT__count16]) 
                                  + vlSelf->top__DOT__dut__DOT__core__DOT__w
                                  [vlSelf->top__DOT__dut__DOT__core__DOT__count7])
                               : 0U)),32);
    bufp->fullIData(oldp+26,(((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__done)
                               ? vlSelf->top__DOT__dut__DOT__core__DOT__w
                              [0x3fU] : (((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__w_rdy) 
                                          & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__done)))
                                          ? (((((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                                   << 0xfU) 
                                                  | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                                     >> 0x11U)) 
                                                 ^ 
                                                 ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                                   << 0xdU) 
                                                  | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                                     >> 0x13U))) 
                                                ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                                   >> 0xaU)) 
                                               + ((
                                                   ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                                     << 0x19U) 
                                                    | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                                       >> 7U)) 
                                                   ^ 
                                                   ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                                     << 0xeU) 
                                                    | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                                       >> 0x12U))) 
                                                  ^ 
                                                  (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                                   >> 3U))) 
                                              + vlSelf->top__DOT__dut__DOT__core__DOT__w
                                              [vlSelf->top__DOT__dut__DOT__core__DOT__count16]) 
                                             + vlSelf->top__DOT__dut__DOT__core__DOT__w
                                             [vlSelf->top__DOT__dut__DOT__core__DOT__count7])
                                          : 0U))),32);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__dut__DOT__core__DOT__count_hash),7);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__dut__DOT__core__DOT__w_value),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__dut__DOT__core__DOT__k_value),32);
    bufp->fullBit(oldp+30,(vlSelf->top__DOT__dut__DOT__core__DOT__hash_cal));
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__d),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__f),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__g),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h),32);
    bufp->fullIData(oldp+39,((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress__DOT__temp1 
                              + (((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                     << 0x1eU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                                  >> 2U)) 
                                   ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                       << 0x13U) | 
                                      (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                       >> 0xdU))) ^ 
                                  ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                    << 0xaU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                                >> 0x16U))) 
                                 + (((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                      & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b) 
                                     ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                        & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c)) 
                                    ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b 
                                       & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c))))),32);
    bufp->fullIData(oldp+40,((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__d 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress__DOT__temp1)),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h_new),32);
    bufp->fullIData(oldp+42,(((IData)(0x6a09e667U) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a)),32);
    bufp->fullIData(oldp+43,(((IData)(0xbb67ae85U) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b)),32);
    bufp->fullIData(oldp+44,(((IData)(0x3c6ef372U) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c)),32);
    bufp->fullIData(oldp+45,(((IData)(0xa54ff53aU) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__d)),32);
    bufp->fullIData(oldp+46,(((IData)(0x510e527fU) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e)),32);
    bufp->fullIData(oldp+47,(((IData)(0x9b05688cU) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__f)),32);
    bufp->fullIData(oldp+48,(((IData)(0x1f83d9abU) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__g)),32);
    bufp->fullIData(oldp+49,(((IData)(0x5be0cd19U) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h)),32);
    bufp->fullIData(oldp+50,(((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                               & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__f) 
                              ^ ((~ vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e) 
                                 & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__g))),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress__DOT__temp1),32);
    bufp->fullIData(oldp+52,((((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                  << 0x1eU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                               >> 2U)) 
                                ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                    << 0x13U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                                 >> 0xdU))) 
                               ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                   << 0xaU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                               >> 0x16U))) 
                              + (((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                   & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b) 
                                  ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                     & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c)) 
                                 ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b 
                                    & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c)))),32);
    bufp->fullIData(oldp+53,((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b) 
                               ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                  & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c)) 
                              ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b 
                                 & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c))),32);
    bufp->fullIData(oldp+54,(((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                 << 0x1aU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                              >> 6U)) 
                               ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                   << 0x15U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                                >> 0xbU))) 
                              ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                  << 7U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                            >> 0x19U)))),32);
    bufp->fullIData(oldp+55,(((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                 << 0x1eU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                              >> 2U)) 
                               ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                   << 0x13U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                                >> 0xdU))) 
                              ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                  << 0xaU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                              >> 0x16U)))),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__dut__DOT__core__DOT__w
                             [vlSelf->top__DOT__dut__DOT__core__DOT__count16]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__dut__DOT__core__DOT__w
                             [vlSelf->top__DOT__dut__DOT__core__DOT__count7]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2),32);
    bufp->fullIData(oldp+60,(((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                 << 0x19U) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                              >> 7U)) 
                               ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                   << 0xeU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                               >> 0x12U))) 
                              ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                 >> 3U))),32);
    bufp->fullIData(oldp+61,(((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                 << 0xfU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                             >> 0x11U)) 
                               ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                   << 0xdU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                               >> 0x13U))) 
                              ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                 >> 0xaU))),32);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__add_512_block),6);
    bufp->fullQData(oldp+63,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__m_size),64);
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__temp_chk));
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__padd0s_done));
    bufp->fullBit(oldp+67,((0x3fU == (IData)(vlSelf->top__DOT__dut__DOT__input_processed__DOT__add_512_block))));
    bufp->fullBit(oldp+68,(vlSelf->clk_i));
    bufp->fullBit(oldp+69,(vlSelf->rst_ni));
    bufp->fullBit(oldp+70,(vlSelf->stop));
    bufp->fullBit(oldp+71,(vlSelf->ready));
    bufp->fullCData(oldp+72,(vlSelf->data_i),8);
    bufp->fullBit(oldp+73,(vlSelf->overflow));
    bufp->fullBit(oldp+74,(vlSelf->padded));
    bufp->fullBit(oldp+75,(vlSelf->rdy_o));
    bufp->fullCData(oldp+76,(vlSelf->clk_cycle_o),7);
    bufp->fullWData(oldp+77,(vlSelf->result_o),256);
    bufp->fullIData(oldp+85,(0x6a09e667U),32);
    bufp->fullIData(oldp+86,(0xbb67ae85U),32);
    bufp->fullIData(oldp+87,(0x3c6ef372U),32);
    bufp->fullIData(oldp+88,(0xa54ff53aU),32);
    bufp->fullIData(oldp+89,(0x510e527fU),32);
    bufp->fullIData(oldp+90,(0x9b05688cU),32);
    bufp->fullIData(oldp+91,(0x1f83d9abU),32);
    bufp->fullIData(oldp+92,(0x5be0cd19U),32);
}
