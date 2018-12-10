`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   05:57:21 12/10/2018
// Design Name:   ioControl
// Module Name:   /home/ise/XIlinxShare/Public-Key Decryption/PublicKeyDecryption/ioContro_tb.v
// Project Name:  PublicKeyDecryption
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ioControl
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ioContro_tb;

	// Inputs
	reg [2:0] buttons;
	reg clk;

	// Outputs
	wire gen;
	wire encrypt;
	wire decrypt;

	// Instantiate the Unit Under Test (UUT)
	ioControl uut (
		.buttons(buttons), 
		.clk(clk), 
		.gen(gen), 
		.encrypt(encrypt), 
		.decrypt(decrypt)
	);

	initial begin
		// Initialize Inputs
		buttons = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		// Add stimulus here
		
		
		buttons = 3'b110;
		#10;
		buttons = 3'b111;
		#10;
		buttons = 3'b101;
		#10;
		buttons = 3'b111;
		#15;
		buttons = 3'b011;
		#10;
		buttons = 3'b111;
		#100;
		
		
	end
   always
	#5 clk = !clk;
endmodule

