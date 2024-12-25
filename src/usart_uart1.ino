#include <LiquidCrystal.h>
#include <Servo.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(0, 1); // RX, TX pinleri
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
Servo servoMotor;

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  lcd.begin(16, 2);
  servoMotor.attach(9);
  lcd.setCursor(0, 0);
  lcd.print("   GOMULU ");
  lcd.setCursor(0, 1);
  lcd.print("   ...");
}

void loop() {
   if (mySerial.available()) {
    int potValue = Serial.parseInt();
    
    int servoAngle = map(potValue, 0, 1023, 0, 180); 
    Serial.println(servoAngle);
    lcd.clear();
    
    lcd.setCursor(0, 0);
    lcd.print("Pot Value: ");
    lcd.print(potValue);
    
    lcd.setCursor(0, 1);
    lcd.print("Servo Angle: ");
    lcd.print(servoAngle);
    
    servoMotor.write(servoAngle);
  }
}
