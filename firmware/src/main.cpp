#include <Arduino.h>

void setup() {
    Serial.begin(115200);
    Serial.println("Ready");
}

void loop() {
    if (Serial.available() > 0) {
        char received = Serial.read();

        if (received == '1') {
            Serial.println("Command 1 received");
        } else if (received == '0') {
            Serial.println("Command 0 received");
        }
    }
}