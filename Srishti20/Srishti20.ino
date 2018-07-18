/*GSM module application of controlling motor via missed calls*/
#include <SoftwareSerial.h>

SoftwareSerial gsm(4,5);/*set 4 and 5 as new rx and tx*/

char data;
int a[]={9,9,4,6,3,4,8,5,7,8};
int c=0;
int sw=0;

void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  
  Serial.begin(9600);
  gsm.begin(9600);
  Serial.print("System starting....");
  delay(20000);
  gsm.print("AT+CLIP=1\r");
  Serial.println("Done");
  delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(gsm.available())
  { data=gsm.read();
   Serial.print(data);

   if(data=='+')
   {
    delay(10);
    data=gsm.read();
      if(data=='9')
    {
     delay(10);
     data=gsm.read();
       if(data=='1')
      {
       delay(10);
       data=gsm.read();
        if(data=='9')
        {
          delay(10);
          data=gsm.read();
           if(data=='9')
           {
            delay(10);
            data=gsm.read();
             if(data=='4')
             {
              delay(10);
              data=gsm.read();
               if(data=='6')
                 {
                  delay(10);
                  data=gsm.read();
                   if(data=='3')
                     {
                      delay(10);
                      data=gsm.read();
                             if(data=='4')
                           {
                            delay(10);
                            data=gsm.read();
                                     if(data=='8')
                                   {
                                    delay(10);
                                    data=gsm.read();
                                           if(data=='5')
                                         {
                                          delay(10);
                                          data=gsm.read();
                                                   if(data=='7')
                                                 {
                                                  delay(10);
                                                  data=gsm.read();
                                                           if(data=='8')
                                                         {
                                                          c=c+1;
                                                          if(c%2==1)
                                                           {
                                                             digitalWrite(8,HIGH);
                                                             Serial.print("Motor on");
                                                           }
                                                          if(c%2==0)
                                                           {
                                                             digitalWrite(8,LOW);
                                                             Serial.print("Motor off");
                                                           }
                                                          data=gsm.read();
                                                          Serial.print("Number identified");
                                                          delay(60000); 
                                                          Serial.flush();
                                                          gsm.flush();
                                                          delay(5000);
                                                          }
                                                  }
                                          }
                                     }
                             }
                       }
                  }
                                                                        
                }
            }
                                                            
         }
                                                            
      }
    }
 }
 
  
  
  
  
}

}
