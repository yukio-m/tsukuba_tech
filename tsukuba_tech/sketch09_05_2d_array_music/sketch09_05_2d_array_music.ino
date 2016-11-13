/* 二次元配列を使った音楽演奏(チャルメラ) */

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
#define TENPO 50

const int speakerPin = 5;
int music[][2] = {{SOL, 10},
                  {LA,  10},
                  {SI,  30},
                  {LA,   5},
                  {SOL,  5},
                  {WAIT,10},
                  {SOL, 10},
                  {LA,  10},
                  {SI,  10},
                  {LA,  10},
                  {SOL, 10},
                  {LA,  40},
                  {END,END}};
                  
void setup() {
}

void loop() {
  for (int i = 0; music[i][0] != END; i++) {
    if (music[i][0] != WAIT) {
      tone(speakerPin, music[i][0], music[i][1] * TENPO);
    } else {
      noTone(speakerPin);
    }
    delay(music[i][1] * TENPO);
  }
  delay(1000);
}
