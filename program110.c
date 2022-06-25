//Accept number and return the factorial
//input : 4
//output: 4*3*2*1
//        1*2*3*4  
#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1, iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact *= iCnt;
    }
    return iFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d\n",iRet);
    return 0;
}