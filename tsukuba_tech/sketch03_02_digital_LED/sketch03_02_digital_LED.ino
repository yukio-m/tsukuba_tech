/* 1秒間隔でLEDを点滅させる */

const int ledPin = 8;         // LEDをD8に接続

void setup() {
  pinMode(ledPin, OUTPUT);    // LEDピンを出力モードにする
}

void loop() {
  digitalWrite(ledPin, HIGH); // LEDピンをHIGHにする
  delay(1000);                // 1000ms停止
  digitalWrite(ledPin, LOW);  // LEDピンをLOWにする
  delay(1000);                // 1000ms停止
}
