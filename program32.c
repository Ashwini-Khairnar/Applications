//Accept number from user and check whether number is perfect no. or not
//Input:6                   28
//Output:1+2+3 = 6          1+2+4+7+14

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0 , iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo; 
    }
    for(iCnt = 1; ((iCnt <= (iNo/2)) && (iSum <= iNo)); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum += iCnt;
        }   
    }
    if(iSum == iNo)
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

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is a perfect number\n", iValue);
    }
    else
    {
        printf("%d is not a perfect number\n", iValue);
    }

    return 0;
}