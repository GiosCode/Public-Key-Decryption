`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:44:46 11/27/2018
// Design Name:   RNG
// Module Name:   /home/ise/VMShare/Public-Key-Decryption/PublicKeyDecryption/RNG_tb.v
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

	// Outputs
	wire [11:0] rand;

	// Instantiate the Unit Under Test (UUT)
	RNG uut (
		.clk(clk), 
		.rand(rand)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		forever begin
		#5;
		clk = !clk;
		end

	end
      
endmodule

