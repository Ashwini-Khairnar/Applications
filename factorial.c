#include<stdio.h>
int main()
{
    int num=0,i=1,fact=1;

    printf("Enter number: ");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
        fact*=i;

        printf("factorial is %d",fact);
    
    return 0;
}