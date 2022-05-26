#include<stdio.h>
int Addition(int no1, int no2)
{
    int ans=0;
    ans=no1+no2;

    return ans;
}
int main()
{
    int a=10, b=20, c=0;

    c=Addition(a,b);

    printf("Addition is %d\n", c);
    return 0;
}



/* #include<stdio.h>
int Addition(int No1, int No2)
{
 int Ans=0;
 Ans=No1+ No2;

 return Ans; 
}
int main()
{
 int A=10, B=11, c=0;
 
 c=Addition(A,B);
 
 printf("%d", c);
 
 return 0;
} */