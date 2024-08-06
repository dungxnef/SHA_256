module top (
  // inputs
  input logic        clk_i,rst_ni,stop,
  input logic [7:0]  data_i,


  // outputs
  output logic  overflow, padd_done, ready_o, padded,
  output logic [255:0] result_o
);

sha256_implement dut(
	.clk(clk_i),
	.rst(rst_ni),
	.stop(stop),
	.data_in(data_i),
	.overflow(overflow),
	.padd_done(padd_done),
	.ready_o(ready_o),
	.input_padded(padded),
	.hash_val(result_o)
);


endmodule
