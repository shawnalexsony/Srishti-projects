/*Controlling LED using Serial data input*/

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(8,INPUT);
 
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available())
 {char x=Serial.read();
 if(x =='a')
 { digitalWrite(8,HIGH);
  }
 if(x=='b')
 {
  digitalWrite(8,LOW); 
 }
 } 
}
