#include "Infrared.h"
#include <stdio.h>
#include <stdlib.h>

Infrared::Infrared(int pin):Input(pin){}

AnalogIn Infrared::getAnalogIn(){
    return Input;
}

float Infrared::getInDistance(){
    return Input.read();
}

int Infrared::getInPin(){
    return Input.getPin();
}


/* int main(){
    Infrared In1(12);
    printf("PIN: %d", In1.getInPin());
    printf("READ: %.3f", In1.getInDistance());
    return 0;
} */