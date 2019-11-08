//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//#include<stdlib.h>

extern void data()
{//SetColor(11);
    ClearConsoleToColors(11,15);
system("cls");
FILE *fp;
  printf("______________________________________________________________________________________\n");
  printf("______________________________________________________________________________________\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("||                              Enter Your choice:-                                 ||\n");
  printf("||                                1:- Enter your data                               ||\n");
  printf("||                                2:- Display your Data                             ||\n");
  printf("||                                3:- Exit                                          ||\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("______________________________________________________________________________________\n");
  printf("______________________________________________________________________________________\n");
  int choice,noofdays,Noofpassenger,noofadults;
  char datto[200];
   char ch;

  while(1){
        int i=0,d=0;
        printf("ENTER YOUR CHOICE NOW\n");
        scanf("%d",&choice);
    switch(choice){
    case 1:
        fp=fopen("data.txt","w+");
        printf("ENTER NO of passengers\n");
        scanf("%d",&Noofpassenger);
        fprintf(fp,"NO OF PASSENGERS=%d\n",Noofpassenger);
        printf("ENTER NO OF Adults Less than passengers\n");
        scanf("%d",&noofadults);

        while(1){
        if(noofadults<=Noofpassenger){
        fprintf(fp,"NO OF ADULTS=%d\n",noofadults);
        break;
        }
        else{
            printf("Please enter adults less than passenger");
            scanf("%d",&noofadults);
        }
        }
        printf("ENTER NO of Days\n");
        scanf("%d",&noofdays);

        fprintf(fp,"NO OF DAYS=%d\n",noofdays);
        system("cls");

        printf("______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        printf("||                                                                                  ||\n");
        printf("||                                                                                  ||\n");
        printf("||                                                                                  ||\n");
        printf("||                              Enter Your choice:-                                 ||\n");
        printf("||                                1:- Enter your data                               ||\n");
        printf("||                                2:- Display your Data                             ||\n");
        printf("||                                3:- Exit                                          ||\n");
        printf("||                                                                                  ||\n");
        printf("||                                                                                  ||\n");
        printf("______________________________________________________________________________________\n");
        printf("______________________________________________________________________________________\n");
        fclose(fp);
        break;
case 2:
    system("cls");
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

printf("%s",datto);
fseek(fp,0,SEEK_SET);
  printf("______________________________________________________________________________________\n");
  printf("______________________________________________________________________________________\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("||                              Enter Your choice:-                                 ||\n");
  printf("||                                1:- Enter your data                               ||\n");
  printf("||                                2:- Display your Data                             ||\n");
  printf("||                                3:- Exit                                          ||\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("______________________________________________________________________________________\n");
  printf("______________________________________________________________________________________\n");



    break;

    }
    if(choice==3){
            fclose(fp);
        break;
    }
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

}
