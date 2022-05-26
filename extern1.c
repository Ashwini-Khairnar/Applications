#include<stdio.h>

int global=10;

int main()
{
    extern int i;
    extern void fun();

    //we can't 
    extern int i=20;

    printf("Value of extern variable i is %d", i);

    fun();
    return 0;
}