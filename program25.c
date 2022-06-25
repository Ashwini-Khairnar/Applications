/*
0 to 35     Fail


*/
#include<stdio.h>

void DisplayClass(float fMarks)
{
    if((fMarks >0.0) && (fMarks < 35.0))
    {
        printf("You are fail\n");
    }
    else if((fMarks >= 35.0) && (fMarks <50.0))
    {
        printf("Pass Class\n");   
    }
    else if((fMarks >= 50.0) && (fMarks < 60.0))
    {
        printf("Second Class\n");   
    }
    else if((fMarks >= 60.0) && (fMarks < 70.0))
    {
        printf("First Class\n");   
    }
    else if((fMarks >= 70.0) && (fMarks <= 100.0))
    {
        printf("First Class with distinction\n");   
    }
    else 
    {
        printf("Invalid marks\n");
    }
    
}

int main()
{
    float fValue = 0.0;

    printf("Enter the percentage\n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}