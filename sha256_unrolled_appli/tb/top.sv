module top (
  // inputs
  input logic        clk_i,rst_ni,
  input logic [7:0]  data_i,


  // outputs
  output logic  overflow,padded,rdy_o,
  output logic [6:0] clk_cycle_o,
  output logic [255:0] result_o
);

sha256_implement dut(
	// input
	.clk(clk_i),
	.rst(rst_ni),
	.data_in(data_i),
	// output
	.overflow(overflow),
	.input_padded(padded),
	.rdy_o(rdy_o),
	.clk_cycle(clk_cycle_o),
	.hash_val(result_o)
);


endmodule
