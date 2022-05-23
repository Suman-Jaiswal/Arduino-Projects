int potVal;
int delayTime = 100;
int potPin = A0;
int redPin = 7;

void setup()
{
  pinMode(potPin, INPUT);
  pinMode(redPin, OUTPUT);
}

void loop()
{
  potVal = analogRead(potPin);
  delay(delayTime);

  while(potVal>1000){
    digitalWrite(redPin, HIGH);
    potVal = analogRead(potPin);
    delay(delayTime);
  }
  digitalWrite(redPin,LOW);
}
