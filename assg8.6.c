#include<stdio.h>
//auto int no=10;
void gun()
{
    register float fvalue =20.3;
    printf("Value of f is %f", fvalue);
}

int main()
{
    printf("Inside main\nf");
    gun();
    
    return 0;

}