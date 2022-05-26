////////////////////////////////////////////////////////////
//
//Input:      
//Output:     
//Description:  reading, stoaring and accessing elements of two dimentional array 
//Author:       Ashwini
//Date:         10/03/22
//
/////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    int a[5][5], rows, cols, i, j;

    printf("Enter no. of rows : ");
    scanf("%d",&rows);
    printf("Enter no. of columns : ");
    scanf("%d",&cols);

    //reading and storing elements

    printf("Enter the elements:\n");
    for(i=0; i<rows; i++)
        for(j=0; j<cols; j++)
         scanf("%d",&a[i][j]);

    // accessing elements
    printf("Elements of array are: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
            printf("%d  ",a[i][j]);
           printf("\n");
    }

    return 0;
}