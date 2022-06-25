//Program to display 5 times Hello on Screen

#include<stdio.h>

//Demonstration of Iteration

void Display();     //Declaration

int main()
{    
    Display();      //Function call

    return 0;
}

void Display()      //function defination
{
    int iCnt = 0;

    // 1 Initialization
    // 2 Condition
    // 3 Displacement
    // 4 Loop body
    
    //      1        2           3
    for (iCnt = 0; iCnt < 5 ; iCnt++)
    {
        printf("Hello\n");  //4
    }    
}

// 
