#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "data.h"
#include "ticketing.h"
#include "Localtravel.h"
#include "StayInhotel.h"
#include "Extraactivities.h"
//#include "data.txt"
int main()
{
  printf("                ________________________________________________________________________________________\n");
  printf("                ________________________________________________________________________________________\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                         WELCOME TO ARMIS TOURS AND TRAVELS                         ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                                Enter your choices:                                 ||\n");
  printf("                ||                                 1:-  ENTER YOUR DATA                               ||\n");
  printf("                ||                                 2:-  TICKETING                                     ||\n");
  printf("                ||                                 3:-  STAY IN HOTEL/RESORT                          ||\n");
  printf("                ||                                 4:-  LOCAL TRAVEL                                  ||\n");
  printf("                ||                                 5:-  EXTRA ACTIVITIES                              ||\n");
  printf("                ||                                 6:-  EXIT                                          ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ||                                                                                    ||\n");
  printf("                ________________________________________________________________________________________\n");
  printf("                ________________________________________________________________________________________\n");
  int choice,price_ticket=0,price_stay=0,price_local=0,price_Extra=0;
while(1){
        scanf("%d",&choice);
  switch(choice){
     case 1: data();break;
     case 2: price_ticket+=ticketing();break;
     case 3:price_stay+=stay_hotel();break;
     case 4:price_local+=Local_travel();break;
     case 5:price_Extra+=Extra();break;
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

char ch1;

  int k=0;

  char str[100];

  fp=fopen("destination.txt","r");



  while(ch1!='.' && ch1!=EOF)

  {

    ch1 = getc(fp);

      str[k++]=ch1;

  }

   fclose(fp);
  str[k-1]='\0';

printf("%s\n\n\n",str);
  int r=0,d2=0;

  char st[100];

  fp=fopen("activity.txt","r");
  fseek(fp,0,SEEK_SET);

char ch2;
  while(ch2!='.' && ch2!=EOF)

  {

    ch2 = getc(fp);


      st[r++]=ch2;

  }

   fclose(fp);
  st[r-1]='\0';

printf("%s\n\n\n",st);
  printf("YOUR TOTAL PRICE AFTER ADDING GST IS IS=RS %d\n\n\n\n",Total_Price);
  printf("THANK YOU FOR USING OUR SERVICES\n\n\n");
  printf("Project BY:-\n\n\n");
  printf("NAME:- RISHIT , ID:- 1811981254\n");
  printf("NAME:- ISHAAN , ID:- 1811981146\n");
  printf("NAME:- SRISHTI , ID:- 1811981311\n");
  printf("NAME:- MANAV , ID:- 1811981177\n");
  printf("NAME:- ANVI , ID:- 1811981064\n\n\n\n\n");
}
