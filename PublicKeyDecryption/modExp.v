`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:12:00 11/28/2018 
// Design Name: 
// Module Name:    modExp 
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
module modExp #(parameter MSGINSIZE = 12)(
					input clk,
					input[11:0]msgIn,
					input[23:0]key,
					input[23:0]n,
					input start,
					input rst,
					output reg [11:0]msgOut,
					output reg  fins
    );
//msgOut = [msgIN^(key)] % n

reg [11:0]res = 1;
reg [47:0]x = 0;
reg [23:0]y = 0;

parameter setup = 3'b000;
parameter check1 = 3'b001;
parameter check2 = 3'b010;
parameter mod = 3'b011;
parameter finished = 3'b100;

reg [2:0] state = setup;

always@(posedge clk) begin
	if(start == 1) begin
	case(state) 
		setup: begin
			x = msgIn % n;
			y = key;
			state = check1;
		end
		check1: begin
			if(y == 0) begin
				state = finished;
			end
			else begin
				state = check2; 
			end
		end
		check2: begin
			if(y % 2 == 1) begin
				res = (res * x) % n;
			end
			y = y >> 1;
			state = mod;
			end
		mod: begin
				//y = y/2;
			x = (x*x) % n;
			state = check1;
		end
		finished: begin
			if(rst == 1) begin
			state = setup; 
			end
			fins =1;
			msgOut = res;
		end
	default: msgOut = 0;
	endcase
end
end
endmodule