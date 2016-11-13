/* シリアルモニタで計算結果を表示 */

void setup() {
  Serial.begin(9600);

  while (!Serial)   // シリアルモニタが開かれるまで待つ。
    ;
  
  Serial.println("----------------------");
  Serial.print("365 + 366 = ");
  Serial.println(365 + 366);

  Serial.print("3.141592 * 5.9 = ");
  Serial.println(3.141592 * 5.9);

  Serial.print("365 / 7 = ");
  Serial.println(365 / 7);
  
  Serial.print("365.0 / 7.0 = ");
  Serial.println(365.0 / 7.0);
  Serial.println("----------------------");
}

void loop() {
}
