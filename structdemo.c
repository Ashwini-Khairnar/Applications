#include<stdio.h>

struct Demo
{
    int iNo;
    float fValue;
    int iValue;
}obj1;

int main()
{
    struct Demo obj={10, 10.11, 50};

    printf("iNo=%d\n",obj.iNo);
    printf("fValue=%f\n",obj.fValue);
    printf("iValue=%d\n",obj.iValue);
  
   //struct Demo obj1;      //same as above created object obj1

   obj1.iNo=20;
   obj1.fValue= 50.6;
   obj1.iValue=100;

    printf("iNo=%d\n",obj1.iNo);
    printf("fValue=%f\n",obj1.fValue);
    printf("iValue=%d\n",obj1.iValue);

    return 0;
}