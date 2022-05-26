#include<stdio.h>

struct Demo         //Inner structure
{
    int i;
    int j;
};

struct Hello        //Outer structure
{
    int no;
    float f;
    struct Demo dobj;
};

int main()
{
    struct Hello hobj;
    hobj.no = 30;
    hobj.f = 10.46;
    hobj.dobj.i = 9;
    hobj.dobj.j = 20;

    printf("%d\n",hobj.no);
    printf("%f\n",hobj.f);
    printf("%d\n",hobj.dobj.i);
    printf("%d\n",hobj.dobj.j);
    return 0;
}