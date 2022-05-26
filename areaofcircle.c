////////////////////////////////////////////////////////////
//
//Input:   radius of circle
//Output:   area and circumference of circle
//Description: calculate area and circumference of circle
//Author:   Ashwini
//Date:     06/03/22
//
/////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    float rValue=0.0, fArea=0.0, fCircumference=0.0;

    printf("Enter radius of circle:\n");
    scanf("%f",&rValue);

    fArea= 3.14 * rValue * rValue;
    fCircumference=2 * 3.14 * rValue;

    printf("Area of circle is %.2f\n", fArea);
    printf("Cicumference of circle is %.2f\n", fCircumference);

    return 0;
}