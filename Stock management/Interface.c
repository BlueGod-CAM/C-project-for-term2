#include "Function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void login()
{
    char name[20],pw[20];
    int i,j=0;

        while(i!=0){
            fflush(stdin);
            printf("Please put your user name:");
            gets(name);
            fflush(stdin);
            printf("Please put your password:");
            gets(pw);
            i=(strcmp(name,"Sophanon"))+(strcmp(pw,"Sophanon123"));
            if(i==0){
                printf("Successful");
                break;
            }
            if(j==3){
                printf("You have inputted wrong password or user name more than 3 times.\n");
                printf("Block");
                exit(1);
            }
            printf("Wrong password or user name...\n");
            printf("Please try again\n");
            j++;
        }
}


void interface()
{
    printf("========================================\n");
    printf("        Welcome to NIPTICT\n");
    printf("      Here is stock management\n");
    printf("========================================\n");
    time_t current_time;
    struct tm *local_time;
    current_time = time(NULL);
    local_time = localtime(&current_time);
    printf("The time at Cambodia is: %s", asctime(local_time));
    getch();
    system("cls");
    login();
}

