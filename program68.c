//Accept N nos and one other number and search that no.
 
#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool Search(int Arr[], int iLength, int iNum)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNum)
        {
            break;
        }  
    }
    if(iCnt == iLength)
    {
        return false;
    }
    else{
        return true;
    }
    
}

int main()
{
    int *ptr = NULL;
    bool bRet;
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

    bRet = Search(ptr, iSize, iNo);
    if(bRet == true)
    {
        printf("Element is there in array\n");
    }
    else
    {
        printf("Element is not present in array\n");
    }
    free(ptr);

    return 0;
}
