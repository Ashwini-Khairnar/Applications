//size of pointer variable
#include<stdio.h>
int main()
{
    int *iptr;
    char *cptr;
    float *fptr;
    double *dptr;

    printf("Pointer to integer takes:%d bytes\n",sizeof(iptr));
    printf("Pointer to character takes:%d bytes\n",sizeof(cptr));
    printf("Pointer to float takes:%d bytes\n",sizeof(fptr));
    printf("Pointer to double takes:%d bytes\n",sizeof(dptr));

    return 0;
}