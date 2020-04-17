#include "Function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

void search_instock()
{
    FILE *fptr,*show,*tem;
    struct Product pro;
    struct stock prod;
    int i=1;
    char search_id[30];

    fptr=fopen("Product.bin","rb");
    show=fopen("Stock.bin","rb");
    tem=fopen("Temporary.bin","wb");

    if(!(fptr||show||tem)){
        printf("Error loading\n");
        exit(1);
    }

    fflush(stdin);
    printf("Input the ID to search:");
    gets(search_id);

    while(fread(&prod,sizeof (struct stock),1,show)==1){
        if(strcmp(prod.id,search_id)==0){
            fwrite(&prod,sizeof (struct stock),1,tem);
        }
    }

    printf("No|ID|Name|Category|Description|Company|Year|Price\n");
    while(1==(fread(&pro, sizeof(struct Product),1,fptr)&&fread(&prod, sizeof (struct stock),1,tem))){
        if(strcmp(pro.id,prod.id)==0){
            printf("%d|%s|%s|%s|%s|%s|%d\%d|%.2f\n",i,pro.id,pro.name,pro.category,pro.decription,pro.company,pro.year,prod.aop,prod.price);
        }
    }

    fclose(fptr);
    fclose(show);
    fclose(tem);

    printf("Done......\n");

}
