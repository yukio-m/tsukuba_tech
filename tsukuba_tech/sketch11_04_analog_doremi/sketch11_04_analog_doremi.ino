/* アナログ入力で楽器を作る */

const int sensorPin  = A0;
const int buttonPin  = 2;
const int speakerPin = 5;

int doremi[] = {261, 294, 329, 349, 392, 440, 493, 523};

void setup() {
  pinMode(buttonPin, INPUT);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    int sensorValue = analogRead(sensorPin);
    int newValue = map(sensorValue, 0, 1024, 0, 8);
    tone(speakerPin, doremi[newValue]);
  } else {
    noTone(speakerPin);
  }
}
