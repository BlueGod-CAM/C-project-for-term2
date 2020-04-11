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

void create()
{
    int opt;

    printf(">>>1.Add information to the product\n");
    printf(">>>2.Add in stock product\n");
    printf("Please choose one(1-2):");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
        {
            productinfo();
            break;
        }
    case 2:
        {
            instock();
            break;
        }
    default:
        {
            printf("You input the invalid number.");
        }
    }
}

void read()
{
    int opt;

    printf(">>>1.All product\n");
    printf(">>>2.Product in stock\n");
    printf("Please choose one(1-2):");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
        {
            read_all();
            break;
        }
    case  2:
        {
            read_stock();
            break;
        }
    default:
        {
            printf("You input the invalid number\n");
        }
    }
}

void update()
{
    int opt;

    printf(">>>1.Update the product\n");
    printf(">>>2.Update the product in stock\n");
    printf("Choose one(1-2):");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
        {
            update_product();
            break;
        }
    case 2:
        {
            update_instock();
            break;
        }
    default:
        {
            printf("You input the invalid number\n");
        }
    }
}

void delete_file()
{
    int opt;

    printf(">>>1.Delete product\n");
    printf(">>>2.Delete product in stock\n");
    printf("Choose one(1-2):");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
        {
            delete_pro();
            break;
        }
    case 2:
        {
            delete_stock();
            break;
        }
    default:
        {
            printf("You input the invalid number.");
        }
    }

}

void search_file()
{
    int opt;

    printf(">>>1.Search product\n");
    printf(">>>2.Search product in stock\n");
    printf("Choose one(1-2):");
    scanf("%d",&opt);

    switch(opt)
    {
    case 1:
        {
            search_product();
            break;
        }
    case 2:
        {
            search_instock();
            break;
        }
    }
}

int main()
{
    int opt;
    interface();
    getch();
    system("cls");
    login();
    printf("==============Stock Management===============\n");
    do{
        system("cls");
        printf("=====Menu=====\n");
        printf(">>>1.Create\n");
        printf(">>>2.Read\n");
        printf(">>>3.Update\n");
        printf(">>>4.Delete\n");
        printf(">>>5.Search\n");
        printf(">>>6.Exit\n");
        printf("Choose one(1-6):");
        scanf("%d",&opt);
        switch(opt)
        {
        case 1:
            {
                create();
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
                delete_file();
                break;
            }
        case 5:
            {
                search_file();
                break;
            }
        case 6:
            {
                exit(1);
            }
        }
        printf("Press enter to continues........\n");
    }
    while(getch()==13);
}
