////////////////////////////////////////////////////////////
//
//Input:    Temperature in fahrenheit
//Output:   Temp in celcius
//Description:Convert temperature given in fahrenheit to celcius     c = 5/9 * (f-32)
//Author:   Ashwini
//Date:     06/03/22
//
/////////////////////////////////////////////////////////////

#include<stdio.h>
int main()
{
    float fValue=0.0, cValue=0.0;
    printf("Enter temperature in farenheit: \n");
    scanf("%f",&fValue);

    cValue = 5.0/9.0 * (fValue -32);

    printf("Temperature in celcius is %.lf", cValue);

    return 0;
}