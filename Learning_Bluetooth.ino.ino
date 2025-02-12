int const RX_PIN = 2; //not using define because bluetooth doesn't like it. This is RX Pin  //receiving signal
int const TX_PIN = 3; //sends signal 
#include <SoftwareSerial.h> 

SoftwareSerial tooth(TX_PIN, RX_PIN); //make a bluetooth object 
//set tx and rx pins 
//tx goes first, then rx 
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
