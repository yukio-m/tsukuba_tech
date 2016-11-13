/* for文で三三七拍子の簡略化 */

const int speakerPin = 5;

void setup() {
}

void loop() {
  int i;
  int start = random(31, 8000);
  int end  = random(31, 8000);
  int step = random(1,100);
  
  if (start < end) {
    for (i = start; i <= end; i += step) {
      tone(speakerPin, i, 10);
      delay(10);
    }
  } else {
    for (i = start; i >= end; i -= step) {
      tone(speakerPin, i, 10);
      delay(10);
    }
  }
  delay(100);
}
