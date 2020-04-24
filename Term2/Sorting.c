#include "Function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

void sorting()
{
    FILE *fptr;
    int i=1;
    char sCa[30];

    fptr=fopen("Product.bin","rb");
    struct Product pro;

    if(!fptr){
        printf("Error loading\n");
        exit(1);
    }

    fflush(stdin);
    printf("Input the category:");
    gets(sCa);

    printf("No|ID|Name|Category|Description|Company|Year|Price|Amount of product\n");
    while(1==fread(&pro,sizeof (struct Product),1,fptr)){
        if(strcmp(pro.category,sCa)==0){
            printf("%d|%s|%s|%s|%s|%s|%d|%.2f|%d\n",i,pro.id,pro.name,pro.category,pro.decription,pro.company,pro.year,pro.price,pro.aop);
            i++;
        }
    }

    fclose(fptr);

    printf("Done......\n");
}
