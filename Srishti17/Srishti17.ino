char r[12];
int i;
int f=0;
int count;
char s[]="11004E101956";
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  
  // put your main code here, to run repeatedly:
if (Serial.available())
{for (i=0;i<12;i++)
  {  r[i]=Serial.read();
  }
  Serial.print("Unique ID =");
for(i=0;i<12;i++)
{Serial.print(r[i]);
delay(10);f++;
}Serial.println(" ");

}

for(int j=0;j<12;j++)
{
  if (r[j]==s[j])
{  count=j+1;}
}
if (count==12&&f==12)
{Serial.println("ACCESS GRANTED");
delay(500);
Serial.print(" ");
}
else if(f==12)
{Serial.println("ACCESS DENIED");
delay(500);
f=0;
Serial.print(" ");
}
}
