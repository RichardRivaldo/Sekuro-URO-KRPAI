#include "AnalogIn.h"

AnalogIn::AnalogIn(int pin) {
    this->pin = pin;
}

float AnalogIn::read() {
    currVal = (float)((rand() % 1000)*(rand() % 1000) + (100000*(rand() % 1000))) / 1000;
    return currVal;
}

int AnalogIn::getPin() {
    return pin;
}
