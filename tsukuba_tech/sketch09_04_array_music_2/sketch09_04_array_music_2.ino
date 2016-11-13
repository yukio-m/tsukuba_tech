/* 配列を使った音楽演奏(正式版) */

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
int music[] = {DO, RE, MI,  FA, MI,  RE, DO, WAIT,
               MI, FA, SOL, LA, SOL, FA, MI, WAIT, END};

void setup() {
}

void loop() {
  for (int i = 0; music[i] != END; i++) {
    if (music[i] != WAIT) {
      tone(speakerPin, music[i], 500);
    } else {
      noTone(speakerPin);
    }
    delay(500);
  }
  delay(1000);
}
