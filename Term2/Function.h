#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char fnp[30];//File name of Product
char fnis[30];//File name of in stock product;

struct Product
{
    char id[50];
    char name[100];
    char decription[100];
    char category[100];
    char company[100];
    int year;
    float price;
    int aop;
};

void add();
void read();
void product();
void delete_pro();
void login();
void interface();
void search();
void sorting();
void system_management();
void update();
void sale();

#endif
