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
  
  switch (status) {
    case 0:
      digitalWrite(ledPin, LOW);
      delay(10);   // チャタリング防止
      break;
    case 1:
      digitalWrite(ledPin, HIGH);
      delay(500);
      digitalWrite(ledPin, LOW);
      delay(500);
      break;
    case 2:
      digitalWrite(ledPin, HIGH);
      delay(250);
      digitalWrite(ledPin, LOW);
      delay(250);
      break;
    case 3:
      digitalWrite(ledPin, HIGH);
      delay(250);
      digitalWrite(ledPin, LOW);
      delay(750);
      break;
    case 4:
      digitalWrite(ledPin, HIGH);
      delay(10);   // チャタリング防止
      break;
  }
  
  old_val = new_val;
}
