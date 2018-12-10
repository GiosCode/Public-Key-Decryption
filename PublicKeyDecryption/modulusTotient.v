`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:30:02 12/10/2018 
// Design Name: 
// Module Name:    modulusTotient 
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
module modulusTotient #(parameter SIZE = 12)
							(input clk,
							 input [SIZE-1:0]in1,
							 input [SIZE-1:0]in2,
							 input enabled,
							 output reg [(SIZE*2)-1:0]modulus,
							 output reg [(SIZE*2)-1:0]totient,
							 output reg finished);
							 

		always@* begin
			if(enabled == 1) begin
				modulus = in1 * in2;
				totient = (in1 - 1'b1) * (in2 - 1'b1);
				finished = 1;
			end
			else begin 
				finished = 0; 
			end
		end
endmodule
