#include "Function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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
        default:
            {
                printf("You input the invalid number.");
            }
        }
        printf("Enter the key to continue\n");
    }
    while(getch()==13);
}
