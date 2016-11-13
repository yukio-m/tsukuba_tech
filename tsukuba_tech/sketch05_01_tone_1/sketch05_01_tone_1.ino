/* サウンドプログラム。「ラ」の音を1秒間隔で鳴らす。その1 */

const int speakerPin = 5; // スピーカーをD5に接続

void setup() {
}

void loop() {
  tone(speakerPin, 440); // 440Hzの音を鳴らす
  delay(1000);           // 1000ms待つ
  noTone(speakerPin);    // スピーカーの音を止める
  delay(1000);           // 1000ms待つ
}
