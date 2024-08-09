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
    tracep->declBit(c+69,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"stop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+73,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+74,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"padded",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"rdy_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+77,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+69,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"stop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+73,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+74,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"padded",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"rdy_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+77,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+69,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"stop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+73,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+74,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"input_padded",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"rdy_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+77,"hash_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
    tracep->declArray(c+1,"padded_input",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 511,0);
    tracep->pushNamePrefix("core ");
    tracep->declArray(c+1,"mess",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
    tracep->declBit(c+69,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"padded_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"rdy_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+77,"hash_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
    tracep->declBus(c+85,"h0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+86,"h1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,"h2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,"h3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+89,"h4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+90,"h5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+91,"h6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+92,"h7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,"temp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+18,"count",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+19,"count16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+20,"count15",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+21,"count7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+22,"count2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+23,"done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+24,"w_o",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+25,"w_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+26,"stop_w_calc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+27,"count_hash",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBit(c+28,"reset_hash",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+29,"w_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,"k_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,"hash_cal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("hash ");
    tracep->declBit(c+69,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+29,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+30,"k_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+85,"h0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+86,"h1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+87,"h2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"h3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+89,"h4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"h5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"h6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"h7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+77,"hash_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
    tracep->declBus(c+32,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,"c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,"d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,"e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,"f",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,"g",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,"h",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+40,"a_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,"b_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,"c_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,"d_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+41,"e_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+36,"f_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,"g_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,"h_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,"h0_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,"h1_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,"h2_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,"h3_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,"h4_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,"h5_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,"h6_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,"h7_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compress ");
    tracep->declBus(c+30,"k_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+29,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+32,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+34,"c",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+35,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"e",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+37,"f",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"g",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"h",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+40,"a_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+32,"b_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+33,"c_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+34,"d_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+41,"e_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"f_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+37,"g_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"h_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"ch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,"temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,"temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,"maj",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,"t1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,"t2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("S0 ");
    tracep->declBus(c+32,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+56,"us0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("S1 ");
    tracep->declBus(c+36,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"us1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("w_calc ");
    tracep->declBus(c+57,"w_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+58,"w_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+59,"w_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+60,"w_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+26,"w_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"w_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+61,"sigma0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,"sigma1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("s0 ");
    tracep->declBus(c+58,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+61,"Y",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("s1 ");
    tracep->declBus(c+60,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+62,"Y",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("input_processed ");
    tracep->declBit(c+69,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"stop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+73,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+74,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"padded_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+1,"padd_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
    tracep->declBus(c+63,"add_512_block",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declQuad(c+64,"m_size",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBit(c+66,"temp_chk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+67,"padd0s_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+68,"addr63",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
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
    bufp->fullIData(oldp+17,((((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__w_rdy) 
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
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__dut__DOT__core__DOT__count),6);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__dut__DOT__core__DOT__count16),6);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__dut__DOT__core__DOT__count15),6);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__dut__DOT__core__DOT__count7),6);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__dut__DOT__core__DOT__count2),6);
    bufp->fullBit(oldp+23,(vlSelf->top__DOT__dut__DOT__core__DOT__done));
    bufp->fullIData(oldp+24,(((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__done)
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
    bufp->fullBit(oldp+25,(vlSelf->top__DOT__dut__DOT__core__DOT__w_rdy));
    bufp->fullBit(oldp+26,(((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__w_rdy) 
                            & (~ (IData)(vlSelf->top__DOT__dut__DOT__core__DOT__done)))));
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__dut__DOT__core__DOT__count_hash),6);
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__dut__DOT__core__DOT__reset_hash));
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__dut__DOT__core__DOT__w_value),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__dut__DOT__core__DOT__k_value),32);
    bufp->fullBit(oldp+31,(vlSelf->top__DOT__dut__DOT__core__DOT__hash_cal));
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__d),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__f),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__g),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h),32);
    bufp->fullIData(oldp+40,((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress__DOT__temp1 
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
    bufp->fullIData(oldp+41,((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__d 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress__DOT__temp1)),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h_new),32);
    bufp->fullIData(oldp+43,(((IData)(0x6a09e667U) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a)),32);
    bufp->fullIData(oldp+44,(((IData)(0xbb67ae85U) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b)),32);
    bufp->fullIData(oldp+45,(((IData)(0x3c6ef372U) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c)),32);
    bufp->fullIData(oldp+46,(((IData)(0xa54ff53aU) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__d)),32);
    bufp->fullIData(oldp+47,(((IData)(0x510e527fU) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e)),32);
    bufp->fullIData(oldp+48,(((IData)(0x9b05688cU) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__f)),32);
    bufp->fullIData(oldp+49,(((IData)(0x1f83d9abU) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__g)),32);
    bufp->fullIData(oldp+50,(((IData)(0x5be0cd19U) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h)),32);
    bufp->fullIData(oldp+51,(((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                               & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__f) 
                              ^ ((~ vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e) 
                                 & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__g))),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress__DOT__temp1),32);
    bufp->fullIData(oldp+53,((((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
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
    bufp->fullIData(oldp+54,((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b) 
                               ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                  & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c)) 
                              ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b 
                                 & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c))),32);
    bufp->fullIData(oldp+55,(((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                 << 0x1aU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                              >> 6U)) 
                               ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                   << 0x15U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                                >> 0xbU))) 
                              ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                  << 7U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                            >> 0x19U)))),32);
    bufp->fullIData(oldp+56,(((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                 << 0x1eU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                              >> 2U)) 
                               ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                   << 0x13U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                                >> 0xdU))) 
                              ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                  << 0xaU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                              >> 0x16U)))),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__dut__DOT__core__DOT__w
                             [vlSelf->top__DOT__dut__DOT__core__DOT__count16]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__dut__DOT__core__DOT__w
                             [vlSelf->top__DOT__dut__DOT__core__DOT__count7]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2),32);
    bufp->fullIData(oldp+61,(((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                 << 0x19U) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                              >> 7U)) 
                               ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                   << 0xeU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                               >> 0x12U))) 
                              ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_15 
                                 >> 3U))),32);
    bufp->fullIData(oldp+62,(((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                 << 0xfU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                             >> 0x11U)) 
                               ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                   << 0xdU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                               >> 0x13U))) 
                              ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc__w_2 
                                 >> 0xaU))),32);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__add_512_block),6);
    bufp->fullQData(oldp+64,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__m_size),64);
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__temp_chk));
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__padd0s_done));
    bufp->fullBit(oldp+68,((0x3fU == (IData)(vlSelf->top__DOT__dut__DOT__input_processed__DOT__add_512_block))));
    bufp->fullBit(oldp+69,(vlSelf->clk_i));
    bufp->fullBit(oldp+70,(vlSelf->rst_ni));
    bufp->fullBit(oldp+71,(vlSelf->stop));
    bufp->fullBit(oldp+72,(vlSelf->ready));
    bufp->fullCData(oldp+73,(vlSelf->data_i),8);
    bufp->fullBit(oldp+74,(vlSelf->overflow));
    bufp->fullBit(oldp+75,(vlSelf->padded));
    bufp->fullBit(oldp+76,(vlSelf->rdy_o));
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
