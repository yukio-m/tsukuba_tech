/* 温度(摂氏)をシリアルモニタで表示 */

#include <math.h>

const int sensorPin = A0;

void setup() {
  Serial.begin(9600);  
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  float celsius  = analogToCelsius(sensorValue);
 
  Serial.print(sensorValue);
  Serial.print(" : ");
  Serial.println(celsius);

  delay(1000);
}

float analogToCelsius(int sensorValue) {
  float resistance  = (1023.0 - sensorValue) / sensorValue;
  float temperature = 1.0 / (log(resistance)/3975.0 + 1.0/298.15) 
                      - 273.15;

  return temperature;
}
