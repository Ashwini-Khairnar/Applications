////////////////////////////////////////////////////////////
//
//Input:      
//Output:     
//Description: dereferencing pointers 
//Author:       Ashwini
//Date:         10/03/22
//
/////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    int val = 12;
    int *iptr = &val;
    int **pptr = &iptr;
    

    printf("Value is %d\n",val);
    printf("Address of value %d\n",&val);
    printf("value by dereferencing iptr is %d\n", *iptr);
    printf("value by dereferencing pptr is %d\n", *pptr);
    printf("Value of iptr %d \n", iptr);
    printf("Value of pptr %d \n", pptr);
    printf("Address of iptr %d\n", &iptr);

    return 0;
}