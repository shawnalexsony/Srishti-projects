/*Automatic door using Servo motor and distance sensor*/

#include <Servo.h>

Servo myservo;

int trig=9;
int echo=10;
int pos=0;
int f;

void setup() {
  // put your setup code here, to run once:
 myservo.attach(2);

 pinMode(8,OUTPUT);
 pinMode(11,OUTPUT);
 digitalWrite(8,HIGH);
 digitalWrite(11,LOW);

 pinMode(trig,OUTPUT);
 pinMode(echo,INPUT);

 Serial.begin(9600); 
}

void loop() {
  // put your main code here, to run repeatedly:
  pos=0;
  int d=distance();
   if(d<10&&f==0)
  {
   myservo.write(180);
   Serial.println("Opening door");
   delay(1000);
   f=1;
  }
  if(d>=10&&f==1)
  {
    for (pos = 180; pos >= 0; pos -= 2)
    { 
    myservo.write(pos); 
    delay(10);
    d=distance();
    if(d<=10)
    {
     break; 
    }
    }
    f=0;
   Serial.println("Closing door");
  }
  
}

int distance()
{
  
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(5);

  long x=pulseIn(echo,HIGH);
  
  long dist=(x/2)/29.1;
  return dist;
}

