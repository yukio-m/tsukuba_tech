/* アナログ入力を使ってPWM制御*/

const int sensorPin = A0;
const int led1Pin = 5;
const int led2Pin = 6;

void setup() {
  Serial.begin(9600);  
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  int value = map(sensorValue, 0, 1023, 0, 255);

  Serial.print(sensorValue);
  Serial.print(":");
  Serial.println(value);
  
  analogWrite(led1Pin, value);
  analogWrite(led2Pin, 255 - value);
}
