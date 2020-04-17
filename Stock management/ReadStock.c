#include "Function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

void read_stock()
{
    FILE *fptr,*show;
    struct Product pro;
    struct stock prod;
    int i=1;

    fptr=fopen("Product.bin","rb");
    show=fopen("Stock.bin","rb");

    if(!(fptr||show)){
        printf("Error loading\n");
        exit(1);
    }

    printf("No|ID|Name|Category|Description|Company|Year|Amount in stock|Price\n");
    while((1==fread(&pro, sizeof(struct Product),1,fptr))&&(1==fread(&prod, sizeof (struct stock),1,show))){
        if(strcmp(pro.id,prod.id)==0){
            printf("%d|%s|%s|%s|%s|%s|%d|%d|%.2f\n",i,pro.id,pro.name,pro.category,pro.decription,pro.company,pro.year,prod.aop,prod.price);
            i++;
        }
    }

    fclose(fptr);
    fclose(show);

    printf("Done......\n");

}
