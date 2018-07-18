/*Live temp display system using LCD and temp sensor*/

#include <LiquidCrystal.h>

LiquidCrystal lcd(8,9,10,11,12,13);


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);

 pinMode(14,OUTPUT);
 pinMode(16,OUTPUT);
 Serial.begin(9600);
 digitalWrite(14,HIGH);/*Power supply for LM35 TEMP sensor*/
 digitalWrite(16,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  float x=analogRead(A1);
  lcd.setCursor(3,0);
  lcd.print("  Cochin      ");
  lcd.setCursor(3,1);
  lcd.print("Temp=");
  lcd.print((5.0*100*x)/1024);
  delay(4000);
  lcd.setCursor(3,1);
  lcd.print("Updating...");
  delay(1000);
  
  }


