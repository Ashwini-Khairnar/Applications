#include<stdio.h>
int main()
{
    char *p1,*p2;
    
    printf("%d %d\n",sizeof(p1),sizeof(p2));

    printf("%d %d %d\n",sizeof(char *),sizeof(int *),sizeof(float *));

/////////////////////////////////////////////////
   
    int a = 10;
    int *ptr = &a;
    printf("%d %d\n", ++*ptr,*ptr++);
    printf("%d %d\n", *ptr++, ++*ptr);

/////////////////////////////////////////////////////
   
    int a1=10;
    const int *iptr=&a1;
   // *iptr=50;                             ERROR
    printf("The changed value of pointed object is %d", *iptr);

///////////////////////////////////////////////////////

    int a2=10, b2=20;
    int *const ptr2=&a2;
    *ptr2=20;
    printf("The changed value of pointed object is %d\n", *ptr2);

  //  ptr2=&b2;        because ptr2 is constant
    *ptr2=10;
    printf("The changed value of pointed object is %d\n", *ptr2);

///////////////////////////////////////////////////////////////////////    

    int a3=10,b3=20;
    const int *const ptr3 = &a;
  //  *ptr3 = 20;                               Not allowed as const ptr
    printf("The changed value of pointed object is %d\n", *ptr3);

  //  ptr3=&b3;                 Not allowed as const ptr
  //  *ptr3=10;                 Not allowed as const ptr
    printf("The changed value of pointed object is %d\n", *ptr3);

////////////////////////////////////////////////////////////////////////

    int *ptr4=0;
    int *ptr5=NULL;

    if(ptr4==ptr5)
        printf("ptr4 becomes a NULL pointer");
    else
        printf("ptr4 does not becomes a NULL pointer");

  //  printf("Value of pointer is %d",ptr4);
/////////////////////////////////////////////////////////////////////////
    return 0;
}