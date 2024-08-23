#include <Arduino.h>
#include <BleKeyboard.h>

// put function declarations here:
BleKeyboard bleKeyboard;

void setup() {
  Serial.begin(115200);
  Serial.println("Hello World\n");
  bleKeyboard.begin();
}

void loop() {
  delay(1000);
}
