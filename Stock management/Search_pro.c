#include "Function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

void search_product()
{
    struct Product pro;
    FILE *fptr;
    char search_id[30];
    int i=1;

    fptr=fopen("Product.bin","rb");

    if(!fptr){
        printf("Error loading\n");
        exit(1);
    }

    fflush(stdin);
    printf("Input the ID to search:");
    gets(search_id);

    printf("No|ID|Name|Category|Description|Company|Year|Price\n");
    while(1==(fread(&pro, sizeof (struct Product),1,fptr))){
        if(strcmp(search_id,pro.id)==0){
            printf("%d|%s|%s|%s|%s|%s|%d|%.2f\n",i,pro.id,pro.name,pro.category,pro.decription,pro.company,pro.year,pro.price);
        }
    }
}
