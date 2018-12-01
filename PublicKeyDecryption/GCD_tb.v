`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   08:00:45 11/29/2018
// Design Name:   GCD
// Module Name:   /home/ise/VMShare/Public-Key-Decryption/PublicKeyDecryption/GCD_tb.v
// Project Name:  PublicKeyDecryption
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: GCD
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module GCD_tb;

	// Inputs
	reg clk;
	reg [7:0] a;
	reg [7:0] b;

	// Outputs
	wire [7:0] c;

	// Instantiate the Unit Under Test (UUT)
	GCD uut (
		.clk(clk), 
		.a(a), 
		.b(b), 
		.c(c)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		a = 54;
		b = 4;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		forever begin
		#5;
		clk = !clk;
		end

	end
      
endmodule

