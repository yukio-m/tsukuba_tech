/* 5つのモードがあり、ボタンを押すたびに切り替わる */

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
    status = (status + 1) % 5;
  }
  
  if (status == 0) {
    digitalWrite(ledPin, LOW);
    delay(10);   // チャタリング防止
  } else if (status == 1) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  } else if (status == 2) {
    digitalWrite(ledPin, HIGH);
    delay(250);
    digitalWrite(ledPin, LOW);
    delay(250);
  } else if (status == 3) {
    digitalWrite(ledPin, HIGH);
    delay(250);
    digitalWrite(ledPin, LOW);
    delay(750);
  } else if (status == 4) {
    digitalWrite(ledPin, HIGH);
    delay(10);   // チャタリング防止
  }
  
  old_val = new_val;
}
