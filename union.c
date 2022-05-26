#include<stdio.h>

union Demo
{
    int i;
    float f;
    double d;
    int *p ;

};

int main()
{
    union Demo obj;
    printf("Size of union is:%d\n", sizeof(union Demo));
    printf("Size of object is:%d\n", sizeof(obj));
    return 0;
}