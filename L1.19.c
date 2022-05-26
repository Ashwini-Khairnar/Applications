#include<stdio.h>
int main()
{
    int a=10, b=5, c=0;
    c = a/**//b;            //here /**/ is considered as comment and neglected
    printf("%d",c);
    return 0;
}