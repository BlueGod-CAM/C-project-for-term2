#include "Function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

void login()
{
    char name[20],pw[20];
    int i,j=0,k;
    char tem;

        while(i!=0){
            fflush(stdin);
            printf("Please put your user name:");
            gets(name);
            printf("Please put your password:");
            for(k=0;k<20;k++){
                tem=getch();
                if((tem>='a'&&tem<='z')||(tem>='A'&&tem<='Z')||(tem>='0'&&tem<='9')){
                    pw[k]=tem;
                    printf("*");
                }
                else{
                    pw[k]=tem;
                    printf("*");
                }
                if(tem=='\r'){
                    pw[k]='\0';
                    break;
                }
            }

            i=(strcmp(name,"Sophanon"))+(strcmp(pw,"Sophanon123"));
            if(i==0){
                printf("\nSuccessful");
                break;
            }
            if(j==3){
                printf("\nYou have inputted wrong password or user name more than 3 times.\n");
                printf("Block");
                exit(1);
            }
            printf("\nWrong password or user name...\n");
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
    getch();
    system("cls");
    login();
}

