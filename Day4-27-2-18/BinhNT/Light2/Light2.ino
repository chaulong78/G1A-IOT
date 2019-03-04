#define led1 9
#define led2 10
#define led3 11
int but1=2;
int but2=3;
void setup() {
  pinMode(but1,INPUT);
  pinMode(but2,INPUT);
}

void loop() {
  if (digitalRead(but1)==LOW){
    for (int i=0;i<=255;i++) {
      analogWrite(led1,i);
      analogWrite(led2,i);
      analogWrite(led3,i);
      delay(10);
    }
    for (int i=255;i>=0;i--){
      analogWrite(led1,i);
      analogWrite(led2,i);
      analogWrite(led3,i);
      delay(10); 
     }
  }
  if (digitalRead(but2)==LOW){
    for (int i=0;i<=255;i++) {
      analogWrite(led1,i);
      delay(20);
    }
    for (int i=255;i>=0;i--) {
      analogWrite(led1,i);
      delay(20);
    };
    for (int i=0;i<=255;i++) {
      analogWrite(led2,i);
      delay(20);
    }
    for (int i=255;i>=0;i--) {
      analogWrite(led2,i);
      delay(20);
   };for (int i=0;i<=255;i++) {
      analogWrite(led3,i);
      delay(20);
    }
    for (int i=255;i>=0;i--) {
      analogWrite(led3,i);
      delay(20);
    }
}}
