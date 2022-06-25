//Program to display 5 times Hello on Screen

#include<stdio.h>

//Demonstration of Iteration
void Display(int iNo)      //function defination
{
    int iCnt = 0;
    
    //      1        2           3
    for (iCnt = 0; iCnt < iNo ; iCnt++)
    {
        printf("Hello\n");  //4
    }    
}

int main()
{    
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);      //Function call

    return 0;
}



// 
