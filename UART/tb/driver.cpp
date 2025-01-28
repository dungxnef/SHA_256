#define MAX_SIM 20

void set_random(Vtop *dut, vluint64_t sim_unit) {
  dut->data0_i = rand()%8;
  dut->data1_i = rand()%8;
  dut->sel_i   = rand()%4;
}
