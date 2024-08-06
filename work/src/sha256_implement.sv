module sha256_implement(
	input logic clk,rst,stop,
	input logic [7:0] data_in,
	output logic overflow, ready_o, padd_done, input_padded,
	output logic [255:0] hash_val
);

logic [511:0] padded_input;

padd input_processed(
	.clk(clk),
	.rst(rst),
	.stop(stop),
	.data_in(data_in),
	.overflow(overflow),
	.padd_done(padd_done),
	.padded_i(input_padded),
	.padd_out(padded_input)
);

sha256 core(
	.mess(padded_input),
	.clk(clk),
	.rst(rst),
	.padded_i(input_padded),
	.ready(ready_o),
	.hash_val(hash_val)
);

endmodule
