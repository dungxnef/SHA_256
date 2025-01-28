module padd_1(
	input logic clk,rst,stop,ready,
	input logic [7:0] data_in,
	output logic padded_i_1,
	output logic [511:0] padd_out_1
); 

logic [7:0] block_512 [63:0]; //8bit word * 64 add = 512
logic [5:0] add_512_block; // Memory Address Register !6 bit reg can address 63 loc max
logic [63:0] m_size;  // l 64-bit number encoded for representing the length of input message
logic temp_chk; //to run if(temp_chk) func only once in if(stop)

logic padd0s_done;
logic addr63;


always_comb begin
	if(add_512_block == 6'd63 )
		addr63 = 1'b1;
	else addr63 = 1'b0;
end


always@(posedge clk)begin
	if(!rst) begin
		add_512_block <= 6'd0;
		m_size <= 64'd0;
		padd0s_done <= 1'b0;
		padded_i_1 <=1'b0;
		padd_out <= 512'd0;
		overflow <= 1'b0;
		temp_chk <= 1'b0;
	end
	else begin
		if(ready && !addr63)begin
			block_512[add_512_block]<=data_in;
			add_512_block<=add_512_block+1;
				if(stop)begin
				  if(add_512_block < 58) begin 
					if(temp_chk==0)begin
						padd0s_done<=1'b0;
						m_size[63:0]<=(add_512_block)*8;		// calculate input length
						block_512[add_512_block]<=8'b10000000; // append 1						
						temp_chk<=1'b1;
					end 
					else begin // padding 0s
						if (!padd0s_done && !overflow) begin
							block_512[63]<=m_size[7:0];
							block_512[62]<=m_size[15:8];
							block_512[61]<=m_size[23:16];
							block_512[60]<=m_size[31:24];
							block_512[59]<=m_size[39:32];	//allocating the 64-bit m_size in the block
							block_512[58]<=m_size[47:40];
							block_512[57]<=m_size[55:48];
							block_512[56]<=m_size[63:56];  //block_512[56] location for LSB of 64-bit m_size
							case(add_512_block)
							6'd1: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd2: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd3: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd4: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd5: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd6: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd7: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd8: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd9: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd10: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd11: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd12: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd13: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd14: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd15: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd16: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd17: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd18: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd19: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd20: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd21: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd22: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd23: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd24: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd25: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd26: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd27: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd28: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd29: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd30: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd31: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd32: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd33: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd34: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd35: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd36: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd37: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd38: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd39: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd40: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd41: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd42: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd43: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd44: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd45: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd46: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd47: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd48: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd49: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd50: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd51: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd52: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd53: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd54: begin
									add_512_block<=add_512_block+1;
									block_512[add_512_block]<=8'd0;
							end
							6'd55: begin
									block_512[add_512_block]<=8'd0; // 64 bits (8 address) for input length
							end
							
							default:
							begin
									overflow<=1'b1; //if address was <55 still no case started
									padd0s_done<=1'b0; //then there is an error 
							end
							
							endcase
						 	
							padd0s_done<=1'b1;
						
						end  // end !padd0s_done
						else begin  // if padd0s_done start output the padded input message
						//	integer i;
						//	for(i=63; i >= 0; i--) begin
						//		padd_out[i*8 +: 8] <= block_512[-(i-63)] ;
						//	end

				// W0									W4							    W8							    	W12	
				padd_out[511:504] <= block_512[0];  padd_out[383:376] <= block_512[16]; padd_out[255:248] <= block_512[32]; padd_out[127:120] <= block_512[48];	
				padd_out[503:496] <= block_512[1];  padd_out[375:368] <= block_512[17]; padd_out[247:240] <= block_512[33]; padd_out[119:112] <= block_512[49];
				padd_out[495:488] <= block_512[2];  padd_out[367:360] <= block_512[18]; padd_out[239:232] <= block_512[34]; padd_out[111:104] <= block_512[50];
				padd_out[487:480] <= block_512[3];  padd_out[359:352] <= block_512[19]; padd_out[231:224] <= block_512[35]; padd_out[103:96] <= block_512[51];
				//W1								W5							    	W9							    	W13
				padd_out[479:472] <= block_512[4];  padd_out[351:344] <= block_512[20]; padd_out[223:216] <= block_512[36]; padd_out[95:88] <= block_512[52];
				padd_out[471:464] <= block_512[5];  padd_out[343:336] <= block_512[21]; padd_out[215:208] <= block_512[37]; padd_out[87:80] <= block_512[53]; 
				padd_out[463:456] <= block_512[6];  padd_out[335:328] <= block_512[22]; padd_out[207:200] <= block_512[38]; padd_out[79:72] <= block_512[54];
				padd_out[455:448] <= block_512[7];  padd_out[327:320] <= block_512[23]; padd_out[199:192] <= block_512[39]; padd_out[71:64] <= block_512[55];
				//W2								W6							    	W10							    	W14
				padd_out[447:440] <= block_512[8];  padd_out[319:312] <= block_512[24]; padd_out[191:184] <= block_512[40]; padd_out[63:56] <= block_512[56];
				padd_out[439:432] <= block_512[9];  padd_out[311:304] <= block_512[25]; padd_out[183:176] <= block_512[41]; padd_out[55:48] <= block_512[57];
				padd_out[431:424] <= block_512[10]; padd_out[303:296] <= block_512[26]; padd_out[175:168] <= block_512[42]; padd_out[47:40] <= block_512[58];
				padd_out[423:416] <= block_512[11]; padd_out[295:288] <= block_512[27]; padd_out[167:160] <= block_512[43]; padd_out[39:32] <= block_512[59];
				//W3								W7							    	W11							    	W15
				padd_out[415:408] <= block_512[12]; padd_out[287:280] <= block_512[28]; padd_out[159:152] <= block_512[44]; padd_out[31:24] <= block_512[60];
				padd_out[407:400] <= block_512[13]; padd_out[279:272] <= block_512[29]; padd_out[151:144] <= block_512[45]; padd_out[23:16] <= block_512[61];
				padd_out[399:392] <= block_512[14]; padd_out[271:264] <= block_512[30]; padd_out[143:136] <= block_512[46]; padd_out[15:8] <= block_512[62];
				padd_out[391:384] <= block_512[15]; padd_out[263:256] <= block_512[31]; padd_out[135:128] <= block_512[47]; padd_out[7:0] <= block_512[63];
					
				padd0s_done <= 1'b0;
				padded_i <= 1'b1;
						end
					end
				  end // if add_512_block < 55
				  else begin
				  	overflow<=1'b1;
				  end
				end // if stop
				else begin
					if(add_512_block==55)begin // if !stop and add_512_block = 55
						overflow<=1'b1;
					end
					else begin
						overflow<=1'b0;
					end
				end
			end // end ready
		end
	end
endmodule

		
	
					
