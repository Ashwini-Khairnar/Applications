////////////////////////////////////////////////////////////
//
//Input:      
//Output:     
//Description: Equating an array with another array (== operator)
//Author:       Ashwini
//Date:         10/03/22
//
/////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    int a[3] = {10,20,30} , b[3] = {10,20,30};

    if(a==b)
       printf("Arrays are equal.");
    else
        printf("Arrays are not equal.");

    return 0;
}