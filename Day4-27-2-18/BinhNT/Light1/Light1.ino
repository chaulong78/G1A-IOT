#define led 11
void setup() {
}

void loop() {
  for (int i=0;i<=255;i++){
    analogWrite(led,i);
    delay(20);
  }
  delay(2000);
  for (int i=255;i>=0;i--){
    analogWrite(led,i);
    delay(20);
  }
  delay(2000);
}
