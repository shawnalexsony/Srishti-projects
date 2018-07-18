/*sound buzzer according to distance from sensor*/

int trig=5;
int echo=6;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  
pinMode(14,OUTPUT);
pinMode(4,OUTPUT);
pinMode(7,OUTPUT);
digitalWrite(4,HIGH);
digitalWrite(7,LOW);

pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(5);

  long x=pulseIn(echo,HIGH);
  
  long distance=(x/2)/29.1;

  Serial.println(distance);

if(distance<100)
{
 digitalWrite(14, HIGH);
 delay(distance*5);
 digitalWrite(14, LOW);
 delay(100);
}



  

}
