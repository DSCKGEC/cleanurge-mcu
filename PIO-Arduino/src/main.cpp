#include <Arduino.h>
#include <Ultrasonic.h>
#include <SoftwareSerial.h>
#include <GPRS_Shield_Arduino.h>

Ultrasonic ultrasonic1(12, 13);

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("Sensor 01: ");
  Serial.print(ultrasonic1.read()); // Prints the distance on the default unit (centimeters)
  Serial.println("cm");
}