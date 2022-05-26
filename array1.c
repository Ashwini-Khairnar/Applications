////////////////////////////////////////////////////////////
//
//Input:    
//Output:    
//Description:initializers are compatible but different types
//Author:   Ashwini
//Date:     06/03/22
//
/////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    int arr1[] = {2.3, 4.5, 6.9};
    float arr2[] = {'A','B','C'};

    printf("Elements of array are initialized with\n");

    printf("arr1 : %d %d %d\n", arr1[0],arr1[1],arr1[2]);
    printf("arr2 : %f %f %f\n", arr2[0],arr2[1],arr2[2]);
    return 0;
}