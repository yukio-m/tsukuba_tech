/* 割り込みを使わずに、三三七拍子の開始と中断を指示 */

const int buttonPin = 2;
const int speakerPin = 5;
const int ledPin = 8;
const int tenpo[] = {1,1,1,0,1,1,1,0,1,1,1,1,1,1,1,-1};
int play = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    play = (play + 1) % 2;
    digitalWrite(ledPin, play);
  }
  
  if (play == 1) {     
    for (int i = 0; tenpo[i] != -1; i++) {
      if (tenpo[i] == 1) {
        tone(speakerPin, 440, 250);
      }
      delay(250);
    }
  }
  delay(1000);
}
