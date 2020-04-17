#include "Function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

void productinfo()
{
    FILE *fptr;
    struct Product pro;
    int n;
    int i;

    fptr=fopen("Product.bin","ab");

    if(!fptr){
        printf("Error loading\n");
        exit(1);
    }
    printf("Input the amount of product:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("=====Product %d=====\n",i+1);
        fflush(stdin);
        printf("ID=");
        gets(pro.id);
        fflush(stdin);
        printf("Name=");
        gets(pro.name);
        fflush(stdin);
        printf("Category=");
        gets(pro.category);
        fflush(stdin);
        printf("Description=");
        gets(pro.decription);
        fflush(stdin);
        printf("Company=");
        gets(pro.company);
        printf("Year=");
        scanf("%d",&pro.year);
        printf("Price=");
        scanf("%f",&pro.price);
        fwrite(&pro,sizeof (struct Product),1,fptr);
    }
    fclose(fptr);
    printf("Done.......\n");
}
