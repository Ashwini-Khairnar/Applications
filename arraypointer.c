////////////////////////////////////////////////////////////
//
//Input:      
//Output:     
//Description:  Relationship between array and pointer
//Author:       Ashwini
//Date:         10/03/22
//
/////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    int arr[3] = {10,15,20};
    printf("First element of array is at %d\n", arr);
    printf("Second element of array is at %d\n", arr+1);
    printf("Third element of array is at %d\n", arr+2);
    printf("Size of array is %d\n", sizeof(arr));

    printf("Elements are %d %d %d\n", arr[0],arr[1],arr[2]);
    printf("Elements are %d %d %d\n", *(arr+0),*(arr+1),*(arr+2));
    printf("Elements are %d %d %d\n", 0[arr],1[arr],2[arr]);

    
    
    return 0;
}