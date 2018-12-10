`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:29:21 12/10/2018
// Design Name:   RNG
// Module Name:   /home/ise/XIlinxShare/Public-Key Decryption/PublicKeyDecryption/RNG_tb.v
// Project Name:  PublicKeyDecryption
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RNG
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RNG_tb;

	// Inputs
	reg clk;
	reg send;

	// Outputs
	wire [6:0] rand;

	// Instantiate the Unit Under Test (UUT)
	RNG uut (
		.clk(clk), 
		.send(send), 
		.rand(rand)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		send = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		forever begin
		#5;
		clk = !clk;
		end
		send = 1;
		#20
		send = 0;
	end
      
endmodule

