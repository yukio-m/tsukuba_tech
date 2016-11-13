/* for文で1から10まで数える */

void setup() {
    Serial.begin(9600);
}

void loop() {
  int counter;

  for (counter = 1; counter <= 10; counter++) {
    Serial.println(counter);
  }
  
  delay(10000);
}
