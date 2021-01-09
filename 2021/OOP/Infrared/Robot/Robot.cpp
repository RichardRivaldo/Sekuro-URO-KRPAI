#include "Robot.h"
#include <stdio.h>
#include <stdlib.h>

Robot::Robot(int pin1, int pin2, int pin3, int pin4):In1(pin1), In2(pin2), In3(pin3), In4(pin4){}

Infrared Robot::getInfrared(int Infrared){
    if(Infrared == 1){
        return In1;
    }
    else if(Infrared == 2){
        return In2;
    }
    else if(Infrared == 3){
        return In3;
    }
    else{
        return In4;
    }    
}

int Robot::getInfraredPin(int Infrared){
    if(Infrared == 1){
        return In1.getInPin();
    }
    else if(Infrared == 2){
        return In2.getInPin();
    }
    else if(Infrared == 3){
        return In3.getInPin();
    }
    else{
        return In4.getInPin();
    }
}

float Robot::getDistance(int Infrared){
    if(Infrared == 1){
        return In1.getInDistance();
    }
    else if(Infrared == 2){
        return In2.getInDistance();
    }
    else if(Infrared == 3){
        return In3.getInDistance();
    }
    else{
        return In4.getInDistance();
    }
}

void Robot::readInfrared(){
    printf("\t%9.3f\t", getDistance(1));
    printf("%9.3f\t", getDistance(2));
    printf("%9.3f\t", getDistance(3));
    printf("%9.3f\n", getDistance(4));
}

/* int main(){
    Robot Robot1(12, 13, 14, 15);

    printf("PIN In1: %d\n", Robot1.getInfraredPin(1));
    printf("PIN In3: %d\n", Robot1.getInfraredPin(3));
    printf("READ in4: %.3f", Robot1.getDistance(4));
} */