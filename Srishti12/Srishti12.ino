/*Displaying pulse duration data of IR remote in serial monitor*/

int r[7];
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);
pinMode(7,INPUT);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
 if(pulseIn(7,LOW)>=2200)/*Check the length of initial pulse(low value since active low sensor).its different for different remotes*/
 {for(int i=0;i<7;i++)
 {
  r[i]=pulseIn(7,LOW);
  Serial.print(r[i]);
  Serial.print(" ");
 }
  Serial.println();
  delay(300);
 }
}
