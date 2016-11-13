/* ボタンを押すとLEDが点灯 */

const int button1Pin = 2;
const int button2Pin = 3;
const int led2Pin = 8;
const int led1Pin = 7;

void setup() {
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
}

void loop() {
  int button1State = digitalRead(button1Pin);
  int button2State = digitalRead(button2Pin);
 
  if (button1State == HIGH) {
    digitalWrite(led1Pin, HIGH);
  } else {
    digitalWrite(led1Pin, LOW);
  }

  if (button2State == HIGH) {
    digitalWrite(led2Pin, HIGH);
  } else {
    digitalWrite(led2Pin, LOW);
  }
}
