
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int SearchLastOcurrence(int Arr[], int iLength, int iNum)
{
    int iCnt = 0;

    for(iCnt = iLength-1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNum)
        {
            break;
        }  
    }
    return iCnt;
}

int main()
{
    int *ptr = NULL;
    int  iRet = 0;
    int iSize = 0, iCnt = 0, iNo = 0;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter array elements:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter element to search:\n");
    scanf("%d",&iNo);

    iRet = SearchLastOcurrence(ptr, iSize, iNo);
    if(iRet == -1)
    {
        printf("There is no such element in array\n");
    }
    else
    {
        printf("Element Last occured at : %d\n",iRet);
    }
    free(ptr);

    return 0;
}