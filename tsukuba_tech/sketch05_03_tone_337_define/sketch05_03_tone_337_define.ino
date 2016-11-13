/* #defineで音程、タイミングが変えられる三三七拍子 */

#define TONE     262   // 音程 (262Hz:ド)
#define DURATION 100   // 音を鳴らす時間
#define WAIT1    400   // 次の音への待ち時間
#define WAIT2    400   // 休符の待ち時間

const int speakerPin = 5;

void setup() {
}

void loop() {
  tone(speakerPin, TONE, DURATION);
  delay(WAIT1);
  tone(speakerPin, TONE, DURATION);
  delay(WAIT1);
  tone(speakerPin, TONE, DURATION);
  delay(WAIT1 + WAIT2);

  tone(speakerPin, TONE, DURATION);
  delay(WAIT1);
  tone(speakerPin, TONE, DURATION);
  delay(WAIT1);
  tone(speakerPin, TONE, DURATION);
  delay(WAIT1 + WAIT2);

  tone(speakerPin, TONE, DURATION);
  delay(WAIT1);
  tone(speakerPin, TONE, DURATION);
  delay(WAIT1);
  tone(speakerPin, TONE, DURATION);
  delay(WAIT1);
  tone(speakerPin, TONE, DURATION);
  delay(WAIT1);
  tone(speakerPin, TONE, DURATION);
  delay(WAIT1);
  tone(speakerPin, TONE, DURATION);
  delay(WAIT1);
  tone(speakerPin, TONE, DURATION);
  delay(WAIT1 + WAIT2);
}
