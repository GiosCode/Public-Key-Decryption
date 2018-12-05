`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:03:57 12/04/2018
// Design Name:   modExp
// Module Name:   /home/ise/VMShare/Public-Key-Decryption/PublicKeyDecryption/modExp_tb.v
// Project Name:  PublicKeyDecryption
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: modExp
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module modExp_tb;

	// Inputs
	reg clk;
	reg [11:0] msgIn;
	reg [11:0] key;
	reg [11:0] n;

	// Outputs
	wire [11:0] msgOut;

	// Instantiate the Unit Under Test (UUT)
	modExp uut (
		.clk(clk), 
		.msgIn(msgIn), 
		.key(key), 
		.n(n), 
		.msgOut(msgOut)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		msgIn = 300;
		key = 100;
		n = 143;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		forever begin
		#5;
		clk = !clk;
		end

	end
      
endmodule

