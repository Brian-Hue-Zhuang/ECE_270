`default_nettype none
// Empty top module

module top (
  // I/O ports
  input  logic hz100, reset,
  input  logic [20:0] pb,
  output logic [7:0] left, right,
         ss7, ss6, ss5, ss4, ss3, ss2, ss1, ss0,
  output logic red, green, blue,

  // UART ports
  output logic [7:0] txdata,
  input  logic [7:0] rxdata,
  output logic txclk, rxclk,
  input  logic txready, rxready
);

  // Your code goes here...
  logic [3:0] wow;
  prienc16to4 ds(.in(pb[15:0]), .out(wow[3:0]), .strobe(blue));
  ssdec sd(.in(wow), .enable(1'b1),.out(ss0[6:0]));
endmodule


// Add more modules down here...
module fa (
  input logic a, b, ci,
  output logic s, co
);
  assign s = a ^ b ^ ci; 
  assign co = (a & b) | (b & ci) | (a & ci);
endmodule

module fa4 (
  input logic [3:0] a,
  input logic [3:0] b, 
  input logic ci,
  output logic [3:0] s,
  output logic co
);
   logic c1, c2, c3;
    fa fa0(.a(a[0]), .b(b[0]), .ci(ci), .s(s[0]), .co(c1));
    fa fa1(.a(a[1]), .b(b[1]), .ci(c1), .s(s[1]), .co(c2));
    fa fa2(.a(a[2]), .b(b[2]), .ci(c2), .s(s[2]), .co(c3));
    fa fa3(.a(a[3]), .b(b[3]), .ci(c3), .s(s[3]), .co(co));
endmodule


module bcdadd1 (
  input logic [3:0] a,
  input logic [3:0] b, 
  input logic ci,
  output logic [3:0] s,
  output logic co
);
  wire [3:0] sum;
  wire carry;

  fa4 adder (.a(a), .b(b), .ci(ci), .s(sum), .co(carry));

  assign s = (sum > 9) ? (sum + 6) : sum;
  assign co = carry | (sum > 9);


endmodule

// Add more modules down here...
module bcdadd4 (
  input logic [15:0] a,
  input logic [15:0] b, 
  input logic ci,
  output logic [15:0] s,
  output logic co
);
 wire co1, co2, co3;

  bcdadd1 bcd0 (.a(a[3:0]), .b(b[3:0]), .ci(ci), .co(co1), .s(s[3:0]));
  bcdadd1 bcd1 (.a(a[7:4]), .b(b[7:4]), .ci(co1), .co(co2), .s(s[7:4]));
  bcdadd1 bcd2 (.a(a[11:8]), .b(b[11:8]), .ci(co2), .co(co3), .s(s[11:8]));
  bcdadd1 bcd3 (.a(a[15:12]), .b(b[15:12]), .ci(co3), .co(co), .s(s[15:12]));
  
endmodule
 
module bcd9comp1 (
    input [3:0] in,   // 4-bit input BCD digit
    output reg [3:0] out  // 4-bit output BCD complement
);

    always @(*) begin
        case (in)
            4'd0: out = 4'd9;
            4'd1: out = 4'd8;
            4'd2: out = 4'd7;
            4'd3: out = 4'd6;
            4'd4: out = 4'd5;
            4'd5: out = 4'd4;
            4'd6: out = 4'd3;
            4'd7: out = 4'd2;
            4'd8: out = 4'd1;
            4'd9: out = 4'd0;
            default: out = 4'd0;  // For values greater than 9, output 0 (could also be any value)
        endcase
    end

endmodule 

module bcdaddsub4(
    input [15:0] a,   // 16-bit input a (4 BCD digits)
    input [15:0] b,   // 16-bit input b (4 BCD digits)
    input op,         // Operation: 0 for addition, 1 for subtraction
    output [15:0] s   // 16-bit sum (result)
);

  wire [3:0] bcd9comp_out0, bcd9comp_out1, bcd9comp_out2, bcd9comp_out3;
  wire co0, co1, co2, co3;   // Carry-out wires for each BCD adder

  // Compute the ten's complement of each BCD digit in b if op = 1 (subtraction)
  bcd9comp1 cmp0 (.in(b[3:0]),   .out(bcd9comp_out0));   // Ten's complement of the first BCD digit of b
  bcd9comp1 cmp1 (.in(b[7:4]),   .out(bcd9comp_out1));   // Ten's complement of the second BCD digit of b
  bcd9comp1 cmp2 (.in(b[11:8]),  .out(bcd9comp_out2));   // Ten's complement of the third BCD digit of b
  bcd9comp1 cmp3 (.in(b[15:12]), .out(bcd9comp_out3));   // Ten's complement of the fourth BCD digit of b

  // If op = 0, we add a and b normally
  // If op = 1, we add a and the ten's complement of b, with carry-in of 1
  wire [3:0] b0 = (op == 1) ? bcd9comp_out0 : b[3:0];
  wire [3:0] b1 = (op == 1) ? bcd9comp_out1 : b[7:4];
  wire [3:0] b2 = (op == 1) ? bcd9comp_out2 : b[11:8];
  wire [3:0] b3 = (op == 1) ? bcd9comp_out3 : b[15:12];
  // If subtraction, we add 1 (carry-in of 1) to the least significant BCD adder
  wire ci0 = (op == 1) ? 1 : 0;

  // Perform BCD addition (with ten's complement for subtraction)
  bcdadd1 bcd0 (.a(a[3:0]), .b(b0), .ci(ci0), .co(co0), .s(s[3:0]));
  bcdadd1 bcd1 (.a(a[7:4]), .b(b1), .ci(co0), .co(co1), .s(s[7:4]));
  bcdadd1 bcd2 (.a(a[11:8]), .b(b2), .ci(co1),  .co(co2), .s(s[11:8]));
  bcdadd1 bcd3 (.a(a[15:12]), .b(b3), .ci(co2), .co(), .s(s[15:12]));
endmodule
module ssdec(
    input  [3:0] in,        // 4-bit input (binary value to display)
    input        enable,     // Enable signal to turn display on/off
    output reg [6:0] out     // 7-bit output to control 7-segment display
);

    // 7-segment display encoding for hexadecimal digits (0-F)
    always_comb begin
        if (enable) begin
            case (in)
                4'h0: out = 7'b0111111; 
                4'h1: out = 7'b0000110;
                4'h2: out = 7'b1011011; 
                4'h3: out = 7'b1001111; 
                4'h4: out = 7'b1100110; 
                4'h5: out = 7'b1101101; 
                4'h6: out = 7'b1111101;  
                4'h7: out = 7'b0100111; 
                4'h8: out = 7'b1111111; 
                4'h9: out = 7'b1100111;  
                4'hA: out = 7'b1110111; 
                4'hB: out = 7'b1111100; 
                4'hC: out = 7'b0111001;  
                4'hD: out = 7'b1011110;  
                4'hE: out = 7'b1111001;  
                4'hF: out = 7'b1110001;  
                default: out = 7'b0000000; 
            endcase
        end else begin
            out = 7'b0000000;  
        end
    end
endmodule


module prienc16to4 (
  input logic [15:0] in,
  output logic [3:0] out,
  output logic strobe
);
  assign out = in[15] == 1 ? 4'b1111 /* Input F is high */ :
               in[14] == 1 ? 4'b1110 /* Input E is high */ :
               in[13] == 1 ? 4'b1101 /* Input D is high */ :
               in[12] == 1 ? 4'b1100 /* Input C is high */ :
               in[11] == 1 ? 4'b1011 /* Input B is high */ :
               in[10] == 1 ? 4'b1010 /* Input A is high */ :
               in[9] == 1 ? 4'b1001 /* Input 9 is high */ :
               in[8] == 1 ? 4'b1000 /* Input 8 is high */ :
               in[7] == 1 ? 4'b0111 /* Input 7 is high */ :
               in[6] == 1 ? 4'b0110 /* Input 6 is high */ :
               in[5] == 1 ? 4'b0101 /* Input 5 is high */ :
               in[4] == 1 ? 4'b0100 /* Input 4 is high */ :
               in[3] == 1 ? 4'b0011 /* Input 3 is high */ :
               in[2] == 1 ? 4'b0010 /* Input 2 is high */ :
               in[1] == 1 ? 4'b0001 /* Input 1 is high */ :
               in[0] == 1 ? 4'b0000 /* Input 0 is high */ :
                           4'b0000; // Nothing pressed.

endmodule