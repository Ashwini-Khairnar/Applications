// printing alternate characters of string in reverse order

#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],altchars[50];
    int i=0,j=0,length=0;

    printf("Enter string: ");
    gets(str);

    length=strlen(str);
    i=length-1;

    while(i>=0)
    {
        altchars[j]=str[i];
        i=i-2;
        j=j+1;
    }
    altchars[j]='\0';

    printf("Alternate characters in string are: ");

    puts(altchars);
    return 0;
}