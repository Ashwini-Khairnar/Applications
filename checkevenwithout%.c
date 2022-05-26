//  check no is even or not without % operator
 #include<stdio.h>
 int main()
 {
     int a=0;
     printf("Enter number: ");
     scanf("%d",&a);

     if(a&1)
        printf("Odd number..");
    else 
        printf("Even number: ");
     return 0;
 }
 


