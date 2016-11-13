/* PWMを使って2つのLEDの明るさを変化させる */

#include <Servo.h> 
 
Servo myservo;
const int sensorPin = A0;
 
void setup() {
  myservo.attach(8);
} 
 
void loop() {
  int val = analogRead(sensorPin);
  val = map(val, 0, 1024, 0, 181);
  myservo.write(val);
  delay(50);
}
