#include<stdio.h>
#include<string.h>

int strlenX(char *str)
{
    int iCnt=0;
    
    while((*str) != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}
int strlenXX(char str[])
{
    int iCnt=0;
    int iLen=0;

    for(iCnt=0; str[iCnt]!='\0'; iCnt++)
    {
         iLen++;
    }
    return iLen;
}
int strlenXXX(char str[] )
{
    int iCnt=0;
    while(str[iCnt] != '\0')
    {
        iCnt++;
    }
    return iCnt;
}
int main()
{
    char Arr[5]="Ashu";
    int iLength=0;

    iLength=strlenX(Arr);
    printf("Length of given string  %s is : %d\n", Arr,iLength);
    
    iLength=strlenXX(Arr);
    printf("Length of given string  %s is : %d\n", Arr,iLength);
    
    iLength=strlenXXX(Arr);
    printf("Length of given string  %s is : %d\n", Arr,iLength);
    
    return 0;
}