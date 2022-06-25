 //Accept N numbers from user and return Smallest number between them.
#include<stdio.h>
#include<stdlib.h>

//Positive & Negative

int Minimum(int Arr[], int iLength)
{
    int iCnt = 0, iMin = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iMin > Arr[iCnt] )
        {
           iMin = Arr[iCnt];
        }      
    }
    return iMin;
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

    iRet = Minimum(ptr, iSize);
    printf("Minimum number is: %d\n", iRet);
    free(ptr);

    return 0;
}










































































































































































































































































