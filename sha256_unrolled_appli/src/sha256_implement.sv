module sha256_implement(
	input logic clk,rst,
	input logic [7:0] data_in,
	output logic overflow, input_padded, rdy_o,
	output logic [6:0] clk_cycle,
	output logic [255:0] hash_val
);

logic [511:0] padded_input;
logic stop_i;
logic ready_i;

input_ctrl pre_i(
	.clk(clk),
	.padded_i(input_padded),
	.data_i(data_in),
	.stop(stop_i),
	.ready(ready_i)
);

padd input_processed(
	// input
	.clk(clk),
	.rst(rst),
	.stop(stop_i),
	.ready(ready_i),
	.rdy_o(rdy_o),
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

// logic stop_i_nonce;
// hash_detect_stop leading0s_detect(
// 	.hash_val_i(hash_val),
// 	.stop_i(stop_i_nonce)
// );

 always@(posedge clk) begin
 	if(!rst) begin
 		clk_cycle <= 7'd0;
 	end
 	else begin
	 	if(stop_i && !rdy_o) begin
	 		clk_cycle <= clk_cycle + 7'd1;
	 	end
	 	else begin
	 		clk_cycle <= clk_cycle;
	 	end
	end
 end


endmodule
