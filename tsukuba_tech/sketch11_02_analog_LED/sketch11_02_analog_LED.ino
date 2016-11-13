/* アナログ入力でLEDの点滅間隔を変更 */

const int sensorPin = A0;
const int ledPin = 8;

void setup() {
  pinMode(ledPin, OUTPUT);  
}

void loop() {
  int sensorValue = analogRead(sensorPin);    

  digitalWrite(ledPin, HIGH);  
  delay(sensorValue);          
  digitalWrite(ledPin, LOW);
  delay(sensorValue);                  
}
