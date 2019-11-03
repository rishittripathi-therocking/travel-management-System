#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "data.h"
#include "ticketing.h"
//#include "Localtravel.c"
//#include "StayInhotel.c"
//#include "Extraactivities.c"
//#include "data.txt"
int main()
{
  printf("________________________________________________________________________________________\n");
  printf("________________________________________________________________________________________\n");
  printf("||                                                                                    ||\n");
  printf("||                                                                                    ||\n");
  printf("||                                                                                    ||\n");
  printf("||                                                                                    ||\n");
  printf("||                         WELCOME TO ARMIS TOURS AND TRAVELS                         ||\n");
  printf("||                                                                                    ||\n");
  printf("||                                Enter your choices:                                 ||\n");
  printf("||                                 1:-  ENTER YOUR DATA                               ||\n");
  printf("||                                 2:-  TICKETING                                     ||\n");
  printf("||                                 3:-  STAY IN HOTEL/RESORT                          ||\n");
  printf("||                                 4:-  LOCAL TRAVEL                                  ||\n");
  printf("||                                 5:-  EXTRA ACTIVITIES                              ||\n");
  printf("||                                 6:-  EXIT                                          ||\n");
  printf("||                                                                                    ||\n");
  printf("||                                                                                    ||\n");
  printf("||                                                                                    ||\n");
  printf("________________________________________________________________________________________\n");
  printf("________________________________________________________________________________________\n");
  int choice,price_ticket=0,price_stay=0;
while(1){
        scanf("%d",&choice);
  switch(choice){
     case 1: data();break;
     case 2: price_ticket+=ticketing();break;
     case 3:price_stay+=stay_hotel();break;
      case 4:price_local+=Local_travel();break;
  }
  if(choice==6){
    break;
  }
}
printf("YOUR TOTAL TRAVEL COST IS=%d\n\n\n\n\n\n",price_ticket,price_hotel);
}
