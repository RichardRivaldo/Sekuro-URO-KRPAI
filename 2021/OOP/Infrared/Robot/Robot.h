#ifndef ROBOT_H
#define ROBOT_H

#include <stdlib.h>
#include "../Infrared/Infrared.h"
using namespace std;

class Robot{
    private:
        Infrared In1;
        Infrared In2;
        Infrared In3;
        Infrared In4;
    public:
        // Constructor
        Robot(int pin1, int pin2, int pin3, int pin4);

        // Getter
        Infrared getInfrared(int Infrared);
        int getInfraredPin(int Infrared);

        // Get Distance
        float getDistance(int Infrared);

        // Read Sensor
        void readInfrared();
};

#endif