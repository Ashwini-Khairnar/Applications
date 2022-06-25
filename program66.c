//Accept N nos and one other number and count frequency of that no.
 
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNum)
{
    int iCnt = 0, iFreq=0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNum)
        {
            iFreq++;
        }     
    }
    return iFreq;
}

int main()
{
    int *ptr = NULL;
    int iSize = 0, iCnt = 0, iRet = 0, iNo = 0;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter array elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter element to calculate frequency:\n");
    scanf("%d",&iNo);

    iRet = Frequency(ptr, iSize, iNo);
    printf("Frequency of number is: %d\n", iRet);
    free(ptr);

    return 0;
}










































































































































































































































































