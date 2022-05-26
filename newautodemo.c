#include<stdio.h>

void fun(int I)
{
    auto int i;
    auto int j=10;
    int k=30;     //auto keyword is optional

    printf("Scope of auto variable starts from here in function fun\n");

    printf("Default value of uninitialized auto variable is %d\n",i);

    printf("Scope of auto  variable ends here in function fun\n");

}


int main()
{
   // printf("%d", i);
    fun(10);

    return 0;
}