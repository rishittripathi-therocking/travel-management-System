//#include<string.h>
//#include<stdio.h>
//#include<stdlib.h>
//#include "data.txt"
extern int ticketing(){
    system("cls");
  int passengers,adults,price=0,child,arr[5],i=0,choice;
  int size,index;
  char ch;
  FILE *fp=fopen("data.txt","r");
    while(ch!='.' && ch!=EOF)

  {

    ch = getc(fp);
    if(ch=='0' || ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9'){
        arr[i++]=ch-'0';
    }

  }
  size=i;
  char destination_international[5][50]={"AMERICA","MALDIVES","NEW ZEALAND","AUSTRALIA","ENGLAND"};
  int distance_int[5]={3500,1200,2700,2800,3000};
  char destination_domestic[5][50]={"MANALI","MUMBAI","BANGLORE","DARJEELING","SHIMLA"};
  int distance_domestic[5]={395,750,850,880,90};
  char carrier[2][100]={"NATIONAL","INTERNATIONAL"};

  passengers=arr[0];
  adults=arr[1];
  child=passengers-adults;
  fclose(fp);
  printf("______________________________________________________________________________________\n");
  printf("______________________________________________________________________________________\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("||                              Enter Your choice:-                                 ||\n");
  printf("||                                1:- DOMESTIC TRAVEL                               ||\n");
  printf("||                                2:- INTERNATIONAL TRAVEL                          ||\n");
  printf("||                                3:- Exit                                          ||\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("______________________________________________________________________________________\n");
  printf("______________________________________________________________________________________\n");
  FILE *fp1=fopen("destination.text","w+");
  char your_dest[50],your_carrier[50];
  while(1){
    printf("Please Enter Your Choice\n");
    scanf("%d",&choice);
    system("cls");
    switch(choice){
      case 1:printf("Please Enter your destination from these\n");
      for(int i=0;i<5;i++){
          printf("%s\n",destination_domestic[i]);
      }
      printf("\n\n");
      scanf("%s",your_dest);
      system("cls");
      for(int i=0;i<5;i++){
          if(strcmp(your_dest,destination_domestic[i])==0){
            index=i;
            fprintf(fp1,"YOUR DESTINATION=%s\n",your_dest);
            fprintf(fp1,"YOUR DISTANCE=%d\n",distance_domestic[i]);
            break;
          }

      }

      if(distance_domestic[index]<500){
        printf("You are travelling by railway");
        if(distance_domestic[index]<350){
            price+=550*adults;
            price+=300*child;
        }
        else{
            price+=800*adults;
            price+=500*child;
        }
      }
      else{
        printf("You are travelling by air");
       if(distance_domestic[index]<450){
            price+=1200*adults;
            price+=800*child;
        }
        else{
            price+=2500*adults;
            price+=1200*child;
        }


      }

printf("\nYOUR TOTAL COST IS=%d\n",price);
  printf("______________________________________________________________________________________\n");
  printf("______________________________________________________________________________________\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("||                              Enter Your choice:-                                 ||\n");
  printf("||                                1:- DOMESTIC TRAVEL                               ||\n");
  printf("||                                2:- INTERNATIONAL TRAVEL                          ||\n");
  printf("||                                3:- Exit                                          ||\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("______________________________________________________________________________________\n");
  printf("______________________________________________________________________________________\n");
      break;

      case 2:
          printf("Please Enter your destination from these\n");
      for(int i=0;i<5;i++){
          printf("%s\n",destination_international[i]);
      }
      printf("\n\n");
      scanf("%s",your_dest);
      system("cls");
      for(int i=0;i<5;i++){
          if(strcmp(your_dest,destination_international[i])==0){
            index=i;
            fprintf(fp1,"YOUR DESTINATION=%s\n",your_dest);
            fprintf(fp1,"YOUR DISTANCE=%d\n",distance_domestic[i]);

            break;
          }

      }
printf("CHOOSE YOUE CARRIER");
for(int i=0;i<2;i++){
    printf("%s\n",carrier[i]);
}
printf("\n\n");
scanf("%s",&your_carrier);
fprintf(fp1,"YOUR CARRIER=%d\n",your_carrier);
if(strcmp(your_carrier,carrier[0])==0){
        if(distance_int[index]<1500){
    price+=10000*adults;
    price+=7500*child;}

else{
    price+=18000*adults;
    price+=12500*child;
}
}
else{
             if(distance_int[index]<1500){
    price+=16000*adults;
    price+=12500*child;
             }
else{
    price+=30000*adults;
    price+=20500*child;
}
      }

printf("\nYOUR TOTAL COST IS=%d\n",price);
  printf("______________________________________________________________________________________\n");
  printf("______________________________________________________________________________________\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("||                              Enter Your choice:-                                 ||\n");
  printf("||                                1:- DOMESTIC TRAVEL                               ||\n");
  printf("||                                2:- INTERNATIONAL TRAVEL                          ||\n");
  printf("||                                3:- Exit                                          ||\n");
  printf("||                                                                                  ||\n");
  printf("||                                                                                  ||\n");
  printf("______________________________________________________________________________________\n");
  printf("______________________________________________________________________________________\n");
      break;



    }
    if (choice==3){
            fclose(fp1);
        break;
    }
  }

system("cls");
printf("\n");
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
