/* 割り込みを使って、三三七拍子の開始と即時中断を指示(チャタリング対策済み) */

#define DUL 100

const int buttonPin = 2; // D2: 割り込み番号 0
const int speakerPin = 5;
const int ledPin = 8;
const int tenpo[] = {1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,0,-1};
volatile int play = 0;
volatile unsigned long t1; // 前回buttonで割り込み処理を実行した時刻
volatile unsigned long t2; // 今回buttonが起動した時刻

void button() {
  t2 = millis();
  if (t2 - t1 <= DUL) {
    return;
  }
  t1 = t2;
    
  play = 1 - play;
  digitalWrite(ledPin, play);
  if (play == 0) {
    noTone(speakerPin);
  }
}

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);

  t1 = millis();
  attachInterrupt(0, button, FALLING);
}

void loop() {
  for (int i = 0; play == 1 && tenpo[i] != -1; i++) {
    if (tenpo[i] == 1) {
      tone(speakerPin, 440, 250);
    }
    delay(500);
  }
}
