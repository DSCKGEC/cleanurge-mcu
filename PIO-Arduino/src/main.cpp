/*=====Headers and Libraries=====*/
#include <Arduino.h>
#include <Ultrasonic.h>
#include <SoftwareSerial.h>
#include <GPRS_Shield_Arduino.h>

/*=====Macros=====*/
#define ECHO 11
#define TRIG 12

/*=====Globals=====*/
Ultrasonic ultrasonic1(TRIG, ECHO);

/*=====Function Prototypes=====*/
//All the function prototypes will be declared here


/*=====Main Functions=====*/
void setup() {
  //Serial Monitor
  Serial.begin(9600);
}

void loop() {
  //Put the logic for the loop()
}


/*=====User Functions go here=====*/
