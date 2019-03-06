#include <IRremote.h>
IRsend irsend;
void setup()
{
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(2) == LOW){
    irsend.sendSony(2, 32);
  }
  delay(200);
}
