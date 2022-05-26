#include<stdio.h>
void fun()
{
    register int i;
   // int *p = &i;   //not allowed to create pointer to register variable
    register double d = 3.12;
}

void gun()
{
    register int i;
    for(i=10; i>=0; --i)
    {
        printf("%d ",i);
    }
   
}

int main()
{
    fun();
    gun();

    return 0;
}