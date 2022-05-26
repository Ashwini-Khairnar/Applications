#include<stdio.h>

void fun(int I)
{
    auto int i;
    auto int j=10;
    int k=30;       //auto keyword is optional

    printf("Dafault value of i is : %d\n", i);
}

int main()
{
   // printf("%d",i);

    fun(10);
    return 0;
}