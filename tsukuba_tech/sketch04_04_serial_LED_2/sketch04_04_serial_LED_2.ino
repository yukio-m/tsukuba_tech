/* 2つのLEDを交互に点滅 */

const int led1Pin = 7;
const int led2Pin = 8;

void setup() {
  Serial.begin(9600);
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
}

void loop() {
  digitalWrite(led1Pin, HIGH);
  digitalWrite(led2Pin, LOW);
  Serial.println("   *   ");
  Serial.println("  * *  ");
  Serial.println(" *   * ");
  Serial.println("*******");
  Serial.println("*     *");
  Serial.println("*     *");
  Serial.println();
  
  digitalWrite(led1Pin, LOW);
  digitalWrite(led2Pin, HIGH);
  delay(10000);
}
