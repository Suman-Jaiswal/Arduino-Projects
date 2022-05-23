#include <LiquidCrystal.h>
int rs = 7, en = 8, d4 = 9, d5 = 10, d6 = 11, d7 = 12;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
const int trigPin = 5; 
const int echoPin = 4;
float distance, duration;

void setup() {
   pinMode(trigPin, OUTPUT); 
   pinMode(echoPin, INPUT); 
   Serial.begin(9600); 
   lcd.begin(16,2);
}

void loop() {
   digitalWrite(trigPin, LOW); 
   delayMicroseconds(2); 
   digitalWrite(trigPin, HIGH); 
   delayMicroseconds(10); 
   digitalWrite(trigPin, LOW); 
   duration = pulseIn(echoPin, HIGH); 
   distance = (duration*.0343)/2; 
 
   lcd.setCursor(0,0);
   lcd.print("Target Distance: "); 
   lcd.setCursor(0,1);
   lcd.print(distance); 
   lcd.print(" cm");
   delay(500);  
   lcd.clear();
 
}
