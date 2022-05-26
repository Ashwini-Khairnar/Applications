#include<stdio.h>
//int global = 10;

int main()
{
    extern int i;
    extern void fun();

    printf("Value of extern variable i is %d\n", i);
    fun();
    return 0;
}