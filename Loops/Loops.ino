int yellowPin = 6;
int redPin = 9;
int yellowTime = 500;
int redTime = 500;
int yellowBlink = 3;
int redBlink = 5;
void setup()
{
  pinMode(yellowPin, OUTPUT);
  pinMode(redPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  for (int i = 0; i < yellowBlink; i++)
  {
    digitalWrite(yellowPin, HIGH);
    delay(yellowTime);
    digitalWrite(yellowPin, LOW);
    delay(yellowTime);
  }

  for (int i = 0; i < redBlink; i++)
  {
    digitalWrite(redPin, HIGH);
    delay(redTime);
    digitalWrite(redPin, LOW);
    delay(redTime);
  }
}