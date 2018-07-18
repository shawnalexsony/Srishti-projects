char data[12];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    for(int i=0;i<12;i++)
    { data[i]=Serial.read();
    delay(10);
    Serial.print(data[i]);
    }
  }
     
}
