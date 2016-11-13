/* サウンドプログラム。「ラ」の音を1秒間隔で鳴らす。その2 */

const int speakerPin = 5; // スピーカーをD5に接続

void setup() {
}

void loop() {
  tone(speakerPin, 440, 1000); // 440Hzの音を1000ミリ秒鳴らす
  delay(2000);                 // 2000ms待つ
}
