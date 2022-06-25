//Accept number and return summation of digits
#include<stdio.h>
//Input : 123      521         1236
//Output: 6         8            12  

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10; 
        iSum = iSum + iDigit;
        iNo = iNo /10;
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = SumDigits(iValue);

    printf("Sum of digits in given number are %d\n", iRet);
    return 0;
}
