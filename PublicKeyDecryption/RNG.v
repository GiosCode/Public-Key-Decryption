`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:00:11 11/27/2018 
// Design Name: 
// Module Name:    RNG 
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
module RNG(input clk,
			output wire[11:0]rand);
			
reg [11:0]data = 12'b101101001000;
//wire [11:0]
//data = seed;
always @(posedge clk) begin
	data <= {data[11:0], data[0]^data[3]^data[5]^data[11]};
end
assign rand = data;
endmodule
