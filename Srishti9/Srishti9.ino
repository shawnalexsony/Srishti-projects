/*Controlling LED using accelerometer input*/

void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT);
pinMode(11,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x=analogRead(A0);
  int y=analogRead(A1);

  Serial.print("X value=");
  Serial.print(x);
  Serial.print(" Y value=");
  Serial.println(y);

  if(x<310)
  {
    digitalWrite(8,HIGH);
  }
  if(x>360)
  {
    digitalWrite(8,LOW);
  }
  if(y<300)
  {
    digitalWrite(11,HIGH);
  }
  if(y>360)
  {
    digitalWrite(11,LOW);
  }
 
  
}
