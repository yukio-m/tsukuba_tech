/* PWMでLEDの明るさを変化させる */

const int ledPin = 6;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  for (int i = 3; i <= 80; i++) {
    analogWrite(ledPin, i);
    delay(400/i);
  }

  for (int i = 80; i >= 3; i--) {
    analogWrite(ledPin, i);
    delay(400/i);
  }
}
