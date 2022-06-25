//Accept N numbers from user and return largest number between them.
#include<stdio.h>
#include<stdlib.h>
//Positive
int Maximum(int Arr[], int iLength)
{
    int iCnt = 0, iMax = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
           iMax = Arr[iCnt];
        }      
    }
    return iMax;
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

    iRet = Maximum(ptr, iSize);
    printf("Maximum number is: %d\n", iRet);
    free(ptr);

    return 0;
}