#include <Arduino.h>

// ====================================================== //
// =================== PIN DEFINITIONS ================== //
// ====================================================== //
//Button 1 and 2 are the two buttons that are on our board below the display 
//each corelating to one hafl of the dispay with button 1 on the left and button 2 on the right
#define BUTTON1 22
#define BUTTON2 23
//Pins here are defined as part of the adafruit RA8875 driver board
#define RA8875_INT 3
#define RA8875_CS 10
#define RA8875_RESET 9
//This pin is used to send singles to the protobit and control the littlebit
#define PROTO_BIT 25
//Pin 13 is onboard LED
#define ON_BOARD_LED 13
void setup() {
  pinMode(BUTTON1, INPUT_PULLUP);
  pinMode(BUTTON2, INPUT_PULLUP);
  pinMode(PROTO_BIT, OUTPUT);
  pinMode(ON_BOARD_LED, OUTPUT);
}
//test
//test 2
void loop() {
  if(digitalRead(BUTTON1) == LOW or digitalRead(BUTTON2) == LOW) {
    digitalWrite(PROTO_BIT, HIGH);
    digitalWrite(ON_BOARD_LED, HIGH);
    delay(100);
  }  
  digitalWrite(PROTO_BIT, LOW);
  digitalWrite(ON_BOARD_LED, LOW);
}
