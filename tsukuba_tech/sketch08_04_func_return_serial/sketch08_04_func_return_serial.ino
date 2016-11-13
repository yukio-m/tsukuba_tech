/* 戻り値について理解するためのスケッチ */

void setup() {
  Serial.begin(9600);
}

void loop() {
  float mean;
  
  mean = mean3(85.3, 21.5, 49.3);

  Serial.print("ans=");
  Serial.println(mean);
  delay(10000);
}

float mean3(float a, float b, float c) {
  float value;

  value = (a + b + c) / 3.0;
  return value;
}
