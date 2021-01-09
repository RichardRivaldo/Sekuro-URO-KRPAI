#include <stdio.h>
#include <cmath>
#include "AnalogIn/AnalogIn.h"
#include "Infrared/Infrared.h"
#include "Robot/Robot.h"

// Change this according to your work environment
// Windows
#include <windows.h>
// Unix
// #include <unistd.h>

// Constants
const float cpower = -1.349f;
const float cnum = 330377;
const unsigned int millisecondOrder = 1000;
const unsigned int delayms = 100;

// Headers
float calculateDistance(float rawAnalogReading);

// Main program
int main() {
    Robot Robot(12, 13, 14, 15);

    while (true) {
      Robot.readInfrared();

      // Change this according to your work environment
      // Windows
      Sleep(delayms);
      // Unix
      // usleep(delayms * millisecondOrder); //sleeps for 3 second
    }

    return 0;
}

// Function implementation
float calculateDistance(float rawAnalogReading) {
  float rawIrReading = rawAnalogReading*3300;
  return cnum*pow(rawIrReading, (cpower));
}
