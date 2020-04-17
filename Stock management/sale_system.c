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
    struct stock pro;

    fptr=fopen("Stock.bin","rb");
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

    for(i=0;i<n;i++){
        oneproduct=0;
        while(fread(&pro,sizeof (struct stock),1,fptr)==1){
            if(strcmp(pro.id,sID[i])==0){
                oneproduct=pro.price*aop[i];
                pro.aop=pro.aop-aop[i];
                fwrite(&pro,sizeof (struct stock),1,tem);
                j[i]=1;
            }
            else{
                fwrite(&pro,sizeof(struct stock),1,tem);
            }
        }
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

    remove("Stock.bin");
    rename("Temporary.bin","Stock.bin");
}
