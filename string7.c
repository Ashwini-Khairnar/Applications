//count number of words in string

#include<stdio.h>
int main()
{
    char str[50];
    int i=0,iCnt=0;

    printf("Enter string : ");
    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]==' ')
            iCnt++;
        i++;
    }

    printf("Number of words in the string are %d\n",iCnt+1);

    return 0;
}