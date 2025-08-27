module sha256(
	input logic [511:0] mess,
	input logic clk,rst, padded_i,
	output logic rdy_o,
	output logic [255:0] hash_val
);

logic [31:0] k [63:0];
	
// K constant
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
// H constant
assign h0 = 32'h6a09e667;
assign h1 = 32'hbb67ae85;
assign h2 = 32'h3c6ef372;
assign h3 = 32'ha54ff53a;
assign h4 = 32'h510e527f;
assign h5 = 32'h9b05688c;
assign h6 = 32'h1f83d9ab;
assign h7 = 32'h5be0cd19;    
    
logic [31:0] w[63:0]; // W0 -> W63 . 64 32-bit Ws
logic done;	      // done = 1 when all W has been addressed
logic w_rdy;	      // w_rdy =1 when 16 first W (W0 -> W15) has been addressed
    

// MESS SCHELDULE
// Assign input => W0 -> W15
	always @(posedge clk) begin
    		if(padded_i && !done ) begin // if the input padded and 64 W has NOT 
	     				     // been addressed then do mess schedule
//    		    integer i;	     				     
//	    		for(i=15; i >= 0; i --)begin
//	    			w[-(i-15)] <= mess[32*i +: 32];
//	    		end
			w[0] <= mess[511:480]; w[4] <= mess[383:352];
			w[1] <= mess[479:448]; w[5] <= mess[351:320];
			w[2] <= mess[447:416]; w[6] <= mess[319:288];
			w[3] <= mess[415:384]; w[7] <= mess[287:256];
			
			
			w[8] <= mess[255:224];  w[12] <= mess[127:96];
			w[9] <= mess[223:192];  w[13] <= mess[95:64];
			w[10] <= mess[191:160]; w[14] <= mess[63:32];
			w[11] <= mess[159:128]; w[15] <= mess[31:0];
		
	    		w_rdy <= 1'b1;
	    	end
	end
	
	
// Affter W1 -> W15 assigned. Calculate W16 -> W63

logic stop_w_calc;//stop calculate W when done = 1 (when all W has been addressed)
assign stop_w_calc = w_rdy && !done;

logic [5:0] count_1, count16_1, count15_1, count7_1, count2_1;
logic [5:0] count_2, count16_2, count15_2, count7_2, count2_2;
logic [31:0] temp1, temp2;
logic [31:0] w_o1, w_o2;

w_calc w_calc1(
.w_16(w[count16_1]),
.w_15(w[count15_1]),
.w_7(w[count7_1]),
.w_2(w[count2_1]),
.w_rdy(stop_w_calc),
.w_o(temp1)
);

w_calc w_calc2(
.w_16(w[count16_2]),
.w_15(w[count15_2]),
.w_7(w[count7_2]),
.w_2(w[count2_2]),
.w_rdy(stop_w_calc),
.w_o(temp2)
);
    
	always @(*) begin
		if (done == 1'b1) begin
 			w_o2 = w[63]; 
 			w_o1 = w[62]; 
		end
		else begin
			w_o2 = temp2;
			w_o1 = temp1;
		end
end
    
    always @(posedge clk) begin
    	if(!rst) begin
    		count16_1 <= 6'd0;
    		count15_1 <= 6'd1;
    		count7_1 <= 6'd9;
    		count2_1 <= 6'd14;
    		count_1 <= 6'd16;
    		
    		count16_2 <= 6'd1;
    		count15_2 <= 6'd2;
    		count7_2 <= 6'd10;
    		count2_2 <= 6'd15;
    		count_2 <= 6'd17;
    		
			w_rdy <= 1'b0;
			done <= 1'b0;
		
//		integer i;
//		for(i =16; i<64; i++) begin
//			w[i] = 32'b0;
//		end
// 		RESET W16 -> W64
		w[16] <= 32'b0; w[20] <= 32'b0; w[24] <= 32'b0; w[28] <= 32'b0;
		w[17] <= 32'b0; w[21] <= 32'b0; w[25] <= 32'b0; w[29] <= 32'b0;
		w[18] <= 32'b0; w[22] <= 32'b0; w[26] <= 32'b0; w[30] <= 32'b0;
		w[19] <= 32'b0; w[23] <= 32'b0; w[27] <= 32'b0; w[31] <= 32'b0;
		
		
		w[32] <= 32'b0; w[36] <= 32'b0; w[40] <= 32'b0; w[44] <= 32'b0;
		w[33] <= 32'b0; w[37] <= 32'b0; w[41] <= 32'b0; w[45] <= 32'b0;
		w[34] <= 32'b0; w[38] <= 32'b0; w[42] <= 32'b0; w[46] <= 32'b0;
		w[35] <= 32'b0; w[39] <= 32'b0; w[43] <= 32'b0; w[47] <= 32'b0;
		
		
		w[48] <= 32'b0; w[52] <= 32'b0; w[56] <= 32'b0; w[60] <= 32'b0;
		w[49] <= 32'b0; w[53] <= 32'b0; w[57] <= 32'b0; w[61] <= 32'b0;
		w[50] <= 32'b0; w[54] <= 32'b0; w[58] <= 32'b0; w[62] <= 32'b0;
		w[51] <= 32'b0; w[55] <= 32'b0; w[59] <= 32'b0; w[63] <= 32'b0;
		
		
    	end
    	else begin
    		if(w_rdy && !rdy_o) begin				
				count2_1    <= count2_1    + 2;
		        count7_1    <= count7_1    + 2;
		        count15_1   <= count15_1   + 2;
		        count16_1   <= count16_1   + 2;
		        w[count_1]    <= w_o1;
		        
		        count2_2    <= count2_2    + 2;
		        count7_2    <= count7_2    + 2;
		        count15_2   <= count15_2   + 2;
		        count16_2   <= count16_2   + 2;
		        w[count_2]    <= w_o2;
				if(count_2 == 6'd63) begin
					count_1 <= count_1;
					count_2 <= count_2;
					done <= 1'b1;
				end
		    		else begin
		    			count_1 <= count_1 + 2;
		    			count_2 <= count_2 + 2;
		    			done <= 1'b0; 
		 		end
		end
	end
     end
     
     
   // After all 64 W is got. Using K and W to calculate H    
   logic [6:0] count_hash1, count_hash2;
   logic [31:0] w_value1, k_value1, w_value2, k_value2;
   logic reset_hash;
   
   always@(posedge clk) reset_hash <= rst;
   
   always @(posedge clk) begin
   	if(!reset_hash )begin
	   count_hash1 <= 7'd0;
	   count_hash2 <= 7'd1;
	   
	   rdy_o <= 1'b0;
	   
	   w_value1 <= 32'b0;
	   w_value2 <= 32'b0;
	   
	   k_value1 <= k[0];
	   k_value2 <= k[1];
   	end
   	else begin
   		if(done) begin
	   		if(count_hash2 == 7'd63) begin 
	   			count_hash1 <= count_hash1;
	   			count_hash2 <= count_hash2;
	   			
	   			w_value1 <= w_value1;
	   			w_value2 <= w_value2;
	   			
		   		k_value1 <= k_value1;
		   		k_value2 <= k_value2;
		   		
	   			rdy_o <= 1'b1;
	   			w_rdy <= 1'b0; 
	   		end
		    	else begin 
		    		count_hash1 <= count_hash1 + 2; 
		    		count_hash2 <= count_hash2 + 2;
		    		
		    		w_value1 <= w[count_hash1 + 2];
			        w_value2 <= w[count_hash2 + 2];
			        
				k_value1 <= k[count_hash1 + 2];
				k_value2 <= k[count_hash2 + 2];
		                
		    		rdy_o <= 1'b0; 
		    	end
		end
		else begin
			if(w_rdy) begin
				if(count_hash2 == 7'd63) begin
				
		   			count_hash1 <= count_hash1;
		   			count_hash2 <= count_hash2;
		   			
		   			w_value1 <= w_value1;
		   			w_value2 <= w_value2;
		   			
		   			k_value1 <= k_value1;
		   			k_value2 <= k_value2;
		   		end
			    	else begin 
			    		count_hash1 <= count_hash1 + 2; 
		    			count_hash2 <= count_hash2 + 2; 
		    			
		    			w_value1 <= w[count_hash1 + 2];
				    	w_value2 <= w[count_hash2 + 2];
				    	k_value1 <= k[count_hash1 + 2];
				    	k_value2 <= k[count_hash2 + 2];
			    	end
			 end
			 else begin
				w_value1 <= mess[511:480];
				w_value2 <= mess[479:448];		 
			 end
		end
	end
end

    logic hash_cal;
    assign hash_cal = w_rdy && !rdy_o ; 
    
     hash_out hash(
     	.clk(clk),
        .rst(reset_hash),
        .sel(hash_cal),
        .w_i1(w_value1),
        .k_i1(k_value1),
        .w_i2(w_value2),
        .k_i2(k_value2),
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

