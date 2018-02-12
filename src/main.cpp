#include <Arduino.h>

void setup() {
    pinMode(A0, INPUT);
    pinMode(13, OUTPUT);
    analogWrite(13, 50);

    Serial.begin(115200);
}

void loop() {
    analogWrite(13, 150);
    Serial.println(analogRead(A0));
    digitalWrite(13, LOW);
    delay(1000);
}
