int R = 13;
int G = 12;
int B = 11;
void setup() {
 pinMode(R, OUTPUT);
 pinMode(G, OUTPUT);
 pinMode(B, OUTPUT);
}

void loop() {
  digitalWrite(R, HIGH);
  digitalWrite(G, HIGH);
}