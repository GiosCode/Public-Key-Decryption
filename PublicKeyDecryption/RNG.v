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
module RNG(
			input clk, 
			input en, 
			input none,
			output reg[11:0]q, p,
			output reg[23:0] e, 
			output reg [23:0] totient, 
			output reg [23:0] n, 
			output reg flag);
reg [11:0] prime [6:0];
reg [11:0] prime1 [6:0];
reg [11:0] prime2 [6:0];
                
initial begin
                $readmemh ("prime.mem", prime);
                $readmemh ("prime.mem",prime1);
                $readmemh("prime.mem", prime2);
            end        
            
//reg [3:0]data = 4'b1101;//Initial seed
reg [3:0] data_p, data_q, data_e;
reg [11:0] q_temp;


reg [11:0] p_temp;
reg [23:0] e_temp;
always @(posedge clk) begin
	//data <= {data[3:0], data[0]^data[3]};
	data_p <= 4'b0100;
	data_q <= 4'b0101;
	data_e <= 4'b0011;
	end

always@(posedge clk) begin
    if(en==1)begin
	q_temp <= prime [data_q];
	end
end

always@(posedge clk) begin
    if(en==1)begin
        p_temp <= prime1[data_p];
    end
end

always@(posedge clk) begin
    if(en==1)begin
        e_temp <= prime2[data_e];
    end
end

always @(posedge clk) begin
         q <= q_temp;
         p <= p_temp;
         e <= e_temp;
         totient <= (p-1'b1)*(q-1'b1);
         n <= (p*q);
         flag <= 1;
end
endmodule