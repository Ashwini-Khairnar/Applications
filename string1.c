//  count no of vowels

#include<stdio.h>
int main()
{
    char string[100];
    int iCnt=0, i=0;

    printf("Enter string:\n");
   // gets(string);
    scanf("%[^\n]s",string);

    while(string[i]!='\0')
    {
        switch(string[i])
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            iCnt++;
        }
        i++;
    }
    if(iCnt==1)
        printf("One vowel is present in the string");
    else
        printf("%d vowels are present in the string",iCnt);
    return 0;
}