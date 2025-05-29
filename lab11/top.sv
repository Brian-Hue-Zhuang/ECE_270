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
  lunarlander fin_ece_270(.hz100(hz100), .reset(reset), .in(pb[19:0]), .ss7(ss7), .ss6(ss6), .ss5(ss5), .ss3(ss3), .ss2(ss2), .ss1(ss1), .ss0(ss0), .red(red), .green(green));
endmodule

// Add more modules below...
module lunarlander #(
  parameter FUEL=16'h800,
  parameter ALTITUDE=16'h4500,
  parameter VELOCITY=16'h0,
  parameter THRUST=16'h5,
  parameter GRAVITY=16'h5
)(
  input logic hz100, reset,
  input logic [19:0] in,
  output logic [7:0] ss7, ss6, ss5, 
  output logic [7:0] ss3, ss2, ss1, ss0,
  output logic red, green
);
  logic strobe, keyclock, en, land, crash, strobe_key;
  logic [4:0] keyout; 
  logic [3:0] disp_ctrl; 
  logic [15:0] alt, vel, fuel, thrust, alt_n, vel_n, fuel_n, thrust_n;
  assign disp_ctrl = {keyout == 5'd19, keyout == 5'd18, keyout == 5'd17, keyout == 5'd16};
  always_ff @(posedge keyclock, posedge reset) begin
    if (reset) begin
      thrust_n <= THRUST;
    end else if (~keyout[4]) begin
      thrust_n <= {12'b0, keyout[3:0]};
    end else begin
      thrust_n <= thrust_n;
    end
  end
  clock_psc clk(.clk(hz100), .rst(reset), .lim(8'd24), .hzX(strobe));
  keysync inp(.clk(hz100), .rst(reset), .keyin(in[19:0]), .keyout(keyout), .keyclk(keyclock));
  ll_alu calc(.alt(alt), .vel(vel), .fuel(fuel), .thrust(thrust), .alt_n(alt_n), .vel_n(vel_n), .fuel_n(fuel_n));
  ll_memory mem(.clk(strobe), .rst(reset), .wen(en), .alt_n(alt_n), .vel_n(vel_n), .fuel_n(fuel_n), .thrust_n(thrust_n), .alt(alt), .vel(vel), .fuel(fuel), .thrust(thrust));
  ll_control cont(.clk(strobe), .rst(reset), .alt(alt), .vel(vel), .land(land), .crash(crash), .wen(en));
  ll_display display(.clk(keyclock), .rst(reset), .land(land), .crash(crash), .disp_ctrl(disp_ctrl), .alt(alt), .vel(vel), .fuel(fuel), .thrust(thrust), .ss7(ss7), .ss6(ss6), .ss5(ss5), .ss3(ss3), .ss2(ss2), .ss1(ss1), .ss0(ss0), .red(red), .green(green));
endmodule


module ll_display #(
  parameter ALT = 24'b01110111_00111000_01111000,
  parameter VEL = 24'b00111110_01111001_00111000,
  parameter GAS = 24'b01101111_01110111_01101101,
  parameter THR = 24'b01111000_01110110_01010000
)(
  input logic clk, rst, land, crash,
  input logic [3:0] disp_ctrl,
  input logic [15:0] alt, vel, fuel, thrust,
  output logic [7:0] ss7, ss6, ss5, ss3, ss2, ss1, ss0,
  output logic red, green
);
  logic [31:0] out; 
  logic [55:0] info;
  logic [15:0] num_start, num_in, num_neg;
  logic [3:0]  n_disp;
  bcdaddsub4 negnum(.a(16'h0), .b(num_start), .op(1'b1), .s(num_neg));
  assign num_in = (vel[15] == 1 && n_disp == 4'b0100) ? num_neg : num_start;
  assign {out[31],out[23],out[15],out[7]} = 4'b0;
  ssdec num0(.in(num_in[3:0]), .enable(1'b1), .out(out[6:0]));
  ssdec num1(.in(num_in[7:4]), .enable(|num_in[15:4]), .out(out[14:8]));
  ssdec num2(.in(num_in[11:8]), .enable(|num_in[15:8]), .out(out[22:16]));
  ssdec num3(.in(num_in[15:12]), .enable(|num_in[15:12]), .out(out[30:24]));
  assign {ss7, ss6, ss5, ss3, ss2, ss1, ss0} = info;
  assign red = crash;
  assign green = land;

  always_ff @(posedge clk, posedge rst) begin
    if (rst) begin
      n_disp <= 4'b1000;
    end else if (disp_ctrl != 0)
      n_disp <= disp_ctrl;
  end

  always_comb begin
    if (n_disp == 4'b0001) begin //THRUST
      num_start = thrust;
      info = {THR, out};
    end else if (n_disp == 4'b0010) begin //FUEL
      num_start = fuel;
      info = {GAS, out};
    end else if (n_disp == 4'b0100) begin //VELOCITY
      num_start = vel;
      if (vel[15] == 1'b1) begin
        info = {VEL, 8'b01000000, out[23:0]};
      end else begin
        info = {VEL, out};
      end
    end else if (n_disp == 4'b1000) begin //ALTITUDE
      num_start = alt;
      info = {ALT, out};
    end else begin
      num_start = alt;
      info = {ALT, out};
    end
  end
endmodule

module ll_memory #(
  parameter FUEL=16'h800,
  parameter ALTITUDE=16'h4500,
  parameter VELOCITY=16'h0,
  parameter THRUST=16'h5
)(
  input logic clk, rst, wen,
  input logic [15:0] alt_n, vel_n, fuel_n, thrust_n,
  output logic [15:0] alt, vel, fuel, thrust
);
  always_ff @(posedge clk, posedge rst) begin
    if (rst) begin
      alt <= ALTITUDE;
      vel <= VELOCITY;
      fuel <=  FUEL;
      thrust <= THRUST;
    end else if (wen) begin
      alt <= alt_n;
      vel <= vel_n;
      fuel <= fuel_n;
      thrust <= thrust_n;
    end
  end
endmodule

module ll_alu #(
  parameter GRAVITY=16'h5
)(
  input logic [15:0] alt, vel, fuel, thrust,
  output logic [15:0] alt_n, vel_n, fuel_n
);
  logic [15:0] vel_step, temp_alt, temp_vel, temp_fuel;
  bcdaddsub4 alt_c(.a(alt), .b(vel), .op(0), .s(temp_alt));
  bcdaddsub4 vel_c_step(.a(vel), .b(GRAVITY), .op(1), .s(vel_step));
  bcdaddsub4 vel_c_a(.a(vel_step), .b(thrust), .op(0), .s(temp_vel));
  bcdaddsub4 fuel_c(.a(fuel), .b(thrust), .op(1), .s(temp_fuel));
  assign vel_n = (temp_alt == 0 || temp_alt[15]) ? 16'd0 : ((fuel == 0) ? vel_step: temp_vel);
  assign alt_n = (temp_alt == 0 || temp_alt[15]) ? 16'd0 : temp_alt;
  assign fuel_n = (temp_fuel == 0 || temp_fuel[15]) ? 16'd0 : temp_fuel;
endmodule

module ll_control (
  input logic clk, rst,
  input logic [15:0] alt, vel,
  output logic land, crash, wen
);
  logic [15:0] sum;
  logic status;
  logic n_crash, n_land, n_wen, finished;
  bcdaddsub4 add(.a(alt), .b(vel), .op(0), .s(sum));
  assign finished = (sum == 0 || sum[15]);
  assign n_wen = ~finished;
  assign n_crash = vel < 'h9970 && vel[15];
  assign n_land = ~n_crash;
  always_ff @(posedge clk, posedge rst) begin
    if (rst) begin
      land <= 0;
      crash <= 0;
    end else if (finished && ~crash && ~land) begin
      land <= n_land;
      crash <= n_crash;
    end else begin
      land <= land;
      crash <= crash;
    end
  end
  always_ff @(posedge clk, posedge rst) begin
    if (rst) begin
      wen <= 0;
    end else begin
      wen <= n_wen;
    end
  end
endmodule

module fa (
  input logic a, b, ci,
  output logic s, co
);
  assign s = a ^ b ^ ci; 
  assign co = (a & b) | (b & ci) | (a & ci);
endmodule

module fa4 (
  input logic [3:0] a, b, 
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
  logic [3:0] sum1; 
  logic carry;
  logic correction;

  fa4 adder1(.a(a), .b(b), .ci(ci), .s(sum1), .co(carry));
  assign correction = carry || (sum1[2] & sum1[3]) || (sum1[1] & sum1[3]);
  logic [3:0] bcd;
  logic [3:0] sum2;
  logic placeholder;
  fa4 corrected(.a(sum1), .b({1'b0, correction, correction, 1'b0}), .ci(1'b0), .s(sum2), .co(placeholder));
  assign s = correction ? sum2:sum1;
  assign co = correction;
endmodule


module bcdadd4 (
  input logic [15:0] a, b, 
  input logic ci,
  output logic [15:0] s,
  output logic co
);
  logic c1, c2, c3;
  bcdadd1 bcd0 (.a(a[3:0]), .b(b[3:0]), .ci(ci), .co(c1), .s(s[3:0]));
  bcdadd1 bcd1 (.a(a[7:4]), .b(b[7:4]), .ci(c1), .co(c2), .s(s[7:4]));
  bcdadd1 bcd2 (.a(a[11:8]), .b(b[11:8]), .ci(c2), .co(c3), .s(s[11:8]));
  bcdadd1 bcd3 (.a(a[15:12]), .b(b[15:12]), .ci(c3), .co(co), .s(s[15:12]));
endmodule

module bcd9comp1 (
  input logic [3:0] in,   
  output logic [3:0] out 
);
  always_comb begin
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
      default: out = 4'd0; 
    endcase
  end
endmodule 

module bcdaddsub4(
  input [15:0] a, b,
  input op,
  output [15:0] s
);
  logic [15:0] b_comp;
  logic [15:0] b_final;
  logic unused_co;
  bcd9comp1 comp0(.in(b[3:0]), .out(b_comp[3:0]));
  bcd9comp1 comp1(.in(b[7:4]), .out(b_comp[7:4]));
  bcd9comp1 comp2(.in(b[11:8]), .out(b_comp[11:8]));
  bcd9comp1 comp3(.in(b[15:12]), .out(b_comp[15:12]));
  assign b_final = op ? b_comp : b;
  bcdadd4 adder(.a(a), .b(b_final), .ci(op), .s(s), .co(unused_co));
endmodule

module keysync (
  input logic clk, rst,
  input logic [19:0] keyin,
  output logic [4:0] keyout,
  output logic keyclk
);
  always_comb begin
    keyout[0] = (keyin[1] | keyin[3] | keyin[5] | keyin[7] | keyin[9] | keyin[11] | keyin[13] | keyin[15] | keyin[17] | keyin[19]); 
    keyout[1] = |(keyin[3:2] | keyin[7:6] | keyin[11:10] | keyin[15:14] | keyin[19:18]);
    keyout[2] = |(keyin[7:4] | keyin[15:12]);
    keyout[3] = |keyin[15:8];
    keyout[4] = |keyin[19:16];
  end
  
  logic [1:0] press_state;
  
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      press_state <= 0;
    end
    else begin
      press_state <= {press_state[0], |keyin};
    end
  end

  assign keyclk = press_state[1];
  
endmodule

module clock_psc(
  input logic clk, rst,
  input logic [7:0] lim,
  output logic hzX
);
  logic [7:0] counter, counter_n;
  logic hzX_n;
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      counter <= 8'd0; 
      hzX <= 1'b0;  
    end 
    else begin
      counter <= counter_n;
      hzX <= hzX_n;
    end
  end

  always_comb begin
    case(counter)
      lim: begin
        counter_n = 0;
        hzX_n = ~hzX;
      end
      default: begin
        counter_n = counter + 1;
        hzX_n = hzX;
      end
    endcase
  end
endmodule

module ssdec(
    input  [3:0] in,
    input  enable, 
    output reg [6:0] out
);
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
        4'h7: out = 7'b0000111; 
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