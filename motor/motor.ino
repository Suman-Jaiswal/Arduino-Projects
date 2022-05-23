int speedPin = 5;
int dir1 = 4;
int dir2 = 3;
int mSpeed = 150;
int yPin = A1;
int yVal;
int dt = 100;
void setup() {
  pinMode(speedPin, OUTPUT);
  pinMode(dir1, OUTPUT);
  pinMode(dir2, OUTPUT); 
  Serial.begin(9600);
  pinMode(yPin, INPUT);

}

void loop() {
  yVal = analogRead(yPin);
  if(yVal<512){
    digitalWrite(dir1, LOW);
    digitalWrite(dir2, HIGH);
    mSpeed = -255./512. *yVal +255.;
    analogWrite(speedPin, mSpeed);
    }

 if(yVal>=512){
    digitalWrite(dir1, HIGH);
    digitalWrite(dir2, LOW);
    mSpeed = 255./512. *yVal -255.;
    analogWrite(speedPin, mSpeed);
    }
  
 
 
 
}
