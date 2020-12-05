#include "status.h"
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
#include "activity.h"

Status beginStatus(){
    Status h; //Status hilmys
    h.alive = true;
    h.health = 100;
    h.money = 100;
    h.social = 100;
    h.hygiene = 100;
    h.happiness = 100;
    return h;
}

void showStatus(Status h){
    printf("Keadaan Hilmys");
    printf("\nHealth : %d/100",h.health);
    printf("\nMoney : %d/100",h.money);
    printf("\nSocial : %d/100",h.social);
    printf("\nHygiene : %d/100",h.hygiene);
    printf("\nHappiness : %d/100",h.happiness);
}

bool action(Status *h,activity ac){
    if(h->money<abs(ac.Money)){
        return false;
    }
    int z = 100-h->happiness;
    int y = z % 10;
    int x= 100-h->hygiene;
    int w= x % 15;
    int c= 100-h->social;
    int d= c % 20;
    h->health -= (c-d)/20+(z-y)/10 - ac.Health;
    h->money += ac.Money;
    h->social += ac.Social-(x-w)/15;
    h->hygiene += ac.Hygiene;
    h->happiness += ac.Happiness;
    if(h->happiness > 100){
        h->happiness=100;
    }
    if(h->social > 100){
        h->social=100;}
    if(h->hygiene > 100){
        h->hygiene=100;}
    if(h->health > 100){
        h->health=100;}
    if(h->health<=0){
        h->alive=false;
    }
    return true;
}
