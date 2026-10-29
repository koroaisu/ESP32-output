#include <Arduino.h>

// 起動時に一度だけ実行されます。
void setup() {
    Serial.begin(115200);
}

// setup()の後、繰り返し実行されます。
void loop() {
    Serial.println("Hello from ESP32!");
    delay(1000);
}
