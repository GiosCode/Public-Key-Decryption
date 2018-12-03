`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:52:15 12/03/2018 
// Design Name: 
// Module Name:    privatekeyGen 
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
module privatekeyGen#(parameter INPUTSIZE = 12)(
								input clk,
								input [INPUTSIZE-1:0]e,
								input [INPUTSIZE-1:0]totient,
								output reg [INPUTSIZE-1:0]d,
								output reg flag
    );

reg [INPUTSIZE-1:0]tempD = 0;
reg [INPUTSIZE*2:0]ed = 0;
reg [INPUTSIZE-1:0]mod = 0;
parameter loopCheck = 2'b00;
parameter calcOne = 2'b01;
parameter calcTwo = 2'b10;
parameter finished = 2'b11;
reg [1:0]state = loopCheck;
	
	always@(posedge clk) begin
		case(state)
		loopCheck: begin
			if(mod == 1)begin
				state = finished;
			end
			else begin
				tempD = tempD +1;
				state = calcOne;
			end
		end
		calcOne: begin
			ed = e * tempD;
			state = calcTwo;
		end
		calcTwo: begin
			mod = ed % totient;
			state = loopCheck;
		end
		finished: begin
			d = tempD;
			flag = 1;
		end
		default: begin d = 0; flag = 0; end
		endcase
	end
endmodule
