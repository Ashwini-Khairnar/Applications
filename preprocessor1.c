#include<stdio.h>

#define MAX 100

// Entry point function

int main()
{
    int no=10 ;
    no=no+MAX;

    printf("Jay Ganesh\n");
    printf("Value of no is : %d\n", no);

    return 0;
}

//gcc preprocessor1.c -o myexe -save-temps