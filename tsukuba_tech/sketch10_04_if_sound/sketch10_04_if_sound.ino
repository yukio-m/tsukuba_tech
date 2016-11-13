/* ボタンを押すと音程が変わる */

#define DO   261
#define RE   294
#define MI   329
#define FA   349
#define SOL  392
#define LA   440
#define SI   493
#define DO2  523
#define WAIT   0
#define END   -1

const int speakerPin = 5;
const int buttonPin = 2;

int music[] = {DO, RE, MI, FA, MI, RE, DO, WAIT,
               MI, FA, SOL, LA, SOL, FA, MI, WAIT, END};

void setup() {
  pinMode(buttonPin, INPUT);
}

void loop() {
  int i;

  for (i = 0; music[i] != END; i++) {
    if (digitalRead(buttonPin) == LOW) {
      tone(speakerPin, music[i], 400);
      delay(400);
    } else {
      toneB(speakerPin, music[i], 400);
    }
  }
  delay(1000);
}

#define TENPO 30

void toneB(int pin, int hz, int time) {
  int i;
  
  for (i = 0; i <= time; i = i + TENPO * 2) {
    tone(pin, hz, TENPO);
    delay(TENPO);
    tone(pin, hz*2, TENPO);
    delay(TENPO);
  }
}
