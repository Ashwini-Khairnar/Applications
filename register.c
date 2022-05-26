#include<stdio.h>

//register int c;   we can't declare register variable in global scope

void fun()
{
    register int i;

   //   it is not allowed to create pointer to register variable in c

   //   int *p=&i;     //it is allowed in c++
   
   //   if we use register storage class for float, double variable then we wont get any error
   //   because compiler treat it as default variable

   register double d =3.14;
}

void gun()
{
    // THis is better use of register storage class

    register int i;
    for(i=10; i>=0;--i)
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