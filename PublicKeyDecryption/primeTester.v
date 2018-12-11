`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:02:26 12/10/2018 
// Design Name: 
// Module Name:    primeTester 
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
module primeTester(input clk,
						 input [6:0]in1,
						 input [6:0]in2,
						 input [6:0]in3,
						 input enable,
						 output reg [11:0]out1,
						 output reg [11:0]out2,
						 output reg [11:0]out3,
						 output reg finished);
						 
	reg [11:0] primeList [127:0];
	
	initial begin
	$readmemh ("prime.mem", primeList);
	end
	//always@(posedge clk) begin//Sending possible values of e(public key)
		//out3 = primeList[in3];	
	//end
	always@(posedge clk) begin
		if(enable == 1) begin
			out1 = primeList[in1];
			out2 = primeList[in2];
			out3 = primeList[in3] * primeList
			finished = 1;
		end
		else begin
			out1 = out1;
			out2 = out2;
			out3 = out3;
			finished = 0;
		end
	end
endmodule
