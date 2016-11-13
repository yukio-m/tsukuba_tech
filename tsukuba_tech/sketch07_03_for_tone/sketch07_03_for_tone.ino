/* for文で音程を変えながら音を鳴らす。*/

const int speakerPin = 5;

void setup() {
}

void loop() {
  int i;

  for (i = 31; i <= 2000; i += 10) {
    tone(speakerPin, i, 10);
    delay(10);
  }
  delay(500);
}
