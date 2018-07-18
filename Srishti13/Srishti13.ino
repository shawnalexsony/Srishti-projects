/*Displaying IR remote signal data as numbers and control LEDs*/

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);
pinMode(7,INPUT);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int a=remote();
  if(a==117)
   digitalWrite(8,HIGH);
  if(a==118)
   digitalWrite(9,HIGH);
  if(a==53)
   digitalWrite(10,HIGH);
  if(a==52)
   digitalWrite(11,HIGH);
  if(a==102)
   {digitalWrite(8,LOW);
    digitalWrite(9,LOW);
    digitalWrite(10,LOW);
    digitalWrite(11,LOW);
   }    
  delay(300);
 }

int remote()
  {
    int x=1;
 if(pulseIn(7,LOW)>=2200)/*Check the length of initial pulse(low value since active low sensor).its different for different remotes*/
 {for(int i=0;i<7;i++)
 {
  if(pulseIn(7,LOW)>1000)
  {
   x=x+(1<<i);/*Converting the 1's and 0's into decimal data*/
  }
  }
  Serial.println(x);
  return x;
 }  }


  

