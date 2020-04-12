#include "Function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void update_product()
{
    struct Product pro;
    FILE *fptr,*tem;
    char search_id[30];
    int i=0;
    fptr=fopen("Product.bin","rb");
    tem=fopen("Temporary.bin","wb");

    if(!(fptr&&tem)){
        printf("Error loading\n");
        exit(1);
    }

    fflush(stdin);
    printf("Input the ID to search:");
    gets(search_id);

    while(fread(&pro, sizeof (struct Product), 1, fptr)==1){
        if(strcmp(pro.id,search_id)==0){
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
            fwrite(&pro,sizeof (struct Product),1,tem);
        }
        else{
            fwrite(&pro,sizeof (struct Product),1,tem);
        }
    }

    fclose(fptr);
    fclose(tem);

    remove("Product.bin");
    rename("Temporary.bin","Product.bin");

}
