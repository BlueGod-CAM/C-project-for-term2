#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "Function.h"

//C:\Users\DRAGON\Documents\GitHub\C-project-for-term2\Stock management\Stock management\main.c

void delete_pro();
void delete_stock();
void instock();
void interface();
void productinfo();
void productinfo();
void read_all();
void read_stock();
void search_product();
void search_instock();
void update_instock();
void update_product();
void system_management();
void sale();
void sorting();


int main()
{
    system("Color E1");

    int opt;
    interface();
    getchar();

    printf("==============Stock Management===============\n");
    do
    {
        system("cls");
        printf("==============System===============\n");
		printf("||         1.Stock Management    ||\n");
		printf("||         2.Sale System         ||\n");
		printf("||         3.Exit                ||\n");
		printf("===================================\n");
		printf("Please choose one:");
		scanf("%d",&opt);
		switch(opt)
		{
        case 1:
            {
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
                exit(1);
            }
        default:
            {
                printf("You input the invalid number.");
            }
		}
		printf("Please enter a key to continue\n");
    }
    while(getch()==13);

}
