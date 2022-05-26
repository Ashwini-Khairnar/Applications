//Program to swap two numbers

#include<stdio.h>
int main()
{
    int x=0,y=0,temp=0;

    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);

    printf("Before swaping: x=%d y=%d \n",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("After swaping: x=%d y=%d ",x,y);

    return 0;
}