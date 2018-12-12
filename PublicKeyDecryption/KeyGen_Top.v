`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/05/2018 11:28:50 AM
// Design Name: 
// Module Name: KeyGen_Top
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module KeyGen_Top(input clk,input [1:0] en, output [11:0] q, p, output [23:0] etemp, n,totient,d, output complete);
wire rst;
wire [23:0]etempyo;
        RNG rng_0(.clk(clk),.q(q), .p(p),.e(etempyo),.n(n),.totient(totient),.en(en), .flag(rst));
        privatekeyGen pvg_0(.clk(clk),.e(etempyo), .totient(totient), .d(d), .rst(rst),.complete(complete)); 
		  assign etemp = etempyo;
endmodule