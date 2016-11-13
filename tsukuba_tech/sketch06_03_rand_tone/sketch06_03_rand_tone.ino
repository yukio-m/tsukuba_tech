/* ランダムな周波数でランダムな時間音を出す */
 
const int speakerPin = 5; // D5
int ledPin;               // D6, D7, D8
int duration;             // 音の継続時間
int toneLevel;            // 音の周波数

void setup() {
  pinMode(speakerPin, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  duration = random(100, 500);
  toneLevel = random(100, 1000);
  ledPin = random(6, 9);  // D6〜D8

  digitalWrite(ledPin, HIGH);
  tone(speakerPin, toneLevel);
  delay(duration);                                                           

  digitalWrite(ledPin, LOW); 
  noTone(speakerPin);
}
