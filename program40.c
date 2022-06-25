#include<stdio.h>
//Input : 7856      521         12365
//Output: 4          3            5  

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iCnt++;
        iNo = iNo /10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits in given number are %d\n", iRet);
    return 0;
}