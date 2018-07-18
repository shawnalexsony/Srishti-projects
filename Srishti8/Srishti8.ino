/*Robot controlled by Serial data input*/
 
 int rmp=6;
 int rmn=7;
 int lmp=10;
 int lmn=11;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
 pinMode(10,OUTPUT);
 pinMode(11,OUTPUT);
 Serial.println("Robot ready to receive command");

}

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available())
{ char x=Serial.read();
 if(x=='F')
 {Serial.println("Moving Forward");
  digitalWrite(rmp,HIGH);
  digitalWrite(rmn,LOW);
  digitalWrite(lmp,HIGH);
  digitalWrite(lmn,LOW);
 }
 if(x=='L')
 {Serial.println("Turning Left");
  digitalWrite(rmp,HIGH);
  digitalWrite(rmn,LOW);
  digitalWrite(lmp,LOW);
  digitalWrite(lmn,HIGH);
 }
 if(x=='R')
 {Serial.println("Turning Right");
  digitalWrite(rmp,LOW);
  digitalWrite(rmn,HIGH);
  digitalWrite(lmp,HIGH);
  digitalWrite(lmn,LOW);
 }
 if(x=='B')
 {Serial.println("Moving Backward");
  digitalWrite(rmp,LOW);
  digitalWrite(rmn,HIGH);
  digitalWrite(lmp,LOW);
  digitalWrite(lmn,HIGH);
 }
 if(x=='S')
 {Serial.println("Stopped Moving");
  digitalWrite(rmp,LOW);
  digitalWrite(rmn,LOW);
  digitalWrite(lmp,LOW);
  digitalWrite(lmn,LOW);
 }
  
}
 
}
