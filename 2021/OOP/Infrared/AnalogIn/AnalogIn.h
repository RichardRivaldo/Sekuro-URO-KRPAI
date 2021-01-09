#ifndef ANALOG_IN_H
#define ANALOG_IN_H

#include <stdlib.h>

class AnalogIn {
    public:
        AnalogIn(int pin);
        float read();
        int getPin();
    private:
        float currVal;
        int pin;
};

#endif