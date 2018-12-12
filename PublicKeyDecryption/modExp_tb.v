`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   04:34:27 12/12/2018
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
	reg [23:0] key;
	reg [23:0] n;
	reg start;
	reg rst;

	// Outputs
	wire [11:0] msgOut;
	wire fins;

	// Instantiate the Unit Under Test (UUT)
	modExp uut (
		.clk(clk), 
		.msgIn(msgIn), 
		.key(key), 
		.n(n), 
		.start(start), 
		.rst(rst), 
		.msgOut(msgOut), 
		.fins(fins)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		msgIn = 0;
		key =0;
		n = 0;
		start = 0;
		rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
      msgIn = 9;
		key =7 ;
		n = 143;
		start = 1;
		// Add stimulus here
		

	end
      always
	#5 clk = !clk;
endmodule

