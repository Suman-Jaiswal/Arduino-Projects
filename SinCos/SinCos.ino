float sinVal;
float cosVal;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(float j = 0 ; j< 2*3.14159265; j=j+0.05){
    sinVal = sin(j);
    cosVal = cos(j);
    Serial.print(sinVal);
    Serial.print(",");
    Serial.println(cosVal);
    delay(50);
  }
}
