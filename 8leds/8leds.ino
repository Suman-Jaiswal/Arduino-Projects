int latchPin = 11;
int clockPin = 9;
int dataPin = 12;

byte LEDs = 0x03;

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