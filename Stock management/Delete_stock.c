#include "Function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void delete_stock()
{
    struct stock pro;
    FILE *fptr,*tem;
    char search_id[30];

    fptr=fopen("Stock.bin","rb");
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
            printf("ID %s have been deleted",search_id);
        }
        else{
            fwrite(&pro,sizeof (struct stock),1,tem);
        }
    }

    fclose(fptr);
    fclose(tem);

    remove("Stock.bin");
    rename("Temporary.bin","Stock.bin");
}
