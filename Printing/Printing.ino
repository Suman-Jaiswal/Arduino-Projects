int j=1;
int waitT=750;
String myString="j = ";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(myString + j);
j++;
delay(waitT);
}
