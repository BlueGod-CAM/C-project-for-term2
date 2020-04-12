#include "Function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void instock()
{
    struct stock pro;
    FILE *fptr;
    int n,i;

    fptr=fopen("Stock.bin","ab");
    if(!fptr){
        printf("Error loading\n");
        exit(1);
    }

    printf("Please input amount of product in stock:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("==========Product %d==========\n",i+1);
        fflush(stdin);
        printf("ID=");
        gets(pro.id);
        printf("Amount of product in stock:");
        scanf("%d",&pro.aop);
        printf("Price=");
        scanf("%f",&pro.price);
        fwrite(&pro, sizeof (struct stock),1,fptr);
    }
    fclose(fptr);
    printf("Done........\n");

}
