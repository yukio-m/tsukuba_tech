/* for文で三三七拍子の簡略化 */

const int speakerPin = 5;

void setup() {
}

void loop() {
  int i;

  for (i = 1; i <= 3; i++) {
    tone(speakerPin, 440, 500);
    delay(1000);
  }
  delay(500);

  for (i = 1; i <= 3; i++) {
    tone(speakerPin, 440, 500);
    delay(1000);
  }
  delay(500);

  for (i = 1; i <= 7; i++) {
    tone(speakerPin, 440, 500);
    delay(1000);
  }
  delay(500);
}
