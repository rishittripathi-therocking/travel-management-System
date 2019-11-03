#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "data.h"
#include "ticketing.h"
#include "Localtravel.c"
#include "StayInhotel.c"
#include "Extraactivities.c"
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
  system("cls");
int Total_Price=price_Extra+price_local+price_stay+price_ticket;
printf("NOW GST WILL BE ADDED TO 5% YOUR PRICE\n\n");
Total_Price+=((5*Total_Price)/100);
printf("PRICE For TICKET= %d\n",price_ticket);
printf("PRICE For STAY= %d\n",price_stay);
printf("PRICE For LOCAL TRAVEL= %d\n",price_local);
printf("PRICE For EXTRA= %d\n\n\n",price_Extra);
char datto[200];
   char ch;
   int d=0,i=0;
FILE *fp;
fp=fopen("data.txt","r+");
      while(ch!='.' && ch!=EOF)

  {

    ch = getc(fp);

    if(ch=='\n')

    {

      d++;

    }



      datto[i++]=ch;


  }
  datto[i-1]='\0';

printf("%s\n\n\n\n",datto);
fclose(fp);

char datto1[200];
   char ch1;
   int d1=0,i1=0;
fp=fopen("destination.txt","r+");
      while(ch1!='.' && ch1!=EOF)

  {

    ch1 = getc(fp);

    if(ch1=='\n')

    {

      d1++;

    }



      datto1[i1++]=ch;


  }
  datto1[i1-1]='\0';

printf("%s\n\n\n\n",datto1);
fclose(fp);

char datto2[200];
   char ch2;
   int d2=0,i2=0;
fp=fopen("activity.txt","r+");
      while(ch2!='.' && ch2!=EOF)

  {

    ch2 = getc(fp);

    if(ch2=='\n')

    {

      d2++;

    }



      datto2[i2++]=ch;


  }
  datto2[i2-1]='\0';

printf("%s\n\n\n\n",datto2);
  printf("YOUR TOTAL PRICE AFTER ADDING GST IS IS=RS %d\n\n\n\n",Total_Price);
}
