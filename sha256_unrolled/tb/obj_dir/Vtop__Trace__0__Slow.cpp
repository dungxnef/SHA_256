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
    tracep->declBit(c+101,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"stop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+105,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+106,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"padded",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"rdy_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+109,"clk_cycle_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declArray(c+110,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+101,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"stop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+105,"data_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+106,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"padded",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"rdy_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+109,"clk_cycle_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declArray(c+110,"result_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+101,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"stop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+105,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+106,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"input_padded",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"rdy_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+109,"clk_cycle",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 6,0);
    tracep->declArray(c+110,"hash_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
    tracep->declArray(c+1,"padded_input",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 511,0);
    tracep->pushNamePrefix("core ");
    tracep->declArray(c+1,"mess",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
    tracep->declBit(c+101,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"padded_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"rdy_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+110,"hash_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
    tracep->declBus(c+118,"h0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+119,"h1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+120,"h2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+121,"h3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+122,"h4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+123,"h5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+124,"h6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+125,"h7",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,"done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+18,"w_rdy",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+19,"stop_w_calc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+20,"count_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+21,"count16_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+22,"count15_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+23,"count7_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+24,"count2_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+25,"count_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+26,"count16_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+27,"count15_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+28,"count7_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+29,"count2_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declBus(c+30,"temp1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,"temp2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,"w_o1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,"w_o2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,"count_hash1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+35,"count_hash2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 6,0);
    tracep->declBus(c+36,"w_value1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,"k_value1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+38,"w_value2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+39,"k_value2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,"reset_hash",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+41,"hash_cal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("hash ");
    tracep->declBit(c+101,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+36,"w_i1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+37,"k_i1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"w_i2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"k_i2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+118,"h0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+119,"h1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+120,"h2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+121,"h3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+122,"h4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+123,"h5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+124,"h6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+125,"h7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+110,"hash_val",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 255,0);
    tracep->declBus(c+42,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,"c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,"d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,"e",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,"f",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,"g",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,"h",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,"a_dash",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,"b_dash",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,"e_dash",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,"f_dash",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,"p1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,"p2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+52,"p3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+53,"p4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+54,"p5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,"a_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+56,"b_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+42,"c_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,"d_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+57,"e_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,"f_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,"g_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,"h_new",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+58,"h0_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+59,"h1_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+60,"h2_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,"h3_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,"h4_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,"h5_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+64,"h6_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,"h7_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("compress1 ");
    tracep->declBus(c+37,"k_i1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+36,"w_i1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+39,"k_i2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+38,"w_i2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"c",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"d",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"e",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"f",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"g",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"h",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"a_dash",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"b_dash",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"e_dash",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"f_dash",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"p1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"p2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"p3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+53,"p4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+54,"p5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+66,"ch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,"maj",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+68,"us1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+69,"us0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+70,"t1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+71,"t2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+72,"t3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+73,"t4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+74,"t5",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+75,"t6",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("S0 ");
    tracep->declBus(c+42,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+69,"us0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("S1 ");
    tracep->declBus(c+46,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+68,"us1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("compress2 ");
    tracep->declBus(c+42,"a_dash",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"b_dash",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"e_dash",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"f_dash",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+50,"p1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"p2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+52,"p3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+53,"p4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+54,"p5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+55,"a_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+56,"b_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"c_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"d_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+57,"e_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+51,"f_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"g_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"h_new",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+76,"Ch",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+77,"Maj",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+78,"s0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+79,"s1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+80,"t1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+81,"t2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+82,"t3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("S0 ");
    tracep->declBus(c+56,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+78,"us0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("S1 ");
    tracep->declBus(c+51,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+79,"us1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("w_calc1 ");
    tracep->declBus(c+83,"w_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+84,"w_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+85,"w_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+86,"w_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+19,"w_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+30,"w_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+87,"sigma0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,"sigma1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("s0 ");
    tracep->declBus(c+84,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+87,"Y",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("s1 ");
    tracep->declBus(c+86,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+88,"Y",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("w_calc2 ");
    tracep->declBus(c+89,"w_16",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"w_15",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+91,"w_7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+92,"w_2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+19,"w_rdy",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+31,"w_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+93,"sigma0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+94,"sigma1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("s0 ");
    tracep->declBus(c+90,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+93,"Y",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("s1 ");
    tracep->declBus(c+92,"X",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+94,"Y",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("input_processed ");
    tracep->declBit(c+101,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"stop",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"ready",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+105,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+106,"overflow",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"padded_i",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+1,"padd_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 511,0);
    tracep->declBus(c+95,"add_512_block",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 5,0);
    tracep->declQuad(c+96,"m_size",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 63,0);
    tracep->declBit(c+98,"temp_chk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+99,"padd0s_done",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+100,"addr63",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
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
    bufp->fullBit(oldp+19,(vlSelf->top__DOT__dut__DOT__core__DOT__stop_w_calc));
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__dut__DOT__core__DOT__count_1),6);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__dut__DOT__core__DOT__count16_1),6);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__dut__DOT__core__DOT__count15_1),6);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__dut__DOT__core__DOT__count7_1),6);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__dut__DOT__core__DOT__count2_1),6);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__dut__DOT__core__DOT__count_2),6);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__dut__DOT__core__DOT__count16_2),6);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__dut__DOT__core__DOT__count15_2),6);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__dut__DOT__core__DOT__count7_2),6);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__dut__DOT__core__DOT__count2_2),6);
    bufp->fullIData(oldp+30,(((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__stop_w_calc)
                               ? (((((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                        << 0xfU) | 
                                       (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                        >> 0x11U)) 
                                      ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                          << 0xdU) 
                                         | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                            >> 0x13U))) 
                                     ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                        >> 0xaU)) + 
                                    ((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                        << 0x19U) | 
                                       (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                        >> 7U)) ^ (
                                                   (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                                    << 0xeU) 
                                                   | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                                      >> 0x12U))) 
                                     ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                        >> 3U))) + 
                                   vlSelf->top__DOT__dut__DOT__core__DOT__w
                                   [vlSelf->top__DOT__dut__DOT__core__DOT__count16_1]) 
                                  + vlSelf->top__DOT__dut__DOT__core__DOT__w
                                  [vlSelf->top__DOT__dut__DOT__core__DOT__count7_1])
                               : 0U)),32);
    bufp->fullIData(oldp+31,(((IData)(vlSelf->top__DOT__dut__DOT__core__DOT__stop_w_calc)
                               ? (((((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                        << 0xfU) | 
                                       (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                        >> 0x11U)) 
                                      ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                          << 0xdU) 
                                         | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                            >> 0x13U))) 
                                     ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                        >> 0xaU)) + 
                                    ((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                        << 0x19U) | 
                                       (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                        >> 7U)) ^ (
                                                   (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                                    << 0xeU) 
                                                   | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                                      >> 0x12U))) 
                                     ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                        >> 3U))) + 
                                   vlSelf->top__DOT__dut__DOT__core__DOT__w
                                   [vlSelf->top__DOT__dut__DOT__core__DOT__count16_2]) 
                                  + vlSelf->top__DOT__dut__DOT__core__DOT__w
                                  [vlSelf->top__DOT__dut__DOT__core__DOT__count7_2])
                               : 0U)),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__dut__DOT__core__DOT__w_o1),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__dut__DOT__core__DOT__w_o2),32);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__dut__DOT__core__DOT__count_hash1),7);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__dut__DOT__core__DOT__count_hash2),7);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__dut__DOT__core__DOT__w_value1),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__dut__DOT__core__DOT__k_value1),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__dut__DOT__core__DOT__w_value2),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__dut__DOT__core__DOT__k_value2),32);
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__dut__DOT__core__DOT__reset_hash));
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__dut__DOT__core__DOT__hash_cal));
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__d),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__f),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__g),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h),32);
    bufp->fullIData(oldp+50,((((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
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
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p2),32);
    bufp->fullIData(oldp+52,(((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress1__DOT__t2 
                               + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress1__DOT__t4)),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p4),32);
    bufp->fullIData(oldp+54,((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p4 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c)),32);
    bufp->fullIData(oldp+55,(((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p4 
                               + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress2__DOT__t1) 
                              + ((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                    & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b) 
                                   ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b 
                                      & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new)) 
                                  ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                     & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new)) 
                                 + ((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                       << 0x1eU) | 
                                      (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                       >> 2U)) ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                                   << 0x13U) 
                                                  | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                                     >> 0xdU))) 
                                    ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                        << 0xaU) | 
                                       (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                        >> 0x16U)))))),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new),32);
    bufp->fullIData(oldp+57,((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress2__DOT__t1 
                              + (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p4 
                                 + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c))),32);
    bufp->fullIData(oldp+58,(((IData)(0x6a09e667U) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a)),32);
    bufp->fullIData(oldp+59,(((IData)(0xbb67ae85U) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b)),32);
    bufp->fullIData(oldp+60,(((IData)(0x3c6ef372U) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c)),32);
    bufp->fullIData(oldp+61,(((IData)(0xa54ff53aU) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__d)),32);
    bufp->fullIData(oldp+62,(((IData)(0x510e527fU) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e)),32);
    bufp->fullIData(oldp+63,(((IData)(0x9b05688cU) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__f)),32);
    bufp->fullIData(oldp+64,(((IData)(0x1f83d9abU) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__g)),32);
    bufp->fullIData(oldp+65,(((IData)(0x5be0cd19U) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h)),32);
    bufp->fullIData(oldp+66,(((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                               & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__f) 
                              ^ ((~ vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e) 
                                 & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__g))),32);
    bufp->fullIData(oldp+67,((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b) 
                               ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                  & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c)) 
                              ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b 
                                 & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__c))),32);
    bufp->fullIData(oldp+68,(((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                 << 0x1aU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                              >> 6U)) 
                               ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                   << 0x15U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                                >> 0xbU))) 
                              ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                  << 7U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e 
                                            >> 0x19U)))),32);
    bufp->fullIData(oldp+69,(((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                 << 0x1eU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                              >> 2U)) 
                               ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                   << 0x13U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                                >> 0xdU))) 
                              ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                  << 0xaU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                              >> 0x16U)))),32);
    bufp->fullIData(oldp+70,((vlSelf->top__DOT__dut__DOT__core__DOT__w_value2 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__k_value2)),32);
    bufp->fullIData(oldp+71,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress1__DOT__t2),32);
    bufp->fullIData(oldp+72,((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress1__DOT__t2 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h)),32);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress1__DOT__t4),32);
    bufp->fullIData(oldp+74,((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__d)),32);
    bufp->fullIData(oldp+75,(((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__h 
                               + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__d) 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress1__DOT__t2)),32);
    bufp->fullIData(oldp+76,(((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p2 
                               & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__e) 
                              ^ ((~ vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p2) 
                                 & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__f))),32);
    bufp->fullIData(oldp+77,((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b) 
                               ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b 
                                  & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new)) 
                              ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                 & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new))),32);
    bufp->fullIData(oldp+78,(((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                 << 0x1eU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                              >> 2U)) 
                               ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                   << 0x13U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                                >> 0xdU))) 
                              ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                  << 0xaU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                              >> 0x16U)))),32);
    bufp->fullIData(oldp+79,(((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p2 
                                 << 0x1aU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p2 
                                              >> 6U)) 
                               ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p2 
                                   << 0x15U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p2 
                                                >> 0xbU))) 
                              ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p2 
                                  << 7U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p2 
                                            >> 0x19U)))),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress2__DOT__t1),32);
    bufp->fullIData(oldp+81,((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__p4 
                              + vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__compress2__DOT__t1)),32);
    bufp->fullIData(oldp+82,(((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                 & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b) 
                                ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b 
                                   & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new)) 
                               ^ (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__a 
                                  & vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new)) 
                              + ((((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                    << 0x1eU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                                 >> 2U)) 
                                  ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                      << 0x13U) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                                   >> 0xdU))) 
                                 ^ ((vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                     << 0xaU) | (vlSelf->top__DOT__dut__DOT__core__DOT__hash__DOT__b_new 
                                                 >> 0x16U))))),32);
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__dut__DOT__core__DOT__w
                             [vlSelf->top__DOT__dut__DOT__core__DOT__count16_1]),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15),32);
    bufp->fullIData(oldp+85,(vlSelf->top__DOT__dut__DOT__core__DOT__w
                             [vlSelf->top__DOT__dut__DOT__core__DOT__count7_1]),32);
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2),32);
    bufp->fullIData(oldp+87,(((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                 << 0x19U) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                              >> 7U)) 
                               ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                   << 0xeU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                               >> 0x12U))) 
                              ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_15 
                                 >> 3U))),32);
    bufp->fullIData(oldp+88,(((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                 << 0xfU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                             >> 0x11U)) 
                               ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                   << 0xdU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                               >> 0x13U))) 
                              ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc1__w_2 
                                 >> 0xaU))),32);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__dut__DOT__core__DOT__w
                             [vlSelf->top__DOT__dut__DOT__core__DOT__count16_2]),32);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__dut__DOT__core__DOT__w
                             [vlSelf->top__DOT__dut__DOT__core__DOT__count7_2]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2),32);
    bufp->fullIData(oldp+93,(((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                 << 0x19U) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                              >> 7U)) 
                               ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                   << 0xeU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                               >> 0x12U))) 
                              ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_15 
                                 >> 3U))),32);
    bufp->fullIData(oldp+94,(((((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                 << 0xfU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                             >> 0x11U)) 
                               ^ ((vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                   << 0xdU) | (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                               >> 0x13U))) 
                              ^ (vlSelf->top__DOT__dut__DOT__core__DOT____Vcellinp__w_calc2__w_2 
                                 >> 0xaU))),32);
    bufp->fullCData(oldp+95,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__add_512_block),6);
    bufp->fullQData(oldp+96,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__m_size),64);
    bufp->fullBit(oldp+98,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__temp_chk));
    bufp->fullBit(oldp+99,(vlSelf->top__DOT__dut__DOT__input_processed__DOT__padd0s_done));
    bufp->fullBit(oldp+100,((0x3fU == (IData)(vlSelf->top__DOT__dut__DOT__input_processed__DOT__add_512_block))));
    bufp->fullBit(oldp+101,(vlSelf->clk_i));
    bufp->fullBit(oldp+102,(vlSelf->rst_ni));
    bufp->fullBit(oldp+103,(vlSelf->stop));
    bufp->fullBit(oldp+104,(vlSelf->ready));
    bufp->fullCData(oldp+105,(vlSelf->data_i),8);
    bufp->fullBit(oldp+106,(vlSelf->overflow));
    bufp->fullBit(oldp+107,(vlSelf->padded));
    bufp->fullBit(oldp+108,(vlSelf->rdy_o));
    bufp->fullCData(oldp+109,(vlSelf->clk_cycle_o),7);
    bufp->fullWData(oldp+110,(vlSelf->result_o),256);
    bufp->fullIData(oldp+118,(0x6a09e667U),32);
    bufp->fullIData(oldp+119,(0xbb67ae85U),32);
    bufp->fullIData(oldp+120,(0x3c6ef372U),32);
    bufp->fullIData(oldp+121,(0xa54ff53aU),32);
    bufp->fullIData(oldp+122,(0x510e527fU),32);
    bufp->fullIData(oldp+123,(0x9b05688cU),32);
    bufp->fullIData(oldp+124,(0x1f83d9abU),32);
    bufp->fullIData(oldp+125,(0x5be0cd19U),32);
}
