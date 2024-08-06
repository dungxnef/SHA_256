module sha256(
	input logic [511:0] mess,
	input logic clk,rst, padded_i,
	output logic ready,
	output logic [255:0] hash_val
);

	logic [31:0] k [63:0];

    assign k[00] = 32'h428a2f98;
    assign k[01] = 32'h71374491;
    assign k[02] = 32'hb5c0fbcf;
    assign k[03] = 32'he9b5dba5;
    assign k[04] = 32'h3956c25b;
    assign k[05] = 32'h59f111f1;
    assign k[06] = 32'h923f82a4;
    assign k[07] = 32'hab1c5ed5;
    assign k[08] = 32'hd807aa98;
    assign k[09] = 32'h12835b01;
    assign k[10] = 32'h243185be;
    assign k[11] = 32'h550c7dc3;
    assign k[12] = 32'h72be5d74;
    assign k[13] = 32'h80deb1fe;
    assign k[14] = 32'h9bdc06a7;
    assign k[15] = 32'hc19bf174;
    assign k[16] = 32'he49b69c1;
    assign k[17] = 32'hefbe4786;
    assign k[18] = 32'h0fc19dc6;
    assign k[19] = 32'h240ca1cc;
    assign k[20] = 32'h2de92c6f;
    assign k[21] = 32'h4a7484aa;
    assign k[22] = 32'h5cb0a9dc;
    assign k[23] = 32'h76f988da;
    assign k[24] = 32'h983e5152;
    assign k[25] = 32'ha831c66d;
    assign k[26] = 32'hb00327c8;
    assign k[27] = 32'hbf597fc7;
    assign k[28] = 32'hc6e00bf3;
    assign k[29] = 32'hd5a79147;
    assign k[30] = 32'h06ca6351;
    assign k[31] = 32'h14292967;
    assign k[32] = 32'h27b70a85;
    assign k[33] = 32'h2e1b2138;
    assign k[34] = 32'h4d2c6dfc;
    assign k[35] = 32'h53380d13;
    assign k[36] = 32'h650a7354;
    assign k[37] = 32'h766a0abb;
    assign k[38] = 32'h81c2c92e;
    assign k[39] = 32'h92722c85;
    assign k[40] = 32'ha2bfe8a1;
    assign k[41] = 32'ha81a664b;
    assign k[42] = 32'hc24b8b70;
    assign k[43] = 32'hc76c51a3;
    assign k[44] = 32'hd192e819;
    assign k[45] = 32'hd6990624;
    assign k[46] = 32'hf40e3585;
    assign k[47] = 32'h106aa070;
    assign k[48] = 32'h19a4c116;
    assign k[49] = 32'h1e376c08;
    assign k[50] = 32'h2748774c;
    assign k[51] = 32'h34b0bcb5;
    assign k[52] = 32'h391c0cb3;
    assign k[53] = 32'h4ed8aa4a;
    assign k[54] = 32'h5b9cca4f;
    assign k[55] = 32'h682e6ff3;
    assign k[56] = 32'h748f82ee;
    assign k[57] = 32'h78a5636f;
    assign k[58] = 32'h84c87814;
    assign k[59] = 32'h8cc70208;
    assign k[60] = 32'h90befffa;
    assign k[61] = 32'ha4506ceb;
    assign k[62] = 32'hbef9a3f7;
    assign k[63] = 32'hc67178f2;
    
    logic [31:0] h0, h1, h2, h3, h4, h5, h6, h7;
    assign h0 = 32'h6a09e667;
    assign h1 = 32'hbb67ae85;
    assign h2 = 32'h3c6ef372;
    assign h3 = 32'ha54ff53a;
    assign h4 = 32'h510e527f;
    assign h5 = 32'h9b05688c;
    assign h6 = 32'h1f83d9ab;
    assign h7 = 32'h5be0cd19;    
    
    logic [31:0] w[63:0];
    
    logic [31:0] temp;
    logic [5:0] count, count16, count15, count7, count2;
    logic done;
    logic w_done;
    
    logic [31:0] w_o;
    
    always @(*) begin
    	if (done == 1'b1) w_o = w[63];
    	else			  w_o = temp;
    end
    
    integer i;
    always @(posedge clk) begin
    		if(padded_i) begin
	    		for(i=15; i >= 0; i --)begin
	    			w[-(i-15)] <= mess[32*i +: 32];
	    		end
	    		for(i =16; i<64; i++) begin
	    			w[i] <= 32'b0;
	    		end
	    		w_done <= 1'b1;
	    	end
	end
	
	w_calc w_calc(
    	.w_16(w[count16]),
    	.w_15(w[count15]),
    	.w_7(w[count7]),
    	.w_2(w[count2]),
    	.w_rdy(w_done),
    	.w_o(temp)
    );
    
    always @(posedge clk) begin
    	if(!rst) begin
    		count16 <= 6'd0;
    		count15 <= 6'd1;
    		count7 <= 6'd9;
    		count2 <= 6'd14;
    		count <= 6'd16;
		w_done <= 1'b0;
    	end
    	else begin
    		if(w_done) begin
			count2    <= count2    + 1;
		        count7    <= count7    + 1;
		        count15   <= count15   + 1;
		        count16   <= count16   + 1;
		        w[count]  <= w_o;
			if(count == 6'd63) begin count <= count;     done <= 1'b1; end
		    	else               begin count <= count + 1; done <= 1'b0; end
			end
			else begin 
			// do nothing
			end
        end
     end
     
   logic [5:0] count_hash;
   reg reset_hash;
   always@(posedge clk) reset_hash <= rst;
   
   always @(posedge clk) begin
   	if(!reset_hash )begin
   		if(w_done) begin
	   		count_hash <= 6'd0;
	   		ready <= 1'b0;
	   	end
	   	else begin
	   	//do nothing
	   	end
   	end
   	else begin
   		if(w_done) begin
	   		if(count_hash == 6'd63) begin 
	   			count_hash <= count_hash; ready <= 1'b1; 
	   		end
		    else begin 
		    	count_hash <= count_hash + 1; ready <= 1'b0; 
		    end
		end
		else begin
		// do nothing
		end
	end
    end
    
    logic select;
    assign select = ~ready;
    
    logic [31:0] w_value, k_value;
    
    always @(posedge clk) begin
        if(!reset_hash) begin
        	if(w_done) begin
		        w_value <= w[0];
		        k_value <= k[0];
		    end
		    else begin
		    // do nothing
		    end
        end
        else begin
        	if(w_done) begin
		        if(count_hash <= 6'd62) begin
		            w_value <= w[count_hash + 1];
		            k_value <= k[count_hash + 1];
		        end
		        else begin
		            w_value <= 32'b0;
		            k_value <= 32'b0;
		        end
		    end
		    else begin
		    //do nothing
		    end
        end
    end
    
     hash_out hash(
     	.clk(clk),
        .rst(reset_hash),
        .sel(select),
        .padded(padded_i),
        .w_i(w_value),
        .k_i(k_value),
        .h0(h0),
        .h1(h1),
        .h2(h2),
        .h3(h3),
        .h4(h4),
        .h5(h5),
        .h6(h6),
        .h7(h7),
        .hash_val(hash_val));
    
endmodule

