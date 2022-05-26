//  to find smallest among the given array

#include<stdio.h>
int main()
{
    int arr[30], iMin=0, iCnt=0, iLoc=0, iNum;

    printf("Enter the number of elements in array: ");
    scanf("%d",&iNum);

    printf("Enter %d elements:",iNum);

    for(iCnt=0; iCnt<iNum; iCnt++)
        scanf("%d",&arr[iCnt]);

        iMin=arr[0];

        for(iCnt=1; iCnt<iNum; iCnt++)
        {
            if(arr[iCnt]<iMin)
            {
                iMin=arr[iCnt];
                iLoc=iCnt+1;
            }
        }

        printf("Minimum no is %d and present at %d position",iMin,iLoc);
    return 0;
}