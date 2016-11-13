/* シリアルモニタに大きな文字を表示 */

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("   *   ");
  Serial.println("  * *  ");
  Serial.println(" *   * ");
  Serial.println("*******");
  Serial.println("*     *");
  Serial.println("*     *");
  Serial.println();
  delay(10000);
}
