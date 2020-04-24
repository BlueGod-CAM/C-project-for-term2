#include "Function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

void delete_pro()
{
    struct Product pro;
    FILE *fptr,*tem;
    char search_id[30];
    int found=0;

    fptr=fopen("Product.bin","rb");
    tem=fopen("Tem.bin","wb");

    if(!(fptr&&tem)){
        printf("Error loading\n");
        exit(1);
    }

    fflush(stdin);
    printf("Input the ID to search:");
    gets(search_id);

    while(fread(&pro, sizeof (struct Product), 1, fptr)==1){
        if(strcmp(pro.id,search_id)==0){
            printf("ID %s have been deleted.......\n",search_id);
            found=1;
        }
        else{
            fwrite(&pro,sizeof (struct Product),1,tem);
        }
    }

    if(found==0){
        printf("ID %s is not found....\n",search_id);
    }

    fclose(fptr);
    fclose(tem);

    remove("Product.bin");
    rename("Tem.bin","Product.bin");

}
