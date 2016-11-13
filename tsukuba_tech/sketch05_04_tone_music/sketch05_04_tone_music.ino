/* 音楽演奏: かえるの合唱 */

#define DO   262
#define RE   294
#define MI   330
#define FA   349
#define SOL  392
#define LA   440
#define SI   494
#define DO2  523

#define DURATION 400
#define WAIT  400

const int speakerPin = 5;

void setup() {
}

void loop() {
  tone(speakerPin, DO,  DURATION);
  delay(WAIT);
  tone(speakerPin, RE,  DURATION);
  delay(WAIT);
  tone(speakerPin, MI,  DURATION);
  delay(WAIT);
  tone(speakerPin, FA,  DURATION);
  delay(WAIT);
  tone(speakerPin, MI,  DURATION);
  delay(WAIT);
  tone(speakerPin, RE,  DURATION);
  delay(WAIT);
  tone(speakerPin, DO,  DURATION);
  delay(WAIT * 2);

  tone(speakerPin, MI,  DURATION);
  delay(WAIT);
  tone(speakerPin, FA,  DURATION);
  delay(WAIT);
  tone(speakerPin, SOL, DURATION);
  delay(WAIT);
  tone(speakerPin, LA,  DURATION);
  delay(WAIT);
  tone(speakerPin, SOL, DURATION);
  delay(WAIT);
  tone(speakerPin, FA,  DURATION);
  delay(WAIT);
  tone(speakerPin, MI,  DURATION);
  delay(WAIT * 2);
}
