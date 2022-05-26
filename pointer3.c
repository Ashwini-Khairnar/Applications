////////////////////////////////////////////////////////////
//
//Input:      
//Output:     
//Description: Invalid assignment to pointers 
//Author:       Ashwini
//Date:         10/03/22
//
/////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    int val = 100;
    int *iptr = val;    
    int *ptr = &val;    

    printf("Value of variable is %d\n",val);
    printf("pointer holds %d\n", iptr);
    printf("pointer holds %d\n", ptr);
    

    return 0;
}