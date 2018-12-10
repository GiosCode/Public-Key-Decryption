`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:40:17 12/10/2018 
// Design Name: 
// Module Name:    ioControl 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ioControl(input [2:0]buttons,
					  input clk,
					  output reg gen,
					  output reg encrypt,
					  output reg decrypt);

	always@(posedge clk) begin
		case(buttons)
			3'b110: begin
				gen <= 1;
			end
			3'b101: begin
				encrypt <=1;
			end
			3'b011: begin
				decrypt <=1;
			end	
			default: begin 
				gen = 0;
				encrypt = 0;
				decrypt = 0; 
			end
		endcase
	end
endmodule
