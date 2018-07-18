/*Automatic Street lamp using LDR and LED*/

void setup() {
  // put your setup code here, to run once:
 pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int x=analogRead(A0);
 if(x<=10)
 {
  digitalWrite(8,HIGH);
 }
 else
 {
  digitalWrite(8,LOW);
 }
}

