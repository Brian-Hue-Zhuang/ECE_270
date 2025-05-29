`default_nettype none

typedef enum logic [3:0] {
  LS0=0, LS1=1, LS2=2, LS3=3, LS4=4, LS5=5, LS6=6, LS7=7,
  INIT=8, OPEN=9, ALARM=10
} state_t;

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
  logic clock;
  clock_psc psc(.clk(hz100), .rst(reset), .lim(8'd49), .hzX(clock));
  logic [4:0] keyout;
  logic strobe;
  keysync sk1(.clk(hz100), .rst(reset), .keyin(pb[19:0]), .keyout(keyout), .keyclk(strobe));
  // assign right[0] = strobe; // only for testing within prelab, comment out when starting the lab
  // assign right[5:1] = keycode; // only for testing within prelab, comment out when starting the lab
  logic [7:0] seq;
  sequence_sr in(.clk(strobe), .rst(reset), .en((~|keyout[4:1]) && state == 8), .button(keyout[0]), .seq(seq));
  logic [3:0] state;
  fsm check(.clk(strobe), .rst(reset), .keyout(keyout), .seq(seq), .state(state));
  assign right = seq;
  display info(.hzX(clock), .state(state), .ss({ss7, ss6, ss5, ss4, ss3, ss2, ss1, ss0}), .red(red), .green(green), .blue(blue));
endmodule

module display(
  input logic hzX,
  input logic [3:0] state,
  output logic [63:0] ss,
  output logic red,
  output logic green,
  output logic blue
);
  localparam secure = 64'b01101101_01111001_00111001_00111110_01010000_01111001;
  localparam open = 64'b00111111_01110011_01111001_01010100;
  localparam call911 = 64'b00111001_01110111_00111000_00111000_00000000_01100111_00000110_00000110;

  always_comb begin
     case(state)
      INIT: begin
        ss = 64'd0;
        red = 0;
        green = 0;
        blue = 0;
      end 
      LS0, LS1, LS2, LS3, LS4, LS5, LS6, LS7: begin
        ss = 64'b01101101_01111001_00111001_00111110_01010000_01111001 | 64'b1 << ((8 - state) * 8 - 1);
        red = 0;
        green = 0;
        blue = 1;
      end
      OPEN: begin
        ss = open;
        red = 0;
        green = 1;
        blue = 0;
      end
      ALARM: begin
        ss = call911;
        red = hzX;
        green = 0;
        blue = 0;
      end
      default: begin
        ss = 64'b0;
        red = 0;
        green = 0;
        blue = 0;
      end
    endcase
  end
endmodule

module fsm (
  input logic clk,
  input logic rst,
  input logic [4:0] keyout,
  input logic [7:0] seq,
  output logic [3:0] state
);
  state_t lockstate, n_lockstate;
  always_ff @(posedge clk, posedge rst) begin
    if (rst) begin
      lockstate <= INIT;
    end
    else begin
      lockstate <= n_lockstate;
    end
  end
  logic M, R;
  assign state = lockstate;
  assign M = (keyout[0] == seq[~lockstate[2:0]]) ? 1:0;
  assign R = (keyout == 5'b10000) ? 1:0;
  always_comb begin
    casez({lockstate, M, R})
      //Case M
      {LS0, 1'b1, 1'b0}: n_lockstate = LS1; 
      {LS1, 1'b1, 1'b0}: n_lockstate = LS2;
      {LS2, 1'b1, 1'b0}: n_lockstate = LS3;
      {LS3, 1'b1, 1'b0}: n_lockstate = LS4;
      {LS4, 1'b1, 1'b0}: n_lockstate = LS5;
      {LS5, 1'b1, 1'b0}: n_lockstate = LS6;
      {LS6, 1'b1, 1'b0}: n_lockstate = LS7;
      {LS7, 1'b1, 1'b0}: n_lockstate = OPEN;

      //Case reclock
      {INIT, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS1, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS2, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS3, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS4, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS5, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS6, 1'b?, 1'b1}: n_lockstate = LS0;
      {LS7, 1'b?, 1'b1}: n_lockstate = LS0;
      {OPEN, 1'b?, 1'b1}: n_lockstate = LS0;

      //Alarm
      {LS0, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS1, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS2, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS3, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS4, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS5, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS6, 1'b0, 1'b0}: n_lockstate = ALARM;
      {LS7, 1'b0, 1'b0}: n_lockstate = ALARM;
      
      default: n_lockstate = lockstate;
    endcase
  end

endmodule

module sequence_sr (
  input logic clk,
  input logic rst,
  input logic en,
  input logic button,
  output logic [7:0] seq
);
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      seq <= 8'b0;
    end
    else if (en) begin
      seq <= {seq[6:0], button};
    end else seq <= seq;
  end

endmodule

module keysync (
  input logic clk,
  input logic rst,
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
  
  logic press_state;
  
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      press_state <= 0;
      keyclk <= 0;
    end
    else begin
      press_state <= |keyin;
      keyclk <= press_state;
    end
  end
  
endmodule

module clock_psc(
  input logic clk,
  input logic rst,
  input logic [7:0] lim,
  output logic hzX
);
  reg [7:0] counter;
  always_ff @(posedge clk or posedge rst) begin
    if (rst) begin
      counter <= 8'd0; 
      hzX <= 1'b0;  
    end 
    else if (lim != 8'd0) begin
      if (counter == lim) begin
        counter <= 8'd0; 
        hzX <= ~hzX; 
      end 
      else begin
        counter <= counter + 1; 
      end
    end else begin
      hzX <= 1'b0;
    end
  end
endmodule