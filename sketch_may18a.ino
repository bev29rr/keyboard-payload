#include "KeyboardSim.h"

KeyboardSimulator keyboard;

void setup() {
  Serial.begin(115200);
  keyboard.begin();
}

void loop() {
  if (keyboard.isConnected()) {
    Serial.println("Connected");
    keyboard.print("Hello world");
    delay(3000);
  } else {
    Serial.println("Waiting for bluetooth connection");
    delay(1000);
  }
}
