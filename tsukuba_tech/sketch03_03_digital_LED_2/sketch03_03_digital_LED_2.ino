/* 2つのLEDを交互に点滅 */

const int led1Pin = 7; // LED1をD7に接続
const int led2Pin = 8; // LED2をD8に接続

void setup() {
  pinMode(led1Pin, OUTPUT);    // LED1ピンを出力モードにする
  pinMode(led2Pin, OUTPUT);    // LED2ピンを出力モードにする
}

void loop() {
  digitalWrite(led1Pin, HIGH); // LED1ピンをHIGHにする
  digitalWrite(led2Pin, LOW);  // LED2ピンをLOWにする
  delay(1000);                 // 1000ms停止
  
  digitalWrite(led1Pin, LOW);  // LED1ピンをLOWにする
  digitalWrite(led2Pin, HIGH); // LED2ピンをHIGHにする
  delay(1000);                 // 1000ms停止
}
