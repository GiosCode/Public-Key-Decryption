`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 12/10/2018 02:19:40 PM
// Design Name: 
// Module Name: trueTop
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


module trueTop(input btnC, input [11:0] sw, input btnU, input btnD, input clk, output [11:0] led);
wire [11:0] p,q;
reg [1:0] en;
wire [23:0] e, n, totient, d;
//reg [1:0] state;
reg [1:0] rst;
reg [1:0] finished;
reg [11:0] message;
reg [11:0] out_led;
wire [11:0] message_e;
wire [11:0] message_d;
wire intfin;
wire done;
reg [1:0] stp;

wire fins;
always @(posedge clk) begin
    if(btnU)begin
    en<=1;
    message <= sw [11:0];
    end
    else begin
    en <=0;
    end
end


KeyGen_Top kG1 (.clk(clk), .etemp(e), .n(n), .p(p), .q(q), .d(d),.totient(totient), .en(en), .complete(fins)); 
modExp     e1 (.clk(clk),.msgIn(message), .key(e), .n(n),.msgOut(message_e), .start(fins),.fins(intfin));
modExp     d1 (.clk(clk),.msgIn(message_e),.key(d),.n(n),.msgOut(message_d),.start(intfin),.fins(done));


always @(posedge clk) begin
  if (btnC)begin
    out_led <= message_e;
  end
  else if (btnD)begin
    out_led <=message_d;
  end
end

assign led[11:0] = message_d;
endmodule