#include "KeyboardSim.h"

// initialise keyboard
KeyboardSim::KeyboardSim() : blueKeyboard("ESP32") {}

void KeyboardSim::begin() {
  bleKeyboard.begin();
}

void KeyboardSim::print(const char* str) {
  bleKeyboard.print(str);
}

bool KeyboardSim::isConnected() {
  return bleKeyboard.isConnected();
}