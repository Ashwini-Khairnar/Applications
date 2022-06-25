//Accept number and perform addition of N numbers
#include<stdio.h>
#include<stdlib.h>

int Sumation(int Arr[], int iLength)
{
    int iCnt=0, iSum = 0;
    for(iCnt = 0 ; iCnt < iLength; iCnt++)
    {
        iSum += Arr[iCnt];
    }
    return iSum;
}


int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0, iRet = 0;
    
    printf("Enter number of elemets\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);

    printf("Enter the values of array\n");

    for(iCnt = 0; iCnt < iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Sumation(ptr,iSize);

    printf("Addition is : %d\n",iRet);
    return 0;
}