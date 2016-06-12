`timescale 1ns / 1ps

module rom_test;

	// Inputs
	reg [4:0] address;

	// Outputs
	wire [3:0] data;

	// Instantiate the Unit Under Test (UUT)
	ROM uut (
		.address(address), 
		.data(data)
	);

	initial begin
		// Initialize Inputs
		address = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
	end
	
	always
	begin
		#100
		if(address < 32)
			address = address + 1;
		else
			address = 0;
	end
      
endmodule

