//#include<stdio.h>
//#include<string.h>
extern int stay_hotel(){
    //SetColor(12);
    ClearConsoleToColors(12,15);
    system("cls");
    int price=0,days,arr[5],i=0;
    char ch;
    FILE *fp=fopen("data","r");
    while(ch!='.' && ch!=EOF)

  {

    ch = getc(fp);
    if(ch=='0' || ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9'){
        arr[i++]=ch-'0';
    }

  }
  days=arr[2];
    printf("                                          WELCOME to our hotel ARMIS\n\n");
    int noofRooms;
    printf("ENTER NUMBER OF ROOMS\n");
    scanf("%d",&noofRooms);
    int season,Package;

  printf("______________________________________________________________________________________\n");
  printf("______________________________________________________________________________________\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("||                     Enter IN WHICH SEASON YOU WAN'T TRAVEL:-                     ||\n");
  printf("||                               1:- JANUARY TO MARCH (RS 300/ROOM 1 Day)           ||\n");
  printf("||                               2:- APRIL  TO JULY   (RS 400/ROOM 1 Day)           ||\n");
  printf("||                               3:- AUGUST TO OCTOBER  (RS 600/ROOM 1 Day)         ||\n");
  printf("||                               4:- NOVEMBER TO DECEMBER  (RS 800/ROOM 1 Day)      ||\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("______________________________________________________________________________________\n");
  printf("______________________________________________________________________________________\n");
 printf("ENTER YOR CHOICE FROM 1-4\n\n");
 scanf("%d",&season);
  switch(season){
  case 1:price+=300*noofRooms*days;break;
  case 2:price+=400*noofRooms*days;break;
  case 3:price+=600*noofRooms*days;break;
  case 4:price+=800*noofRooms*days;break;
  }
  system("cls");
  printf("______________________________________________________________________________________\n");
  printf("______________________________________________________________________________________\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("||                            Enter YOUR PACKAGE:-                                  ||\n");
  printf("||                                1:- EP  (RS 400/Day)                              ||\n");
  printf("||                                2:- CP  (RS 500/Day)                              ||\n");
  printf("||                                3:- AP  (RS 700/Day)                              ||\n");
  printf("||                                4:- MAP (RS 600/Day)                              ||\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("______________________________________________________________________________________\n");
  printf("______________________________________________________________________________________\n");
  printf("YOur Coice");
  scanf("%d",&Package);
  switch(Package){
     case 1:price+=400*noofRooms*days;break;
     case 2:price+=500*noofRooms*days;break;
     case 3:price+=700*noofRooms*days;break;
     case 4:price+=600*noofRooms*days;break;


  }
  system("cls");
printf("\n");
ClearConsoleToColors(2,15);
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
  return price;

}
