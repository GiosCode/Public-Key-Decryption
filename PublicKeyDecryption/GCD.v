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
				input [7:0]a,
				input [7:0]b,
				output reg [7:0]c
    );
reg [7:0]tmp;
reg [7:0]tmp2;
reg [7:0]r;

parameter checkLoop = 2'b00;
parameter second = 2'b01;
parameter finished = 2'b10;
parameter setup = 2'b11;
reg [1:0]state = setup;
reg active = 1;
	always@(posedge clk) begin
	//if(active == 1) begin
	case(state)
	setup: begin
		tmp <= a;
		tmp2 <= b;
		state <= checkLoop;
	end
	checkLoop:begin
	if(tmp2 > 0) state <= second;
	else state <= finished;
	end
	second: begin
	r <= tmp%tmp2;
	tmp <= tmp2;
	tmp2 <= r;
	state <= checkLoop;
	end
	
	finished: begin
	c <= tmp;
	//active <= 0;
	end
	endcase
	//end
	end
	
endmodule
