#include<stdio.h>

static int Global_static = 10;

void Fun_Normal()
{
    static int i=10;
    ++i;
    printf("Value of i from Fun_Normal is %d\n", i);
    printf("Address of static variable is %u\n", &i);

}
void Gun_Recursive_Static()
{
    static int i=5;
    i--;
    if(i!=0)
    {
        printf("Gun_Recursive_Static value of i is %d\n", i);
        Gun_Recursive_Static();

    }
}
//This function runs infinitly due to the auto variable
void Gun_Recursive_Auto()
{
    auto int i=5;
    i--;
    if(i!=0)
    {
        printf("Gun_Recursive_Auto value of i is %d\n", i);
        Gun_Recursive_Auto();
    }
}
int main()
{
    Fun_Normal();
    Fun_Normal();
    Fun_Normal();

    Gun_Recursive_Static();
   // Gun_Recursive_Auto();
    return 0;
}