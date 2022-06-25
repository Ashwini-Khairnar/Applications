#include<stdio.h>
#include<stdlib.h>   //for malloc and free

void Display(int Arr[], int ilength)
{
    register int iCnt = 0;
    printf("Elements of array are: \n");

    for(iCnt = 0; iCnt < ilength; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int *ptr = NULL;
    register int iCnt = 0;
    int iSize = 0;

    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter array elements: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr, iSize);   //Display(100);
    free(ptr);
    return 0;
}