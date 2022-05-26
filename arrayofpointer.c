//Array of pointer
#include<stdio.h>
int main()
{
    int a=10, b=20, c=30;
    int *arr[3] = {&a, &b, &c};

    printf("Array elements are: %d %d %d \n", a,b,c);
    printf("Array elements are: %d %d %d \n", *arr[0], *arr[1], *arr[2]);
    return 0;
}