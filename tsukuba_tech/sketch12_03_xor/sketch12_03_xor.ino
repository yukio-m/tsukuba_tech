/* xorの練習 */

const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int ledPin = 8;

void setup() {
  pinMode(ledPin, OUTPUT);      
  pinMode(buttonPin1, INPUT);     
  pinMode(buttonPin2, INPUT);     
}

void loop() {
  int buttonState1 = digitalRead(buttonPin1);
  int buttonState2 = digitalRead(buttonPin2);

  if (buttonState1 != buttonState2) {     
    digitalWrite(ledPin, HIGH);  
  } else {
    digitalWrite(ledPin, LOW); 
  }
}
