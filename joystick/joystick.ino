#include "Servo.h"

int servoPin = 9;
int servoPos;

int xPin = A0;
int yPin = A1;
int sPin = 2;
int xVal;
int yVal;
int sVal;
int dt = 100;
Servo myServo;
void setup() {
  myServo.attach(servoPin);
  Serial.begin(9600);
  pinMode(xPin, INPUT);
  pinMode(yPin, INPUT);
  pinMode(sPin, INPUT);
  pinMode(servoPin, OUTPUT);
  digitalWrite(sPin, HIGH);
}

void loop() {
   
  xVal = analogRead(xPin);
  yVal = analogRead(yPin);
  sVal = digitalRead(sPin);
  
  Serial.print("X value = ");
  Serial.print(xVal);

  Serial.print(" Y value = ");
  Serial.print(yVal);

  Serial.print(" S value = ");
  Serial.println(sVal);


  servoPos = -(175./1023.) * xVal +170 ;

  myServo.write(servoPos);
  delay(dt);
}