#define enA 7
#define in1 6
#define in2 5
float extra = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  int i = analogRead(A0);
  Serial.println(i);
  if (i >= 600) {
    extra = (i - (i % 100)) / 100 - 5;
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(enA, 51 * extra);
  }
  delay(100);
  if (i <= 500) {
    extra = 5 - (i - i % 100) / 100;
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    analogWrite(enA, 51 * extra);
  }
  delay(100);
  if ((i - i % 100) / 100 == 5) {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, HIGH);
  };
}
