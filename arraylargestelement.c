//  to find largest among the given array

#include<stdio.h>
int main()
{
    int arr[30], iMax=0, iCnt=0, iLoc, iNum;

    printf("Enter the number of elements in array: ");
    scanf("%d",&iNum);

    printf("Enter %d elements:",iNum);

    for(iCnt=0; iCnt<iNum; iCnt++)
        scanf("%d",&arr[iCnt]);

        iMax=arr[0];

        for(iCnt=1; iCnt<iNum; iCnt++)
        {
            if(arr[iCnt]>iMax)
            {
                iMax=arr[iCnt];
                iLoc=iCnt+1;
            }
        }

        printf("MAximum no is %d and present at %d position",iMax,iLoc);
    return 0;
}