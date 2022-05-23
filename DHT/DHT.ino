#include <DHT.h>
#define Type DHT11
int sensePin = 2;
int setTime=500;
DHT HT(sensePin, Type);
float H;
float TC;
float TF;
void setup() {
  Serial.begin(9600);
  HT.begin();
  delay(setTime);
}

void loop() {
 H = HT.readHumidity();
 TC = HT.readTemperature();
 TF = HT.readTemperature(true);
 Serial.print("Humidity: ");
 Serial.print(H);
 Serial.print(", Temperature: ");
 Serial.print(TC);
 Serial.print("C");
 Serial.print(" / ");
 Serial.print(TF);
 Serial.println("F");
 delay(1000);
}