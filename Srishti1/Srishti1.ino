/*LED sequence display with active low switch*/

void setup() {
  // put your setup code here, to run once:
   pinMode(5,INPUT);
   pinMode(8,OUTPUT);
   pinMode(9,OUTPUT);
   pinMode(10,OUTPUT);
   pinMode(11,OUTPUT);
   digitalWrite(5,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(5)==LOW)
  {
  digitalWrite(8,HIGH);
  delay(100);

  digitalWrite(8,LOW);
  digitalWrite(9,HIGH);
  delay(100);
 
  
  digitalWrite(9,LOW);
  digitalWrite(10,HIGH);
  delay(100);

 
  digitalWrite(10,LOW);
  digitalWrite(11,HIGH);
  delay(100);
  
  
  digitalWrite(10,HIGH);
  digitalWrite(11,LOW);
  delay(100);

  digitalWrite(9,HIGH);
  digitalWrite(10,LOW);
  delay(100);

  digitalWrite(9,LOW);
  }
  else
  {digitalWrite(8,LOW);
  digitalWrite(9,LOW);
  digitalWrite(10,LOW);
  digitalWrite(11,LOW);
  }
  }
 

