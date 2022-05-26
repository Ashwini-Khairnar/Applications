// no. of same characters at the corresponding position in two strings
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str1[30], str2[30];
    int length1, length2, iCnt=0,i;

    printf("Enter Two strings of equal length\n");
    printf("Enter first string:\t");
    scanf("%[^\n]s", str1);

    printf("Enter Second string:\t");
    scanf("%s", str2);

    length1=strlen(str1);
    length2=strlen(str1);

    if(length1!=length2)
    {
        printf("Strings are of different length\n");
      //  exit(1);
    }
    else{

        for(i=0; i<length1;i++)
             if(str1[i] == str2[i])
                iCnt++;
        printf("Corresponding position hold same character %d times", iCnt);
    }
    return 0;
}