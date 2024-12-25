#include <SoftwareSerial.h>

SoftwareSerial mySerial(0, 1); 
int potPin = A0;

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() {
  static int previousValue = 0;
  int potValue = analogRead(potPin);
  
  if (potValue != previousValue) {
    Serial.println(potValue);
    previousValue = potValue;
  }
}