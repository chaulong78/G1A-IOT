#include <IRremote.h> // thư viện hỗ trợ IR remote
IRrecv irrec(4);
decode_results results;
void setup()
{
  Serial.begin(9600);
  irrec.enableIRIn();
}
void loop()
{
  if(irrec.decode(&results)){
    Serial.println(results.value, HEX);
    irrec.resume();
  }
}
