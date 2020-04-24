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
void update();
void sale();

void system_management()
{
    int opt;
    do{
        system("cls");
        printf("=====Menu=====\n");
        printf(">>>1.Create\n");
        printf(">>>2.Read\n");
        printf(">>>3.Update\n");
        printf(">>>4.Delete\n");
        printf(">>>5.Search\n");
        printf(">>>6.Sorting the category\n");
        printf(">>>7.Exit\n");
        printf("Choose one(1-7):");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            {
                product();
                break;
            }
        case 2:
            {
                read();
                break;
            }
        case 3:
            {
                update();
                break;
            }
        case 4:
            {
                delete_pro();
                break;
            }
        case 5:
            {
                search();
                break;
            }
        case 6:
            {
                sorting();
                break;
            }
        case 7:
            {
                exit(1);
            }
        default:
            {
                printf("You input the invalid number.");
                break;
            }
        }
        printf("Enter the key to continue\n");
    }
    while(getch()==13);
}
