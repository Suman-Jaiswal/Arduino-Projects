# 1 "c:\\Users\\Administrator\\Desktop\\Arduino Projects\\8leds\\8leds.ino"
int latchPin = 11;
int clockPin = 9;
int dataPin = 12;

byte LEDs = 0x03;

void setup() {
  pinMode(latchPin, 0x1);
  pinMode(clockPin, 0x1);
  pinMode(dataPin, 0x1);
}

void loop() {


  digitalWrite(latchPin, 0x0);
  shiftOut(dataPin, clockPin, 0, LEDs);
  digitalWrite(latchPin, 0x1);
  delay(500);


  LEDs = 255-LEDs;




}
