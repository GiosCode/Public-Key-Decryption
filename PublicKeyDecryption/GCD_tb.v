`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:06:28 12/03/2018
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
	reg [11:0] a;
	reg [11:0] b;
	reg flag;

	// Outputs
	wire [11:0] gcd;
	wire complete;

	// Instantiate the Unit Under Test (UUT)
	GCD uut (
		.clk(clk), 
		.a(a), 
		.b(b), 
		.flag(flag), 
		.gcd(gcd), 
		.complete(complete)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		a = 36;
		b = 60;
		flag = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		forever begin
		#5;
		clk = !clk;
		end

	end
      
endmodule

