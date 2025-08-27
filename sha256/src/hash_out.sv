module hash_out(
	input logic clk, rst, sel,
	input logic [31:0] w_i,
	input logic [31:0] k_i,
	
	input logic [31:0] h0,
	input logic [31:0] h1,
	input logic [31:0] h2,
	input logic [31:0] h3,
	input logic [31:0] h4,
	input logic [31:0] h5,
	input logic [31:0] h6,
	input logic [31:0] h7,
	
	output logic [255:0] hash_val
);

logic [31:0] a,b,c,d,e,f,g,h;
logic [31:0] a_new, b_new, c_new, d_new, e_new, f_new, g_new, h_new;

compress compress(
 .k_i(k_i),
 .w_i(w_i),
 
 .a(a),
 .b(b),
 .c(c),
 .d(d),
 .e(e),
 .f(f),
 .g(g),
 .h(h),
 
 .a_new(a_new),
 .b_new(b_new),
 .c_new(c_new),
 .d_new(d_new),
 .e_new(e_new),
 .f_new(f_new),
 .g_new(g_new),
 .h_new(h_new)
);

always @(posedge clk) begin
	if(!rst) begin
			a <= h0;
			b <= h1;
			c <= h2;
			d <= h3;
			e <= h4;
			f <= h5;
			g <= h6;
			h <= h7;
			end
	else begin
		if (sel) begin
				a <= a_new;
				b <= b_new;
				c <= c_new;
				d <= d_new;
				e <= e_new;
				f <= f_new;
				g <= g_new;
				h <= h_new;
				end
		else begin
				a <= a;
				b <= b;
				c <= c;
				d <= d;
				e <= e;
				f <= f;
				g <= g;
				h <= h;
				end
	end
end

logic [31:0] h0_out, h1_out, h2_out, h3_out, h4_out, h5_out, h6_out, h7_out;

assign h0_out = h0 + a;
assign h1_out = h1 + b;
assign h2_out = h2 + c;
assign h3_out = h3 + d;
assign h4_out = h4 + e;
assign h5_out = h5 + f;
assign h6_out = h6 + g;
assign h7_out = h7 + h;

assign hash_val = {h0_out, h1_out, h2_out, h3_out, h4_out, h5_out, h6_out, h7_out};

endmodule



