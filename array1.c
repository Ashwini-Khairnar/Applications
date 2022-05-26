#include<stdio.h>
int main()
{
    int a[5];    //array definition

    //array initialisation
    //member by member initialisation

    a[0]=10;
    a[1]=20;
    a[2]=30;
    a[3]=40;
    a[4]=50;

    //member initialisation list
    int b[5]={10,20,30,40,50};

    int c[]={10,20,30,40,50};

   // int d[];     Error

    return 0;
}