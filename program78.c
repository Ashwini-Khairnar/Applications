//Input : 6                     5
//Output:  1 * 3 * 5 *           1  *   2    *   3   
//Time Complexity: 2n 

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d\t",iCnt);
        }    
        else
        {
            printf("*\t");
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the value:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}