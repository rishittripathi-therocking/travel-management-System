extern int Extra(){
    //SetColor(13);
    ClearConsoleToColors(13,15);
    system("cls");
int choice,price=0;
  int passengers,arr[5],i=0;
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
  passengers=arr[0];
fclose(fp);


FILE *fp1=fopen("activity.txt","w");
char act[6][50]={"SCUBA DIVING","CAMPING","SKY GLIDING","MOUNTAIN BIKING ","ICE SKATING","HIKING"};
printf("________________________________________________________________________________________\n");
  printf("________________________________________________________________________________________\n");
  printf("||                                                                                    ||\n");
  printf("||                                                                                    ||\n");
  printf("||                                                                                    ||\n");
  printf("||                                                                                    ||\n");
  printf("||               CHOOSE YOUR EXTRA ACTIVITIES HERE (RS 200/PERSON)  :-                ||\n");
  printf("||                                                                                    ||\n");
  printf("||                                                                                    ||\n");
  printf("||                                 1:-  SCUBA DIVING                                  ||\n");
  printf("||                                 2:-  CAMPING                                       ||\n");
  printf("||                                 3:-  SKY GLIDING                                   ||\n");
  printf("||                                 4:-  MOUNTAIN BIKING                               ||\n");
  printf("||                                 5:-  ICE SKATING                                   ||\n");
  printf("||                                 6:-  HIKING                                        ||\n");
  printf("||                                 7:-  EXIT                                          ||\n");
  printf("||                                                                                    ||\n");
  printf("||                                                                                    ||\n");
  printf("________________________________________________________________________________________\n");
  printf("________________________________________________________________________________________\n");
  while(1){
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:price+=200*passengers;fprintf(fp1,"YOU ADDED = %s\n",act[0]);break;
        case 2:price+=200*passengers;fprintf(fp1,"YOU ADDED = %s\n",act[1]);break;
        case 3:price+=200*passengers;fprintf(fp1,"YOU ADDED = %s\n",act[2]);break;
        case 4:price+=200*passengers;fprintf(fp1,"YOU ADDED = %s\n",act[3]);break;
        case 5:price+=200*passengers;fprintf(fp1,"YOU ADDED = %s\n",act[4]);break;
        case 6:price+=200*passengers;fprintf(fp1,"YOU ADDED = %s\n",act[5]);break;

    }
    if(choice==7){
       fclose(fp1);
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
  return price;

}
