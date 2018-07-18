// Wire Master Writer
// by Nicholas Zambetti <http://www.zambetti.com>

// Demonstrates use of the Wire library
// Writes data to an I2C/TWI slave device
// Refer to the "Wire Slave Receiver" example for use with this

// Created 29 March 2006

// This example code is in the public domain.


#include <Wire.h>

void setup() {
  Wire.begin(7); // join i2c bus (address optional for master)
  Wire.onReceive(receiveEvent); // register event
  Serial.begin(9600);           // start serial for output

}


void loop() {
  Wire.beginTransmission(8); // transmit to device #8
  char x;
  if(Serial.available())
  {  x=Serial.read();
    }
  Wire.write(x);        // sends five bytes
  Wire.endTransmission();    // stop transmitting

  delay(500);
}

void receiveEvent(int howMany) {
  while (1 < Wire.available()) { // loop through all but the last
    char c = Wire.read(); // receive byte as a character
    Serial.print(c);         // print the character
  }
  char x=Wire.read() ;    // receive byte as an integer
  Serial.print(x);         // print the integer
}
