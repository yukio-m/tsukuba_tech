/* 配列を使って三三七拍子をする */

#define N 3
int tenpo[N] = {3, 3, 7};
const int speakerPin = 5;

void setup() {
}

void loop() {
  int i;
  
  for (i = 0; i < N; i++) {
    beat(tenpo[i]);
  }
}

void beat(int n) {
  int i;

  for (i = 1; i <= n; i++) {
    tone(speakerPin, 440, 500);
    delay(1000);
  }
  delay(500);
}
