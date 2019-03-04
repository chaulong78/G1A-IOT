#define BUTTON1 8
#define BUTTON2 9
#define BUTTON3 10
#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);
int a = 0;
int b = 0;
int solanbam1 = 0;
int solanbam2 = 0;
void setup() {
lcd.begin(16,2);
Serial.begin(9600);
pinMode(BUTTON1,INPUT);
pinMode(BUTTON2,INPUT);
pinMode(BUTTON3,INPUT);
trangthai();
}
void loop(){
}
void trangthai() {
  lcd.setCursor(0, 0);
  lcd.print("1.Thuc an");
  lcd.setCursor(0, 1);
  lcd.print("2.Thuc uong 3.Gui");
  if(digitalRead(BUTTON1)==HIGH){
delay(500);
    lcd.clear();
   trangthai1(); 
  }
  if(digitalRead(BUTTON2)==HIGH){
    delay(500);
    lcd.clear();
   trangthai2(); 
  }
   if(digitalRead(BUTTON3)==HIGH){
    delay(500);
    lcd.clear();
   trangthai3(); 
  }
}
void trangthai1(){
 if(digitalRead(BUTTON1)==HIGH){
  solanbam1++;
  a=(solanbam1)%3;
   switch (a){
   case 1:
      lcd.setCursor(0, 0);
      lcd.print("1.Com");
      break;
   case 2:
      lcd.setCursor(0, 0);
      lcd.print("2.Pho");
      break;
   case 0:
      lcd.setCursor(0, 0);
      lcd.print("");
      break;
   }
   if(digitalRead(BUTTON3)==HIGH){
    trangthai();
   }
 }}
 void trangthai2(){
  if(digitalRead(BUTTON2)==HIGH){
  solanbam2++;
  b=(solanbam1)%3;
   switch (b){
   case 1:
      lcd.setCursor(0, 0);
      lcd.print("1.Pepsi");
      break;
   case 2:
      lcd.setCursor(0, 0);
      lcd.print("2.Cafe");
      break;
   case 0:
      lcd.setCursor(0, 0);
      lcd.print("");
      break;
   }
   if(digitalRead(BUTTON3)==HIGH){
    trangthai();
   }
 }}
 void trangthai3(){
  if (a ==1 && b==1){
  lcd.setCursor(0, 0);
  lcd.print("1.Com");
  lcd.setCursor(0, 1);
  lcd.print("1.Pepsi");
  }
   if (a ==1 && b==2){
  lcd.setCursor(0, 0);
  lcd.print("1.Com");
  lcd.setCursor(0, 1);
  lcd.print("2.Cafe");
  }
    if (a ==1 && b==0){
  lcd.setCursor(0, 0);
  lcd.print("1.Com");
  lcd.setCursor(0, 1);
  lcd.print("");
  }
    if (a ==2 && b==1){
  lcd.setCursor(0, 0);
  lcd.print("2.Pho");
  lcd.setCursor(0, 1);
  lcd.print("1.Pepsi");
  }
    if (a ==2 && b==2){
  lcd.setCursor(0, 0);
  lcd.print("2.Pho");
  lcd.setCursor(0, 1);
  lcd.print("2.Cafe");
  }
      if (a ==2 && b==0){
  lcd.setCursor(0, 0);
  lcd.print("2.Pho");
  lcd.setCursor(0, 1);
  lcd.print("");
  }
  if (a ==3 && b==1){
  lcd.setCursor(0, 0);
  lcd.print("");
  lcd.setCursor(0, 1);
  lcd.print("1.Pepsi");
  }
    if (a ==3 && b==2){
  lcd.setCursor(0, 0);
  lcd.print("");
  lcd.setCursor(0, 1);
  lcd.print("2.Cafe");
  }
    if (a ==3 && b==1){
  lcd.setCursor(0, 0);
  lcd.print("");
  lcd.setCursor(0, 1);
  lcd.print("1.Pepsi");
  }
  if (digitalRead(BUTTON3)==HIGH){
    trangthai();
  }
 }
 
 
