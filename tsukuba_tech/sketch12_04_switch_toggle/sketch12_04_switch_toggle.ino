/* ボタンを押すたびに状態が変わる */

const int buttonPin = 2;
const int ledPin = 8;

int old_val = LOW;
int status = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  int new_val = digitalRead(buttonPin);

  if ((new_val == HIGH) && (old_val == LOW)) {
    status = (status + 1) % 2;
    digitalWrite(ledPin, status);
  }
  old_val = new_val;

  delay(10);  // チャタリング防止
}
