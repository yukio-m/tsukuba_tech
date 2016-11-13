/* for文で三三七拍子の簡略化 */

const int speakerPin = 5;

void setup() {
}

void loop() {
  beat(3);
  beat(3);
  beat(7);
}

void beat(int n) {
  int i;

  for (i = 1; i <= n; i++) {
    tone(speakerPin, 440, 500);
    delay(1000);
  }
  delay(500);
}
