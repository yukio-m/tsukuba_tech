/*  ランダムな間隔で点滅 */
 
const int ledPin = 8;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int waitTime = random(1000, 5000);

  digitalWrite(ledPin, HIGH);
  delay(waitTime);
 
  digitalWrite(ledPin, LOW);
  delay(waitTime);
}
