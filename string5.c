//print alternate characters of string
#include<stdio.h>
#include<string.h>

int main()
{
    char str[50], altchars[50];
    int i=0,j=0,length;

    printf("Enter string:\n");
    gets(str);

    length=strlen(str);

    while(i<length)
    {
        altchars[j]=str[i];
        i=i+2;
        j=j+1;
    }
    altchars[j]='\0';

    printf("Alterenate characters in string are:\n");

    puts(altchars);
    return 0;
}