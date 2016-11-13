/* 音色を変えた三三七拍子 */

const int speakerPin = 5;

void setup() {
}

void loop() {
  tone2(speakerPin, 31, 2000-31);
  delay(500);
}

void tone2(int pin, int hz, int time) {
  int i;
  
  for (i = 0; i <= time; i += 10) {
    tone(pin, hz + i, 10);
    delay(10);
  }
}
