//count no. of occurence of perticular word in the given string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],word[20],temp[20];
    int iCnt=0,i=0,j=0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the word: ");
    gets(word);

    while(str[i]!='\0')
    {
        while(str[i]=' ' && str[i]!='\0')
        {
            temp[j]=str[i];
            j++;
            i++;
        }
        temp[j]='\0';

        if(str[i]!='\0')
        {
            i++;
            j=0;
        }
        if(strcmp(temp,word)==0)
            iCnt++;
    }
    if(iCnt==0)
        printf("The word \" %s \" does not exist in the string.", word);
    else
        printf("The word \" %s \" exists %d times in the string.", word,iCnt);


    return 0;
}