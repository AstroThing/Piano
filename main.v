`timescale 1ns / 1ps

`define SAMPLE_SIZE 32

//Key frequencies in Hz
`define DO_FEQ 523
`define RE_FEQ 587
`define MI_FEQ 659
`define SOL_FEQ 784

module main(
    input clk,
    input [3:0] keys,
    output reg [3:0] sample
    );
	 
	 parameter
		SOL_KEY = 4'b0001,
		MI_KEY = 4'b0010,
		RE_KEY = 4'b0100,
		DO_KEY = 4'b1000;
	
	//---------------------------------------------------------------------------------//
	//Clocks
	reg current_clk;
	wire Do_clk, Re_clk, Mi_clk, Sol_clk;
	
	CLK_DIV #(.divider(`DO_FEQ * `SAMPLE_SIZE)) Do(.clk_in(clk), .clk_out(Do_clk));
	CLK_DIV #(.divider(`RE_FEQ * `SAMPLE_SIZE)) Re(.clk_in(clk), .clk_out(Re_clk));
	CLK_DIV #(.divider(`MI_FEQ * `SAMPLE_SIZE)) Mi(.clk_in(clk), .clk_out(Mi_clk));
	CLK_DIV #(.divider(`SOL_FEQ * `SAMPLE_SIZE)) Sol(.clk_in(clk), .clk_out(Sol_clk));
	//---------------------------------------------------------------------------------//
	//Samples	
	wire [3:0] current_sample;
	reg [4:0] current_address;
	
	ROM samples_rom(current_address, current_sample);
	//---------------------------------------------------------------------------------//
	
	always @ (keys or Sol_clk or Mi_clk or Re_clk or Do_clk)
	begin
		case(keys)
			SOL_KEY: current_clk = Sol_clk;
			MI_KEY: current_clk = Mi_clk;
			RE_KEY: current_clk = Re_clk;
			DO_KEY: current_clk = Do_clk;
			default: current_clk = current_clk;
		endcase
	end
	
	always @ (posedge current_clk)
	begin
		sample <= current_sample;
		if(current_address < `SAMPLE_SIZE)
			current_address <= current_address + 1;
		else
			current_address <= 0;
	end
	
	initial
	begin
		sample = 0;
		current_clk = 0;
		current_address = 0;
	end
	
endmodule
