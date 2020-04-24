#include "Function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

void read();
void product();
void delete_pro();
void login();
void interface();
void search();
void sorting();
void system_management();
void update();
void sale();
void add();

int main()
{
    system("Color E1");

    int opt;
    interface();


    printf("==============Stock Management===============\n");
    do
    {
        system("cls");
        printf("==============System===============\n");
		printf("||         1.Stock Management    ||\n");
		printf("||         2.Sale System         ||\n");
		printf("||         3.Add Product         ||\n");
		printf("||         4.Exit                ||\n");
		printf("===================================\n");
		printf("Please choose one:");
		scanf("%d",&opt);
		switch(opt)
		{
        case 1:
            {
                system("cls");
                login();
                getch();
                system("cls");
                system_management();
                break;
            }
        case 2:
            {
                sale();
                break;
            }
        case 3:
            {
                add();
                break;
            }
        case 4:
            {
                exit(1);
            }
        default:
            {
                printf("You input the invalid number.");
                break;
            }
		}
		printf("Please enter a key to continue\n");
    }
    while(getch()==13);

}

void login()
{
    char name[20],pw[20];
    int i,j=1,k;
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
                printf("\nYou have inputted wrong password or user name 3 times.\n");
                printf("Block");
                exit(1);
            }
            printf("\nWrong password or user name...\n");
            printf("Please try again\n");
            j++;
        }
}
