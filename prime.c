#include<stdio.h>
int main()
{
    int num=0,i=0, iCnt=0;

    printf("Enter number: ");
    scanf("%d",&num);

    for(i=2; i<num; i++)
    {
        if(num%2==0)
           iCnt++;
    }

    if(iCnt>=1)
        printf("Number is not PRIME.");
    else
        printf("Number is PRIME.");

    return 0;
}