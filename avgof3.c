////////////////////////////////////////////////////////////
//
//Input:     read 3 nos
//Output:    average of 3 nos
//Description:Calculate average of 3 nos
//Author:   Ashwini
//Date:     06/03/22
//
/////////////////////////////////////////////////////////////

#include<stdio.h>
int main()
{
    float fNo1=0.0, fNo2=0.0, fNo3=0.0, fAvg=0.0;

    printf("Enter three numbers:");
    scanf("%f%f%f",&fNo1,&fNo2,&fNo3);

    fAvg= (fNo1 + fNo2 +fNo3)/3.0;

    printf("Average is: %.2f",fAvg);
    return 0;
}