////////////////////////////////////////////////////////////
//
//Input:      
//Output:     
//Description:  assigning pointer to void pointers 
//Author:       Ashwini
//Date:         10/03/22
//
/////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    int a = 10;
    int *iptr = &a;    
    void *vptr = iptr;    

    printf("int* is implicitly converted to void*");
   
    return 0;
}