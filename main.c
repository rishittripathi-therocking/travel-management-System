#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include "data.h"
#include "ticketing.h"
#include "Localtravel.h"
#include "StayInhotel.h"
#include "Extraactivities.h"

//#include "data.txt"
void ClearConsoleToColors(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
     //This is used to get the handle to current output buffer.

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     //This is used to reset the carat/cursor to the top left.

     COORD coord = {0, 0};
                      //This is a return value indicating how many characterss were written
                        //   It is not used but we need to capture this since it will be
                          //   written anyway (passing NULL causes an access violation).

     DWORD count;

                                   //This is a structure containing all the console info
                          // It is used here to find the size of the console.

     CONSOLE_SCREEN_BUFFER_INFO csbi;
                     //Now the current color will be set by this handle

     SetConsoleTextAttribute(hStdOut, wColor);

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                              //This fills the buffer with a given character (in this case 32=space).
          FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);

          FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count );
                              //This will set our cursor position for the next print statement
          SetConsoleCursorPosition(hStdOut, coord);
     }
}
int main()
{
    ClearConsoleToColors(2,15);
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
}
