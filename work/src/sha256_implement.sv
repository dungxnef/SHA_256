module sha256_implement(
	input logic clk,rst,stop,ready,
	input logic [7:0] data_in,
	output logic overflow, input_padded, rdy_o,
	output logic [255:0] hash_val
);

logic [511:0] padded_input;

padd input_processed(
	// input
	.clk(clk),
	.rst(rst),
	.stop(stop),
	.ready(ready),
	.data_in(data_in),
	//output
	.overflow(overflow),
	.padded_i(input_padded),
	.padd_out(padded_input)
);

sha256 core(
	// input
	.mess(padded_input),
	.clk(clk),
	.rst(rst),
	.padded_i(input_padded),
	// output
	.rdy_o(rdy_o),
	.hash_val(hash_val)
);

endmodule
