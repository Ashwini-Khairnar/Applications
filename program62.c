//Accept N numbers and perform addition of that numbers.

#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iLength)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum += Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0, iRet = 0;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter array elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Addition(ptr, iSize);
    printf("Addition is: %d\n", iRet);
    free(ptr);

    return 0;
}