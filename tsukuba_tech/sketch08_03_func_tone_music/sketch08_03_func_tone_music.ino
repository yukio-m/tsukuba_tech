/* 音楽演奏: かえるの合唱 */

#define DO   262
#define RE   294
#define MI   330
#define FA   349
#define SOL  392
#define LA   440
#define SI   494
#define DO2  523

const int speakerPin = 5;

void setup() {
}

void loop() {
  int i;
  
  for (i = 400; i >= 100; i -= 100) {
    toneB(speakerPin, DO,  i);
    toneB(speakerPin, RE,  i);
    toneB(speakerPin, MI,  i);
    toneB(speakerPin, FA,  i);
    toneB(speakerPin, MI,  i);
    toneB(speakerPin, RE,  i);
    toneB(speakerPin, DO,  i);
    delay(i);

    toneB(speakerPin, MI,  i);
    toneB(speakerPin, FA,  i);
    toneB(speakerPin, SOL, i);
    toneB(speakerPin, LA,  i);
    toneB(speakerPin, SOL, i);
    toneB(speakerPin, FA,  i);
    toneB(speakerPin, MI,  i);
    delay(i);
  }
}

#define TENPO 30

void toneB(int pin, int hz, int time) {
  int i;
  
  for (i = 0; i < time; i += TENPO*2) {
    tone(pin, hz, TENPO);
    delay(TENPO);
    tone(pin, hz*2, TENPO);
    delay(TENPO);
  }
}
