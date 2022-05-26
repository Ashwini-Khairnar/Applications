////////////////////////////////////////////////////////////
//
//Input:        no. of students and marks
//Output:       average marks
//Description:  Calculate average marks of students
//Author:       Ashwini
//Date:         10/03/22
//
/////////////////////////////////////////////////////////////
#include<stdio.h>
int main()
{
    int marks[10], iCnt=0, sum=0, no_of_students;
    float average=0.0;

    printf("Enter number of students in class: ");
    scanf("%d",&no_of_students);

    printf("Enter marks of students:\n ");

    for(iCnt=0; iCnt<no_of_students; iCnt++)
    {
        printf("Enter marks of students %d\t",iCnt+1);
        scanf("%d",&marks[iCnt]);
        sum = sum + marks[iCnt];
    }

  //  for(iCnt=0; iCnt<no_of_students; iCnt++)
 //   {
    //    sum = sum + marks[iCnt];
        average = (float)sum / no_of_students;
        printf("Average marks of students %f\n",average);        
  //  }
    return 0;
}