/* 乱数を発生させる */

void setup() {
  Serial.begin(9600);
  Serial.println("rand");
}

void loop() {
  int variable;
  variable = random();

  Serial.println(variable);
  delay(2000);
}
