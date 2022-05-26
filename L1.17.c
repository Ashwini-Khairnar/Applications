#include<stdio.h>
int main()
{
    char *p = "Hello\n";
    printf(p);
    // printf(p"\n");           // p is variable and will not concatenate with string .......     ERROR
    printf("Hello ""Readers!...");
    return 0;
}