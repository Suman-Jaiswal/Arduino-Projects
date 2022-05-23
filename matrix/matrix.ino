

int ROW[8] = {11,2,3,4,5,6,7,8};

int COL[8] = {A1,A2,A3,A4,A5,A0,9,10};

void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
 
//  for(int i=0; i<8; i++){
//   for(int j=0; j<8; j++){
//       digitalWrite(ROW[i] , LOW);
//       digitalWrite(COL[j] , HIGH);
//       Serial.print(ROW[i]);
//       Serial.print(" , ");
//       Serial.println(COL[j]);
//       delay(500);
//    }
//    }
  digitalWrite(ROW[7] , HIGH);
  digitalWrite(COL[7] , HIGH);

}
