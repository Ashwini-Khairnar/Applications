//Accept number and return the reverse  number
//Input : 127
//Output : 721


#include<stdio.h>

int ReverseNumber(int iNo)
{
    int iDigit = 0;
    int iRev = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10; 
        iRev = iRev * 10 + iDigit;
        iNo = iNo /10;
    }
    return iRev; 
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = ReverseNumber(iValue);

    printf("Reverse of a  given number is %d",iRet);
    return 0;
}
