#ifndef KEYBOARD_SIM_H
#define KEYBOARD_SIM_H

#include <Keyboard.h>

class KeyboardSim {
  public:
    BLEKeyboard bleKeyboard;

    void begin();
    void print(const char* str);
    void isConnected();
};

#endif