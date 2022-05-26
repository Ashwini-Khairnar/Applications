//count no of occurences of a perticular characters in the string

#include<stdio.h>
int main()
{
    char str[100],ch;
    int iCnt=0,i=0;

    printf("Enter string : \n");
    //scanf("%[^\n]s",str);
    gets(str);

    printf("Enter the character to be searched: ");
    //scanf("%c",&ch);
    ch=getchar();

   // printf("You entered %c: ",ch);

    while(str[i]!='\0')
    {
        if(str[i]==ch)
             iCnt++;
        i++;
    }
    printf("In the given string '%c' occured %d times\n",ch,iCnt); 
    return 0;
}
/*
#include <string.h>
 
int main()
{
    char s[1000],c;  
    int i,count=0;
 
    printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c=getchar();
    
    for(i=0;s[i];i++)  
    {
    	if(s[i]==c)
    	{
          count++;
		}
 	}
     
	printf("character '%c' occurs %d times \n ",c,count);
 
 	 
     
    return 0;
}
*/