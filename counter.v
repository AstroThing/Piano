`timescale 1ns / 1ps

module counter(
	 input clk,
	 input reset,
    input [31:0] limit,
    input limit_we,
    input enable,
    output reg limit_reached
    );

	reg [31:0] count_limit;
	reg [31:0] count;
	reg counting;
	
	always @ (posedge clk)
	begin
		counting <= enable && !limit_reached;
		if(reset)
		begin
			count <= 32'b0;
			counting <= 0;
			limit_reached <= 0;
		end
		
		if(limit_we)
		begin
			count_limit <= limit;
		end
		
		if(counting)
		begin
			if(count < count_limit)
			begin
				count <= count + 1;
			end
			else
			begin
				counting <= 0;
				limit_reached <= 1;
			end
		end
	end
endmodule
