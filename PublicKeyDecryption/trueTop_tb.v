`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:06:05 12/12/2018
// Design Name:   trueTop
// Module Name:   /home/ise/VMShare/Public-Key-Decryption/PublicKeyDecryption/trueTop_tb.v
// Project Name:  PublicKeyDecryption
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: trueTop
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module trueTop_tb;

	// Inputs
	reg btnC;
	reg [15:0] sw;
	reg btnU;
	reg btnD;
	reg clk;

	// Outputs
	wire [15:0] led;

	// Instantiate the Unit Under Test (UUT)
	trueTop uut (
		.btnC(btnC), 
		.sw(sw), 
		.btnU(btnU), 
		.btnD(btnD), 
		.clk(clk), 
		.led(led)
	);

	initial begin
		// Initialize Inputs
		btnC = 0;
		sw = 0;
		btnU = 0;
		btnD = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		sw = 11;
		#20;
		btnU = 1;
		#20;
		btnU=0;
		#100000;
		btnC = 1;
		#10;
		btnC = 0;
		#100000;
		btnD = 1;
		#10;
		btnD = 0;
		#100;
	end
      always begin
		#5;
		clk = !clk;
		end
endmodule

