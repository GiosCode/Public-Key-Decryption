`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   06:01:40 12/03/2018
// Design Name:   privatekeyGen
// Module Name:   /home/ise/XIlinxShare/Public-Key Decryption/PublicKeyDecryption/privateKeyGen_tb.v
// Project Name:  PublicKeyDecryption
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: privatekeyGen
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module privateKeyGen_tb;

	// Inputs
	reg clk;
	reg [11:0] e;
	reg [11:0] totient;

	// Outputs
	wire [11:0] d;
	wire flag;

	// Instantiate the Unit Under Test (UUT)
	privatekeyGen uut (
		.clk(clk), 
		.e(e), 
		.totient(totient), 
		.d(d), 
		.flag(flag)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		e = 7;
		totient = 120;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		forever begin
		#5;
		clk = !clk;
		end

	end
      
endmodule

