////////////////////////////////////////////////////////////
//
//Input:      
//Output:     
//Description:  two dimentional array 
//Author:       Ashwini
//Date:         10/03/22
//
/////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    int a[2][3] = {2,1,2,2,2,3};

    printf("Elements of array using subscript operator:\n");
    printf("%d %d %d\n", a[0][0], a[0][1], a[0][2]);  
    printf("%d %d %d\n", 1[a][0], 1[a][1], 1[a][2]);
    printf("%d %d %d\n", a[1][0], a[1][1], a[1][2]);
   
    printf("Elements of array using subscript operator:\n");
    printf("%d %d %d\n", *(*(a+0)+0), *(*(a+0)+1), *(*(a+0)+2));  
    printf("%d %d %d\n", *(*(a+1)+0), *(*(a+1)+1), *(*(a+1)+2));
    
    printf("Elements of array using mixed forms of expressions :\n");
    printf("%d %d %d\n", *(a[0]+0), *(a[0]+1), *(a[0]+2));  
    printf("%d %d %d\n", *(a[1]+0), *(a[1]+1), *(a[1]+2));
    return 0;
}