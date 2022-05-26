#include<stdio.h>

static int Global_Static = 10;

void Fun_Normal()
{
    //this is local static variable
    //whose value persist throught the function call
    //initialization of static variable only once;

    static int i=10;
    ++i;   //increment value of i

    printf("Value of i from Fun_Normal is %d\n", i);
    printf("Address of static variable is %d\n", &i);
}

//recursive function which uses static variable
void Gun_Recursive_Static()
{
    static int i=5;
    i--;
    if(i!=0)
    {
        printf("In Gun_Recursive_Static value of i is %d\n", i);
        Gun_Recursive_Static();
    }
}

//This function runs infinitly due to the auto variables
void Gun_Recursive_Auto()
{
    auto int i=5;
    i--;
    if(i!=0)
    {
        printf("In Gun_Recursive_Auto value of i is %d\n", i);
        Gun_Recursive_Auto();
    }
}
int main()
{
    //Calling function multiple time
    Fun_Normal();
    Fun_Normal();
    Fun_Normal();

    Gun_Recursive_Static();
   // Gun_Recursive_Auto();
    return 0;
}