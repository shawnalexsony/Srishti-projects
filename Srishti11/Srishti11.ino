/*LCD display with live data sent through serial communication*/ 

#include <LiquidCrystal.h>

LiquidCrystal lcd(8,9,10,11,12,13);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   if(Serial.available())
   {  
      lcd.clear();
      delay(100);
    while(Serial.available())
    {
      char x=Serial.read();
       lcd.print(x);
    }
   }
  }
