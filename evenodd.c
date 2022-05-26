#include<stdio.h>
int main()
{
    int iNo=0;

    printf("Enter number: ");
    scanf("%d",&iNo);

    if(iNo%2==0)
        printf("Number is EVEN.");
    else
        printf("Number is ODD.");
    return 0;
}