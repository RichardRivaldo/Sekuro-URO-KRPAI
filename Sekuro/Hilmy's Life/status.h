#ifndef _STATUS_H_
#define _STATUS_H_

#include <stdio.h>
#include <stdbool.h>

typedef struct{
    int happiness,hygiene,social,health,money;
    bool alive;
} Status;

Status beginStatus();





#endif // STATUS_H
