String bulb;
String msg = "choose one color to light from yellow and red:";
int redPin = 12;
int yellowPin = 11;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(msg);
  while (Serial.available()==0)
  {

  }
  bulb = Serial.readString();

  if(bulb=="red"){
    digitalWrite(redPin, HIGH);
  }
  if(bulb=="yellow"){
    digitalWrite(yellowPin, HIGH);
  }

  
}