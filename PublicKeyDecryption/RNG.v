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
// Outputs 1 random number every clock cycle
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//works
//////////////////////////////////////////////////////////////////////////////////
module RNG #(parameter SEED = 7'b0100011)
				(input clk,
				 output reg [6:0]rand);
			
reg [6:0]data = SEED;//Initial seed
always @(posedge clk) begin
	data <= {data[6:0], data[3]^data[4]^data[5]^data[6]};//Taps are 3, 4, 5, 6 bits: http://courses.cse.tamu.edu/walker/csce680/lfsr_table.pdf
end
	
endmodule
