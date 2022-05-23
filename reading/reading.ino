int N;
String msg="How many blinks do you want: ";
int redPin = 12;
int bt = 500;

void setup() {
  Serial.begin(9600);
  pinMode(12, OUTPUT);
}

void loop() {
  Serial.println(msg);
  while(Serial.available()==0){

  }
  N = Serial.parseInt();
 
  for (int i = 0; i < N; i++)
  {
    digitalWrite(redPin, HIGH);
    delay(bt);
    digitalWrite(redPin, LOW);
    delay(bt);
  }
  
}