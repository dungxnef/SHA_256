module compress(
 input logic [31:0] k_i,
 input logic [31:0] w_i,
 
 input logic [31:0] a,
 input logic [31:0] b,
 input logic [31:0] c,
 input logic [31:0] d,
 input logic [31:0] e,
 input logic [31:0] f,
 input logic [31:0] g,
 input logic [31:0] h,
 
 output logic [31:0] a_new,
 output logic [31:0] b_new,
 output logic [31:0] c_new,
 output logic [31:0] d_new,
 output logic [31:0] e_new,
 output logic [31:0] f_new,
 output logic [31:0] g_new,
 output logic [31:0] h_new
);

logic [31:0] ch, temp1, temp2, maj, t1, t2;

S1 S1(
	.X(e),
	.us1(t1)
);

S0 S0(
	.X(a),
	.us0(t2)
);
	
assign ch = (e & f) ^ ((~e) & g);
assign temp1 = h + t1 + ch + k_i + w_i;
assign maj = (a & b) ^ (a & c) ^ (b & c);
assign temp2 = t2 + maj;

assign g_new = f;
assign f_new = e;
assign e_new = d + temp1;
assign d_new = c;
assign h_new = g;
assign c_new = b;
assign b_new = a;
assign a_new = temp1 + temp2;


endmodule

