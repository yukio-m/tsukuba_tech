/* for文なしで1から10まで数える */

void setup() {
    Serial.begin(9600);
}

void loop() {
  Serial.println(1);
  Serial.println(2);
  Serial.println(3);
  Serial.println(4);
  Serial.println(5);
  Serial.println(6);
  Serial.println(7);
  Serial.println(8);
  Serial.println(9);
  Serial.println(10);
  delay(10000);
}
