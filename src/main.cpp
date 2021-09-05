#include <Arduino.h>

const int threshold = 400;
const int lock = 12;

void setup() {
  pinMode(lock, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  int analogValue = analogRead(A0);
  if (analogValue > threshold) {
    digitalWrite(lock, HIGH);
    delay(3000);
  }
  else {
    digitalWrite(lock, LOW);
  }
}
