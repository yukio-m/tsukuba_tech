/* アナログ入力で楽器を作る */

const int sensorPin = A0;
const int speakerPin = 5;

int sensorValue = 0;
int oldValue = 0;
int newValue = 0;

int doremi[] = {261, 294, 329, 349, 392, 440, 493, 523};

void setup() {
  pinMode(speakerPin, OUTPUT);
}

void loop() {
  oldValue = newValue;
  
  sensorValue = analogRead(sensorPin);
  newValue = map(sensorValue, 0, 1024, 0, 8);

  if (oldValue != newValue) {
    tone(speakerPin, doremi[newValue]);
  }
}
