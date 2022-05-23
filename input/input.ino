int inPin = 3;

void setup() {
  Serial.begin(9600);
  pinMode(inPin, INPUT);
}

void loop() {
  Serial.println(analogRead(inPin));
  delay(1000);
}