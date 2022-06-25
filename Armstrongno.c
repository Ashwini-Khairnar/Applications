#include<stdio.h>
#include<stdbool.h>

bool CheckArmstrong(int iNo)
{
    int iTemp = 0, iDigCnt = 0, iDigit = 0;
    int iMult = 1, iSum = 0, iCnt = 0;

    iTemp = iNo;

    while(iNo != 0)
    {
        iDigCnt++;
        iNo = iNo / 10; 
    }

    iNo = iTemp;

    while(iNo != 0)
    {
        iMult = 1;
        iDigit = iNo % 10;

        for(iCnt = 1; iCnt<=iDigCnt; iCnt++)
        {
            iMult = iMult * iDigit;
        }
        iSum = iSum + iMult;

        iNo = iNo / 10;
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
    bool bRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckArmstrong(iValue);

    if(bRet == true)
    {
        printf("%d  is armstrong.\n ",iValue);
    }
    else
    {
        printf("%d is not armstrong.\n ",iValue);
    }

    return 0;
}