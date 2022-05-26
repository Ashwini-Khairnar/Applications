#include<stdio.h>
int main()
{
    double d=3.10;
    float f=6.10;

    printf("%d\n", sizeof(d));
    printf("%d\n", sizeof(f));

    printf("%d\n", sizeof(11));
    printf("%d\n", sizeof(6.10));//explicite double
    printf("%d\n", sizeof(6.10f)); //explicite float
    return 0;
}