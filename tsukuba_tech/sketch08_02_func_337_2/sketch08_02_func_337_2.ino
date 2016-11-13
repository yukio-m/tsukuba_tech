/* 音色を変えた三三七拍子 */

const int speakerPin = 5;

void setup() {
}

void loop() {
  beat2(3);
  beat2(3);
  beat2(7);
}

void beat2(int n) {
  int i;

  for (i = 1; i <= n; i++) {
    tone2(speakerPin, 440, 500);
    delay(500);
  }
  delay(500);
}

void tone2(int pin, int hz, int time) {
  int i;
  
  for (i = 0; i <= time; i += 10) {
    tone(pin, hz + i, 10);
    delay(10);
  }
}
