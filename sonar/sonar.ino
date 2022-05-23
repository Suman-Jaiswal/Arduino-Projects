const int trigPin = 9; 
const int echoPin = 10;
float distance, duration;
void setup() {
   pinMode(trigPin, OUTPUT); 
   pinMode(echoPin, INPUT); 
   Serial.begin(9600); 
}

void loop() {
   digitalWrite(trigPin, LOW); 
   delayMicroseconds(2); 
   digitalWrite(trigPin, HIGH); 
   delayMicroseconds(10); 
   digitalWrite(trigPin, LOW); 
   
   duration = pulseIn(echoPin, HIGH); 
   distance = (duration*.0343)/2; 

 
  

   Serial.print(0); 
   Serial.print(",");
   Serial.print(distance); 
   Serial.print(",");
   Serial.println(100); 
   delay(100);  
}
