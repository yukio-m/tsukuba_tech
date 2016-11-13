/* 割り込みを使って三三七拍子の開始と終了を指示 */

const int buttonPin = 2; // D2: 割り込み番号 0
const int speakerPin = 5;
const int ledPin = 8;
const int tenpo[] = {1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,-1};
volatile int play = 0;

void button() {
  play = 1 - play;
  digitalWrite(ledPin, play);
}

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  attachInterrupt(0, button, FALLING);
}

void loop() {
  if (play == 1) {
    for (int i = 0; tenpo[i] != -1; i++) {
      if (tenpo[i] == 1) {
        tone(speakerPin, 440, 250);
      }
      delay(500);
    }
  }
}
