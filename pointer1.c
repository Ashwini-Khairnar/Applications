////////////////////////////////////////////////////////////
//
//Input:      
//Output:     
//Description: Size of pointer variable
//Author:       Ashwini
//Date:         10/03/22
//
/////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    int *iptr;
    char *cptr;
    float *fptr;
    double *dptr;

    printf("Size of integer pointer is %d bytes\n", sizeof(iptr));
    printf("Size of character pointer is %d bytes\n", sizeof(cptr));
    printf("Size of float pointer is %d bytes\n", sizeof(fptr));
    printf("Size of double pointer is %d bytes\n", sizeof(dptr));
    return 0;
}