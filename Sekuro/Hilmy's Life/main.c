#include <stdio.h>
#include <stdlib.h>
#include "status.h"
#include "activity.h"

int main()
{
    // construct h and all 12 acts
    Status h=beginStatus();
    printf("The objective of the game is to survive until day 30\n");
    printf("If you cannot pay your activity the authorities will arrest you and disassemble you\n");
    printf("To survive you need to have more than 0 health\n");
    printf("Having some of your stats reduced will have negative effect on your health/day drop rate\n ");
    int const a = 10;
    activity ac[a];
    ac[1]=build("Eat",4,-2,-1,2,-5);
    ac[2]=build("Drink",2,-1,0,-3,-3);
    ac[3]=build("Cooking",3,-2,2,2,-2);
    ac[4]=build("Play",5,-2,5,-20,-1);
    ac[5]=build("Study",-3,0,-2,-1,-1);
    ac[6]=build("Rest",2,-1,-1,3,-2);
    ac[7]=build("Take a bath",2,5,0,2,-2);
    ac[8]=build("Reinstall",2,2,-1,15,-25);
    ac[9]=build("Helping human",3,-4,10,-5,-10);
    ac[10]=build("Charge",3,-3,-5,7,-15);

    int day = 1;
    int choice = 0;
    while(day<=30){
        if(h.alive==false){
            printf("RIP");
            break;
        }
        else{
        printf("\nDay %d\n" ,day);
        showStatus(h);
        printf("\n What do you want to do today\n");
        for (int i=1 ; i<a+1 ;i++){
            printActivity(ac[i]);
            printf("\n");
        }
        scanf("%d", &choice);
        while(choice>a || choice<1){
            printf("action not available please enter value between 1 to 10\n");
            scanf("%d", &choice);
        }
        if(action(&h,ac[choice])==true){
            day++;
        }
        else{
            printf("Not enough money you are arrested and disassembled");
            break;
            }

        }

    }
    if(day==31)
       {
           printf("Congratulation you survived till day 30.Thank you for wasting your time");
       }
    return 0;
}

