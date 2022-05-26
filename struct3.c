//Equality operator and stucture
#include<stdio.h>

struct pad
{
    char a;
    int b;
    float c;
};

int main()
{
    struct pad obj1={'A',2,10.11}, obj2={'A',2,10.11};
    const struct pad obj3={'B',3,5.5}, obj4={'B',3,5.5};

    if(obj1.a==obj2.a && obj1.b==obj2.b && obj1.c==obj2.c)
        printf("Structure variables are Equal\n");
    else
        printf("Structure variables are Unequal\n");

     if(obj3.a==obj4.a && obj3.b==obj4.b && obj3.c==obj4.c)
        printf("Structure Constants are Equal\n");
    else
        printf("Structure constants are Unequal\n");
    return 0;
}