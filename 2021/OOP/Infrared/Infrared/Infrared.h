#ifndef INFRARED_H
#define INFRARED_H

#include <stdlib.h>
#include "../AnalogIn/AnalogIn.h"
using namespace std;

class Infrared{
    private:
        AnalogIn Input;
    public:
        // Constructor
        Infrared(int pin);

        // Getter
        AnalogIn getAnalogIn();
        int getInPin();
        
        // Get Distance
        float getInDistance();

};


#endif