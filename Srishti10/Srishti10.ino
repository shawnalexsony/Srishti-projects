/*Robot Controlled by accelerometer input*/
 
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
 
 char c=Serial.read();
  int x=analogRead(A0);
  int y=analogRead(A1);

 if(y<300)
 {Serial.println("Moving Forward");
  digitalWrite(rmp,HIGH);
  digitalWrite(rmn,LOW);
  digitalWrite(lmp,HIGH);
  digitalWrite(lmn,LOW);
 }
 else if(y>380)
 {Serial.println("Moving Backward");
  digitalWrite(rmp,LOW);
  digitalWrite(rmn,HIGH);
  digitalWrite(lmp,LOW);
  digitalWrite(lmn,HIGH);
  }
 
 else if(x>380)
 {Serial.println("Turning Left");
  digitalWrite(rmp,HIGH);
  digitalWrite(rmn,LOW);
  digitalWrite(lmp,LOW);
  digitalWrite(lmn,HIGH);
  }
 else if(x<300)
 {Serial.println("Turning Right");
  digitalWrite(rmp,LOW);
  digitalWrite(rmn,HIGH);
  digitalWrite(lmp,HIGH);
  digitalWrite(lmn,LOW);
  }
 else if(x>310&&x<360&&y<360&&y>310)
 {Serial.println("Stopped Moving");
  digitalWrite(rmp,LOW);
  digitalWrite(rmn,LOW);
  digitalWrite(lmp,LOW);
  digitalWrite(lmn,LOW);
  
 }
  
}
 

