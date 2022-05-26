// function to calculate area of circle

#include<stdio.h>

float Area_of_circle(int);        //function declaration

int main()
{
    int iRadius;
    float fArea;

    printf("Enter radius: ");
    scanf("%d",&iRadius);

    fArea=Area_of_circle(iRadius);

    printf("Area of circle is %f\n",fArea);
    return 0;
}

float Area_of_circle(int iRadius)
{
    return 3.14*iRadius*iRadius;
}