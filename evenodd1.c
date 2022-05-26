//Program to check whether number is even or odd without using % and & operator

#include<stdio.h>
int main()
{
    int a=0;
     printf("Enter number: ");
     scanf("%d",&a);

     if(a/2*2==a)
        printf("Even number..");
    else 
        printf("Odd number: ");
    return 0;
}