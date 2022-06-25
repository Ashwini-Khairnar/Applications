//Input : row = 4         column = 4

/*Output:  
A 
B B 
C C C 
D D D D

*/
//Time Complexity: n/2 

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    if(iRow != iCol)
    {
        printf("Invalid input");
        return;
    }
    for(i =1, ch = 'A'; i<= iRow; i++, ch++)
    {
        for(j = 1; j <= i; j++)
        {
                printf("%c\t",ch);
        }
        printf("\n");
    }   
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows:\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns:\n");
    scanf("%d",&iValue2);

    Display(iValue1, iValue2);

    return 0;
}