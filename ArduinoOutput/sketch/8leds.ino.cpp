#include <Arduino.h>
#line 1 "c:\\Users\\Administrator\\Desktop\\Arduino Projects\\8leds\\8leds.ino"
int latchPin = 11;
int clockPin = 9;
int dataPin = 12;

byte LEDs = 0x03;

#line 7 "c:\\Users\\Administrator\\Desktop\\Arduino Projects\\8leds\\8leds.ino"
void setup();
#line 13 "c:\\Users\\Administrator\\Desktop\\Arduino Projects\\8leds\\8leds.ino"
void loop();
#line 7 "c:\\Users\\Administrator\\Desktop\\Arduino Projects\\8leds\\8leds.ino"
void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
}

void loop() {
 
    
  digitalWrite(latchPin, LOW);
  shiftOut(dataPin, clockPin, LSBFIRST, LEDs);
  digitalWrite(latchPin, HIGH);
  delay(500);
  

  LEDs = 255-LEDs;
  

  
 
}
