#include <SoftwareSerial.h>
SoftwareSerial SIM800L(2, 3); // RX | TX
// Connect the SIM800L TX to Arduino pin 2 RX. 
// Connect the SIM800L RX to Arduino pin 3 TX. 
char c = ' ';
void setup() 
{
    // start th serial communication with the host computer
    Serial.begin(9600);
    while(!Serial);
    Serial.println("Arduino with SIM800L is ready");
 
    // start communication with the SIM800L in 9600
    SIM800L.begin(9600);  
    Serial.println("SIM800L started at 9600");
    delay(1000);
    Serial.println("Setup Complete! SIM800L is Ready!");
}
 
void loop()
{
 
     // Keep reading from SIM800 and send to Arduino Serial Monitor
    if (SIM800L.available())
    { c = SIM800L.read();
      Serial.write(c);}
 
    // Keep reading from Arduino Serial Monitor and send to SIM800L
    if (Serial.available())
    { c = Serial.read();
      SIM800L.write(c);  
       }

}
