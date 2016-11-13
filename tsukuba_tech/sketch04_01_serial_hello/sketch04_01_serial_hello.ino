/* シリアルモニタで世界への挨拶を表示 */

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("hello, world");
  delay(10000);
}
