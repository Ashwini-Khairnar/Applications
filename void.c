//Demonstrate use of void pointer

#include<stdio.h>

int main()
{
    int iValue = 11;
    char cValue = 'A';
    float fValue = 10.11;
    double dValue = 20.11;

   
    void *ptr = NULL;

    ptr = &iValue;
    printf("%d\n",*(int *)ptr);

    ptr = NULL;
    ptr = &fValue;
    printf("%f\n",*(float *)ptr);
    
    ptr = NULL;
    ptr = &cValue;
    printf("%c\n",*(char *)ptr);

    ptr = NULL;
    ptr = &dValue;
    printf("%f\n",*(double *)ptr);

    return 0;
}