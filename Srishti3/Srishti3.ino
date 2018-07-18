/*PWM LED ouput controlled by potentiometer input
  Range>>PWM=0-255,Potentiometer =0-1023*/ 

void setup() {
  // put your setup code here, to run once:
 pinMode(9,OUTPUT);
 }

void loop() {
  // put your main code here, to run repeatedly:
  int x=analogRead(A0);
   analogWrite(9,(x/4)) ;
  }
