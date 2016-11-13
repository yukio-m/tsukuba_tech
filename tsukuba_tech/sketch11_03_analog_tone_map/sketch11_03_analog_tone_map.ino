/* アナログ入力で音程を変更。音程の範囲を広げる */

const int sensorPin = A0;
const int speakerPin = 5;

void setup() {
}

void loop() {
  int sensorValue = analogRead(sensorPin);  
  int toneValue = map(sensorValue, 0, 1024, 55, 3521);

  tone(speakerPin, toneValue);
}
