`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:54:00 11/28/2018 
// Design Name: 
// Module Name:    Decryptor 
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
module Decryptor(
						input clk,
						input [KEYSIZE-1:0]privKey,
						input [MSGSIZE-1:0]cipher,
						input [MODSIZE-1:0]modulos,
						output reg [MSGSIZE-1:0]msg
    );
	// msg = cipher^privKey % modulos





endmodule
