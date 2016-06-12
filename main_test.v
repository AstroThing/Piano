`timescale 1ns / 1ps

module main_test;

	// Inputs
	reg clk;
	reg [3:0] keys;

	// Outputs
	wire [3:0] sample;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.clk(clk), 
		.keys(keys), 
		.sample(sample)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		keys = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		keys = 4'b1000;
		#95350200
		keys = 4'b0100;
		#95350200
		keys = 4'b0010;
		#95350200
		keys = 4'b0001;
		#95350200
		keys = 4'b0000;
		

	end
   
	always
	begin
		#100
		clk = !clk;
	end
endmodule

