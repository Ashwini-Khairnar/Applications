#include<stdio.h>
int main()
{

   // int Arr[3]={12,23,45,65,87}; //Error
   //int Brr[];                     //Error
   int Crr[]={10,20,30};
   int drr[3+2]={7+9, 3*2, 78, 7-1};
  // int i=4;                           //Error
   //int arr[i]={23,6,89,32};           //Error

   float arr[4] = {98.3, 4.3, 51.6, 7.6};
   int i=0;
   printf("%f\n", arr[i]);
   i++;
    printf("%f\n", arr[i]);
   i++;
    printf("%f\n", arr[i]);
   


    return 0;
}