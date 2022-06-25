//Check whether number is armstrong number or not
//Input: 1634
//Output: 1^4 + 6^4 + 3^4 + 4^4
//Input: 157
//Output: 1^3 + 5^3 + 7^3

#include<stdio.h>
#include<stdbool.h>

int Power(int iNo1, int iNo2)
{
    register int iCnt = 0;
    int iMult = 1;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult  = iMult *iNo1;
    }
    return iMult;
}
bool ChkArmstrong(int iNo)
{
    int iTemp = 0;
    int iDigCnt = 0, iDigit = 0, iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iTemp = iNo;
    // Calculate number of digits

    while(iNo != 0)
    {
        iDigCnt++;
        iNo = iNo/10;
    }

    iNo = iTemp;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + Power(iDigit, iDigCnt);
        iNo = iNo/10;
    }    

    if(iSum == iTemp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet =0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet = ChkArmstrong(iValue);

    if(bRet == true)
    {
        printf("%d is Armstrong",iValue);
    }
    else
    {
        printf("%d is not Armstrong",iValue);
    }

    return 0;
}