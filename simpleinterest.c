////////////////////////////////////////////////////////////
//
//Input:     principal,rate and time
//Output:    intrest and maturity amount
//Description:Calculate simple intrest and maturity amount
//Author:   Ashwini
//Date:     06/03/22
//
/////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    float fP=0.0, fROI=0.0, fTime=0.0, fIntrest=0.0, fAmount=0.0;

    printf("Enter principal, rate and time:");
    scanf("%f%f%f", &fP, &fROI, &fTime);

    fIntrest = fP * fROI * fTime /100;
    fAmount = fP + fIntrest;

    printf("Intrest is %.2f\n",fIntrest);
    printf("Amount is %.2f\n",fAmount);

    return 0;
}