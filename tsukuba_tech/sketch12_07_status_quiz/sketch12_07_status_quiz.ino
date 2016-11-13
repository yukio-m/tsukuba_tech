/* 早押しクイズ */

const int button2Pin = 2;
const int button1Pin = 3;
const int speakerPin = 5;
const int led2Pin = 7;
const int led1Pin = 8;

int val1 = LOW;
int val2 = LOW;

void setup() {
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(speakerPin, OUTPUT);
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);

  delay(1000);
  tone(speakerPin, 1000, 15);
  delay(15);
}

void loop() {
  while (val1 == LOW && val2 == LOW) {
    val1 = digitalRead(button1Pin);
    val2 = digitalRead(button2Pin);
  }

  if (val1 == HIGH) {
    answer(led1Pin, speakerPin, 440);
  } else {
    answer(led2Pin, speakerPin, 880);
  }
  
  val1 = val2 = LOW;
}

void answer(int ledPin, int speakerPin, int hz) {  
  tone(speakerPin, hz, 500);

  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);
  }
  
  delay(1000);
  tone(speakerPin, 1000, 15);
  delay(15);
}
