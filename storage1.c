#include<stdio.h>

void Demo()
{
    int i=10;
    i++;
    printf("value of i : %d\n", i);

}

void Hello()
{
    static int j=10;
    j++;
    printf("value of j : %d\n", j);
}

int main()
{
    Demo();
    Demo();

    Hello();
    Hello();

    return 0;
}