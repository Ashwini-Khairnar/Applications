#include<stdio.h>

int main()
{
    int no1=10;

    const int no2=20;

    no1++;
  //  no2++;

    no1=20;
 //   no2=30;

    printf("You can't increment and assignment to constant variable...");

    return 0;
}