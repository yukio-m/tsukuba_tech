/* アナログ入力した値をシリアルモニタで表示 */

const int sensorPin = A0;

void setup() {
  Serial.begin(9600);  
}

void loop() {
  int sensorValue = analogRead(sensorPin);    

  Serial.println(sensorValue);                  
}
