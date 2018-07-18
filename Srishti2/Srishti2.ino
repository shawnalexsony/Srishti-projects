/*Model voltage security warning system
 uses potentiometer for variable input and LED as supply for appliance
 displays the voltage condition in Serial output*/


void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int x=analogRead(A0);
  if(x<180)
  {
   Serial.println("Low Voltage");
   digitalWrite(8,LOW);
  }
  else if(x>=180&&x<260)
  { 
   Serial.println("Safe Voltage"); 
   digitalWrite(8,HIGH); 
  }
  else
  {
    Serial.println("High Voltage");
    digitalWrite(8,LOW);
  }
  
  }
