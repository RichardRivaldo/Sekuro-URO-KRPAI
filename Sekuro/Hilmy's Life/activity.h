#ifndef _ACTIVITY_H_
#define _ACTIVITY_H_
#include <stdio.h>

typedef struct
{
  int Happiness,Hygiene,Social,Health,Money;
  char * name;
} activity;
activity build(char * name,int Happiness,int Hygiene,int Social,int Health,int Money);
void printActivity(activity ac);

#endif
