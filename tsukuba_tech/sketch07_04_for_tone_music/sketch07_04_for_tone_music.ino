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
    tone(speakerPin, DO,  i);
    delay(i);
    tone(speakerPin, RE,  i);
    delay(i);
    tone(speakerPin, MI,  i);
    delay(i);
    tone(speakerPin, FA,  i);
    delay(i);
    tone(speakerPin, MI,  i);
    delay(i);
    tone(speakerPin, RE,  i);
    delay(i);
    tone(speakerPin, DO,  i);
    delay(i * 2);

    tone(speakerPin, MI,  i);
    delay(i);
    tone(speakerPin, FA,  i);
    delay(i);
    tone(speakerPin, SOL, i);
    delay(i);
    tone(speakerPin, LA,  i);
    delay(i);
    tone(speakerPin, SOL, i);
    delay(i);
    tone(speakerPin, FA,  i);
    delay(i);
    tone(speakerPin, MI,  i);
    delay(i * 2);
  }
}
