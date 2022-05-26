////////////////////////////////////////////////////////////
//
//Input:      
//Output:     
//Description: Pointer to array
//Author:       Ashwini
//Date:         10/03/22
//
/////////////////////////////////////////////////////////////

#include<stdio.h>
int main()
{
    int arr[4][3] = {1,2,3,4,10,4,5,6,6};
    int (*ptr)[3] = arr;

    printf("Address of row 1 is %d\n",arr);
    printf("Address of row 2 is %d\n", *(arr+1) );  //ptr + 1 
    printf("Address of row 2 is %d\n", ptr + 2);
    printf("first element of row 1 is %d\n",arr[0][0]);
    printf("First element of row 2 is %d\n",ptr[1][0]);
    printf("First element of row 3 is %d\n",ptr[2][0]);

    return 0;
}