int readPin = A3;
int redPin = 9;
float V2 = 0;
int D = 500;
void setup() {
  // put your setup code here, to run once:
pinMode(readPin,INPUT);
pinMode(redPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
V2 = (5./1023.)*analogRead(readPin);
Serial.println(V2);
if(V2=05){
  digitalWrite(redPin,HIGH);
}
else{
  digitalWrite(redPin,LOW);
}
delay(D);

}
