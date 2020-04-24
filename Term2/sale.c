#include "Function.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

void sale()
{
    int i,n,aop[30],j[30];
    char sID[30][30];
    float total=0,oneproduct=0;
    FILE *fptr,*tem;
    struct Product pro;

    fptr=fopen("Product.bin","rb");
    tem=fopen("Temporary.bin","wb");

    if(!fptr){
        printf("There is a error......\n");
        exit(1);
    }

    printf("Please input the amount of product that buy:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        fflush(stdin);
        printf("Please input ID of product:");
        gets(sID[i]);
        printf("Please input the amount of product %s:",sID[i]);
        scanf("%d",&aop[i]);
    }


    while(fread(&pro,sizeof (struct Product),1,fptr)==1){
        oneproduct=0;
        for(i=0;i<n;i++){
            if(strcmp(pro.id,sID[i])==0){
                oneproduct=pro.price*aop[i];
                pro.aop=pro.aop-aop[i];
                j[i]=1;
            }
        }
        fwrite(&pro,sizeof (struct Product),1,tem);
        total+=oneproduct;
    }
    for(i=0;i<n;i++){
        if(j[i]!=1){
            printf("Product ID %s does not have\n",sID[i]);
        }
    }
    printf("Total price:%.2f\n",total);

    fclose(fptr);
    fclose(tem);

    remove("Product.bin");
    rename("Temporary.bin","Product.bin");
}
