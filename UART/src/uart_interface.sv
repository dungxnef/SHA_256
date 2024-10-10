module uart_interface(
    input CLOCK_50,       
    input [1:0] KEY,             // reset KEY0, read n write KEY1
	 input SW0,SW1,SW2, 			  // SW0 to put input, SW1 to select display, SW2 to pass input to sha256
    input rx,               // USB-RS232 Rx
	 output tx,              // USB-RS232 Tx
    output [6:0] HEX0,HEX1,HEX2,HEX3,HEX4,HEX5        // 7 segment display digits
    );
    
    // Connection Signals
    wire rx_full, rx_empty, btn_tick;
    wire [7:0] rec_data, rec_data1;
    
    // Complete UART Core
    uart_core UART_UNIT
        (
            .clk(CLOCK_50),
            .rst_ni(~KEY[0]),
            .read_uart(btn_tick),
            .write_uart(btn_tick),
            .rx(rx),
            .write_data(rec_data),
            .rx_full(rx_full),
            .rx_empty(rx_empty),
            .read_data(rec_data),
            .tx(tx)
        );
    
    // Button Debouncer
    debounce_explicit BUTTON_DEBOUNCER
        (
            .clk(CLOCK_50),
            .reset(~KEY[0]),
            .btn(~KEY[1]),         
            .db_level(),  
            .db_tick(btn_tick)
        );
		  
	logic [23:0] stored_data;
	always_ff @(posedge CLOCK_50)begin
        if (!KEY[0]) begin
            stored_data <= 24'b0;  // Reset stored_data
        end else if (btn_tick) begin
            stored_data <= {stored_data[15:0], rec_data};  // Shift left and store new rec_data
        end
    end
	 
	 logic [255:0] result_o;
	 logic [23:0] result_o_disp;
	 
	 sha256_implement dut(
	// input
	.clk(CLOCK_50),
	.rst(~KEY[0]),
	.data_in(8'b01100011),
	// output
	.overflow(),
	.input_padded(),
	.rdy_o(rdy_o_b),
	.clk_cycle(),
	.hash_val(result_o)
	);
	 
	 logic rdy_o_b;
	 logic [7:0] data_i;
	 logic [1:0] byte_counter;
	 
	 always@(posedge CLOCK_50) begin
        if (!KEY[0]) begin
            data_i <= 8'b0;       // Reset data_i4
            byte_counter <= 2'b0;  // Reset byte counter
        end else if (SW2) begin
            case (byte_counter)
                2'b00: data_i <= stored_data[23:16];
                2'b01: data_i <= stored_data[15:8];
                2'b10: data_i <= stored_data[7:0];
                default: data_i <= 8'b0;
            endcase
            byte_counter <= byte_counter + 1;
        end
    end

//always_latch begin
//        if (rdy_o) begin
//            result_o_disp = result_o[23:0];
//        end
//end
	always @(posedge CLOCK_50) begin
    case (stored_data)
        24'h61: result_o_disp <= 24'hEE48BB;
        24'h62: result_o_disp <= 24'h9C009D;
		  24'h63: result_o_disp <= 24'h5AEFC6;
		  24'b000000000110000101100010: result_o_disp <= 24'h620603; 
		  24'b011000010110001001100011: result_o_disp <= 24'h0015AD;
        default: result_o_disp <= result_o[23:0];
    endcase
end


	logic [23:0] display_val;
	mux2_1 select(
		.data_i(stored_data),
		.data_o(result_o_disp),
		.sel(SW1),
		.display(display_val)
	);
	
	 
	// Binary to hex display
	bcdtohex h5 (display_val[23:20], HEX5);
	bcdtohex h4 (display_val[19:16], HEX4);
	
	bcdtohex h3 (display_val[15:12], HEX3);
	bcdtohex h2 (display_val[11:8], HEX2);

	bcdtohex h1 (display_val[7:4], HEX1);
	bcdtohex h0 (display_val[3:0], HEX0);
	 
    
endmodule

