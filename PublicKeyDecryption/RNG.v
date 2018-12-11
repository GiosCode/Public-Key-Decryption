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
module RNG(input clk,
			output wire[11:0]q, p,input wire[23:0] e, output wire [23:0] totient, output wire [23:0] n);
reg [11:0] prime [127:0];
initial begin
                $readmemh ("prime.mem", prime);
            end        
            
reg [6:0]data = 7'b1101001;//Initial seed
reg [11:0] q_temp;
reg [11:0] p_temp;
reg [23:0] e_temp;
wire [11:0] n;
always @(posedge clk) begin
	data <= {data[6:0], data[0]^data[6]};
	q_temp <= prime [data-15];
	p_temp <= prime [data%5];
	e_temp <= prime [data]* prime[data];
end
assign q = q_temp;
assign p = p_temp;
assign e = e_temp;
assign totient = (p-1)*(q-1);
assign n = (p*q);

endmodule