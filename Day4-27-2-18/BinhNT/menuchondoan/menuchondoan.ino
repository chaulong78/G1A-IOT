#include <LiquidCrystal.h>
  LiquidCrystal lcd(7,6,5,4,3,2);
#define chonfood 8
#define chondrink 9
#define enter 10
int sttfood=0;
int sttdrink=0;
void setup() {
  Serial.begin(9600);
  pinMode(chonfood,INPUT);
  pinMode(chondrink,INPUT);
  pinMode(enter,INPUT);
  lcd.begin(16,2);
}
void loop() {
   //lcd.clear();//delay(2000);
   lcd.setCursor(0,0);
   lcd.print("Welcome");
   lcd.setCursor(0,1);
   lcd.print("Menu");
   //if (digitalRead(chonfood)== ) { Serial.println(1);};
   if (digitalRead(chonfood)==LOW || digitalRead(chondrink)==LOW || digitalRead(enter)== LOW) { mainmenu();};  
}
void mainmenu(){
  delay(200);
  lcd.clear();
  while (sttfood==0 || sttdrink==0){
    //lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Menu");
    lcd.setCursor(0,1);
    lcd.print("1.Food 2.Drink");
    if (digitalRead(chonfood)==LOW)  { delay(200);
          selectfood();
          };
    if (digitalRead(chondrink)==LOW) {delay(200);selectdrink();};
  };
  Vietketqua();
}
void selectfood(){
  sttfood=1;
  while (digitalRead(enter)==HIGH) {
    switch (sttfood) {
      case 1:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("1.Ga Ran KFC");
        lcd.setCursor(0,1);
        lcd.print("30.000    Chon");
        break;
      case 2:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("2.My y sot vang");
        lcd.setCursor(0,1);
        lcd.print("40.000    Chon");
        break;
      case 3:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("3.Xucxich"); 
        lcd.setCursor(0,1);
        lcd.print("60.000    Chon");
        break;
    };
    if (digitalRead(chonfood)== LOW) { sttfood= ((sttfood)%3)+1; delay(200);};
    delay(500);
}
}
void selectdrink(){
  sttdrink=1;
  while (digitalRead(enter)==HIGH) {
    switch (sttdrink) {
      case 1:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("1.CocaCola");
        lcd.setCursor(0,1);
        lcd.print("15.000    Chon");
        break;
      case 2:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("2.MilkTea");
        lcd.setCursor(0,1);
        lcd.print("30.000    Chon");
        break;
      case 3:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("3.Coffee"); 
        lcd.setCursor(0,1);
        lcd.print("20.000    Chon");
        break;
    };
    if (digitalRead(chondrink)== LOW) { sttdrink= (sttdrink)%3+1;delay(200);};
    delay(500);   
    }
}
void Vietketqua(){
  lcd.clear();
  lcd.setCursor(0,0);
  switch (sttfood) {
      case 1:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Food:Ga Ran KFC");
        break;
      case 2:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Food:My y sot vang");
        break;
      case 3:
        lcd.clear();
        lcd.setCursor(0,0);
        lcd.print("Food:Xuc xich"); 
        break;
    };
    switch (sttdrink) {
      case 1:
        //lcd.clear();
        lcd.setCursor(0,1);
        lcd.print("Drink:CocaCola");
        break;
      case 2:
        //lcd.clear();
        lcd.setCursor(0,1);
        lcd.print("Drink:MilkTea");
        break;
      case 3:
        //lcd.clear();
        lcd.setCursor(0,1);
        lcd.print("Drink:Coffee"); 
        break;
       };
       delay(5000);
       lcd.clear();
}
  








    
  
