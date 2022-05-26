#include<stdio.h>
int main()
{
    char Arr[50];

    printf("Enter your name : ");
    scanf("%s",Arr);
    scanf(" %[^'\n']s",Arr);
    return 0;
}