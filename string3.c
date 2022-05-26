//count no of blank spaces

#include<stdio.h>
int main()
{
    char str[100],ch;
    int iCnt=0,i=0;

    printf("Enter string:\n");
    scanf("%[^\n]s",str);

    while(str[i]!='\0')
    {
        if(str[i]==' ')
            iCnt++;
        i++;
    }
    printf("Number of blank spaces in given string are %d", iCnt);
    return 0;
}