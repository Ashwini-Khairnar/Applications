// take string and check whether it is palindrome or not

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50], rev[50];
    void *ptr=rev;

    printf("Enter string : ");
    gets(str);

    strcpy(rev,str);

    ptr=strrev(str);

    if(strcmp(str,rev)==0)
        printf("The given string is palindrome.");
    else
        printf("The given string is not palindrome.");

    return 0;
}