/* 配列を使ってドレミを鳴らす */

const int speakerPin = 5;
int doremi[] = {261, 294, 329, 349, 392, 440, 493, 523};

void setup() {
}

void loop() {
  int i;

  for (i = 0; i <= 7; i++) {
    tone(speakerPin, doremi[i], 1000);
    delay(1000);
  }
  delay(1000);
  
  for (i = 7; i >= 0; i--) {
    tone(speakerPin, doremi[i], 1000);
    delay(1000);
  }
  delay(1000);
}
