int buzzPin = 8;
int N;
void setup() {
   pinMode(buzzPin, OUTPUT);
   Serial.begin(9600);
}

void loop() {
  while(Serial.available()==0){}
  N= Serial.parseInt();
  if (N>10){
    digitalWrite(buzzPin, HIGH);
    delay(2000);
    digitalWrite(buzzPin, LOW);
  }
}