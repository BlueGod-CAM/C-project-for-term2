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
};
struct stock
{
    char id[50];
    int aop; //amount of product
    float price;
};

void update_product();
void update_instock();
void search_instock();
void search_product();
void read_stock();
void read_all();
void productinfo();
void interface();
void instock();
void delete_stock();
void delete_pro();
void system_management();
void sale();
#endif
