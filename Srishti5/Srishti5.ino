/*Scrolling text in an LED display*/


#include <LiquidCrystal.h>

LiquidCrystal lcd(8,9,10,11,12,13);/*initialize LCD pins*/

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);/*Initialize the no of active characters in LCD*/
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<16;i++)
  {
  lcd.setCursor(i,0);
  lcd.print("LCD scrolling");
  delay(500);
  
  lcd.setCursor(i,0);
  lcd.print(" ");
  delay(1);
  }
  for(int i=0;i<16;i++)
  {
  lcd.setCursor(i,1);
  lcd.print("LCD scrolling");
  delay(500);
  
  lcd.setCursor(i,1);
  lcd.print(" ");
  delay(1);
  }

}
