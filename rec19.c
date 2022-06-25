#include<stdio.h>

void Display(char *str)
{
    if(*str != '\0')
    {
        Display(str + 1);    //Head recursion
        printf("%c\n",*str);
       // Display(++str);   //Tail recursion
    }
}

int main()
{
    char Arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}