#include<stdio.h>
extern int i;
extern int j;
extern int x;
extern int y=151;
//fextern int y;
extern void fun();
void gun();

int main()
{

    printf("Inside Main");
    fun();
    gun();
    return 0;
}

int i=21;
void gun()
{
    printf("Inside gun");
}