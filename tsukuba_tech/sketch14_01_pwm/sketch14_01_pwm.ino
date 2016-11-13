/* PWMを使ってLEDの明るさを変化させる */

const int ledPin = 6;

void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
  for (int i = 0; i <= 255; i++) {
    analogWrite(ledPin, i);
    delay(500);
  }

  for (int i = 255; i >= 0; i--) {
    analogWrite(ledPin, i);
    delay(500);
  }
}
