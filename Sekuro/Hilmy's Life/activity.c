#include "activity.h"
#include <string.h>

activity build(char * name,int Happiness,int Hygiene,int Social,int Health,int Money)
{
  activity ac;
  ac.Happiness = Happiness;
  ac.Hygiene = Hygiene;
  ac.Social = Social;
  ac.Health = Health;
  ac.Money = Money;
  ac.name = name;
  return ac;
}
void printActivity(activity ac){
    if(strlen(ac.name) > 10){printf("%s\t[ ", ac.name);}
    else {printf("%s\t\t[ ", ac.name);}
    if(ac.Happiness > 0) printf("+%d Happiness ", ac.Happiness);
    if(ac.Happiness < 0) printf("%d Happiness ", ac.Happiness);

    if(ac.Hygiene > 0) printf("+%d Hygiene ", ac.Hygiene);
    if(ac.Hygiene < 0) printf("%d Hygiene ", ac.Hygiene);

    if(ac.Social > 0) printf("+%d Social ", ac.Social);
    if(ac.Social < 0) printf("%d Social ", ac.Social);

    if(ac.Health > 0) printf("+%d Health ", ac.Health);
    if(ac.Health < 0) printf("%d Health ", ac.Health);

    if(ac.Money > 0) printf("+%d$ ", ac.Money);
    if(ac.Money < 0) printf("%d$ ", ac.Money);

    printf("]");
}
