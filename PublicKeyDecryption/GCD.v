`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:53:01 11/29/2018 
// Design Name: 
// Module Name:    GCD 
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
//not works
//////////////////////////////////////////////////////////////////////////////////
module GCD(
				input clk,
				input [11:0]a,//e
				input [11:0]b,//totient
				input flag,
				output reg [11:0]gcd,
				output reg complete);
reg [11:0]tmpa = 0;
reg [11:0]tmpb = 0;

reg [11:0]rem;

reg setup = 0;
parameter checkLoop = 2'b00;
parameter opOne = 2'b01;
parameter opTwo = 2'b10;
parameter finished = 2'b11;
reg [1:0]state = checkLoop;

reg done = 0;//Once this is set to one you found gcd

	always@(posedge clk) begin
		if(setup == 0)begin
			tmpa = a;
			tmpb = b;
			setup = 1;
		end
			if(flag == 1) begin
				case(state)
				checkLoop: begin
					if(tmpa == 0) begin//gcd of e and totient == 1
					gcd = tmpb;
					state = finished;
					end
					else if(tmpb == 0) begin
					gcd = tmpa;
					state = finished;
					end
					else begin
					state = opOne;
					end
				end
				opOne: begin
				rem = tmpa % tmpb;
				state = opTwo;
				end
				opTwo: begin
				tmpa = tmpb;
				tmpb = rem;
				state = checkLoop;
				end
				finished: begin
				complete = 1;
				end
				default: complete = 0;
				endcase
			end
	end
	
endmodule
