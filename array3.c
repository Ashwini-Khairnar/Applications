////////////////////////////////////////////////////////////
//
//Input:      
//Output:     
//Description: Assignment of one array to another array
//Author:       Ashwini
//Date:         10/03/22
//
/////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    int a[3], b[3]= {10,20,30};

    printf("Assignment of array to an array:\n");

   // a = b;      //Invalid statement...

    printf("Elements of array a are:\n");
    //printf("%d %d %d",a[0], a[1], a[2]);
    printf("%d %d %d",b[0], b[1], b[2]);
    
    return 0;
}