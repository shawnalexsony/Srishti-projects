/*Home appliances controlled by Bluetooth and mobile app*/
 
 int dev1=4;
 int dev2=5;
 int dev3=6;
 int dev4=7;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(dev1,OUTPUT);
 pinMode(dev2,OUTPUT);
 pinMode(dev3,OUTPUT);
 pinMode(dev4,OUTPUT);
 Serial.println("Control system online");

}

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available())
{ char x=Serial.read();
 if(x==1)
 {Serial.println("Device 1 is ON");
  digitalWrite(dev1,HIGH);
  }
 if(x==2)
 {Serial.println("Device 1 is OFF");
  digitalWrite(dev1,LOW);
  }
 if(x==3)
 {Serial.println("Device 2 is ON");
  digitalWrite(dev2,HIGH);
  }
 if(x==4)
 {Serial.println("Device 2 is OFF");
  digitalWrite(dev2,LOW);
  }
 if(x==5)
 {Serial.println("Device 3 is ON");
  digitalWrite(dev3,HIGH);
  }
 if(x==6)
 {Serial.println("Device 3 is OFF");
  digitalWrite(dev3,LOW);
  }
 if(x==7)
 {Serial.println("Device 4 is ON");
  digitalWrite(dev4,HIGH);
  }
 if(x==8)
 {Serial.println("Device 4 is OFF");
  digitalWrite(dev4,LOW);
  }
 }
 
}
