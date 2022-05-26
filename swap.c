//Program to swap two numbers without third variable

#include<stdio.h>
int main()
{
    int x=0,y=0;

    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);

    printf("Before swaping: x=%d y=%d \n",x,y);
    
    x=x+y;
    y=x-y;
    x=x-y;
    
    printf("After swaping: x=%d y=%d ",x,y);

    return 0;
}