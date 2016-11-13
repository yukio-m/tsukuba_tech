/* 割り込みを使って音程を変化させる(チャタリング対策済み) */

#define DUL 50

const int buttonPin1 = 2; /* D2: 割り込み番号 0 */
const int buttonPin2 = 3; /* D3: 割り込み番号 1 */
const int speaker = 5;
const int ledPin = 8;

volatile int toneValue = 440;
volatile unsigned long tu1;
volatile unsigned long tu2;
volatile unsigned long td1;
volatile unsigned long td2;

void up() {
  tu2 = millis();
  if (tu2 - tu1 > DUL) {
    tu1 = tu2;
    if (toneValue < 950) {
      toneValue += 50;
      tone(speaker, toneValue);
    }
  }
}

void down() {
  td2 = millis();
  if (td2 - td1 > DUL) {
    td1 = td2;
    if (toneValue > 50) {
      toneValue -= 50;
      tone(speaker, toneValue);
    }
  }
}

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  
  tu1 = td1 = millis() ;
  attachInterrupt(0, up, RISING);
  attachInterrupt(1, down, RISING);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(1000);  
}
