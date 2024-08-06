module padd(
	input logic clk,rst,stop,
	input logic [7:0] data_in,
	output logic overflow,padd_done,padded_i,
	output logic [511:0] padd_out
); 

logic [7:0] block_512 [63:0]; //8bit word * 64 add = 512
logic [5:0] add_512_block; // Memory Address Register !6 bit reg can address 63 loc max
logic [63:0] m_size;  // l 64-bit number encoded for representing the length of input message
logic temp_chk; //to run if(temp_chk) func only once in if(stop)

always@(posedge clk)begin
	if(add_512_block==55 && stop==0)begin
			overflow<=1'b1;
			padd_done<=1'b0; //if overflow !! don't start Hashing
		end
		else begin
			overflow<=1'b0;
		end
end

always@(posedge clk)begin
	if(add_512_block==63 && stop==1)begin
		overflow<=1'b1;
	end
end

always@(posedge clk)begin
	if(!rst) begin
		add_512_block <= 6'd0;
		m_size <= 64'd0;
		padd_done <= 1'b0;
		padded_i <=1'b0;
		padd_out <= 512'd0;
		overflow <= 1'b0;
		temp_chk <= 1'b0;
	end
	else begin
		if(!overflow)begin
			block_512[add_512_block]<=data_in;
			add_512_block<=add_512_block+1;
				if(stop)begin
					if(temp_chk==0)begin
						padd_done<=1'b0;
						m_size[63:0]<=(add_512_block)*8;
						block_512[add_512_block]<=8'b10000000; // append 1
						temp_chk<=1'b1;
					end 
					else begin // padding
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
								block_512[add_512_block]<=8'd0; //last address for '0's of  K
						end
						
						default:
						begin
								overflow<=1'b1; //if address was <55 still no case started
								padd_done<=1'b0; //then there is an error 
						end
						
						endcase
					end 
					
					block_512[63]<=m_size[7:0];
					block_512[62]<=m_size[15:8];
					block_512[61]<=m_size[23:16];
					block_512[60]<=m_size[31:24];
					block_512[59]<=m_size[39:32];	//allocating the 64-bit m_size in the block
					block_512[58]<=m_size[47:40];
					block_512[57]<=m_size[55:48];
					block_512[56]<=m_size[63:56];  //block_512[56] location for LSB of 64-bit m_size
				
					padd_done<=1'b1; //out this to start m_iteration	
				end // end stop
		end
		else begin	
			if(padd_done)begin
				integer i;
				for(i=63; i >= 0; i--) begin
					padd_out[i*8 +: 8] <= block_512[-(i-63)] ;
				end
				padded_i <= 1'b1;
			end
		end
	end
end
endmodule

		
	
					
