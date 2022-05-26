#include<stdio.h>
int main()
{
///////////////////////////////////////////////////////////

  //  int arr[];                  //ERROR.....  Array size missing
  //  arr[0]=arr[1]=arr[2]=5;
  //  printf("%d %d %d ",arr[0],arr[1],arr[2]);

///////////////////////////////////////////////////////////

    int size=3;
    int arr[size];
    arr[0]=arr[1]=arr[2]=5;
    printf("%d %d %d ",arr[0],arr[1],arr[2]);
    printf("\n");
/////////////////////////////////////////////////////////////    

    int arr1[]={1,2,3};             //same as int arr1[3]
    printf("%d %d %d ",arr1[0],arr1[1],arr1[2]);
    printf("\n");
////////////////////////////////////////////////////////////

    int arr2[6]={1,2,3,4};
    int i;

    for(i=0;i<6;i++)
    printf("%d ",arr2[i]);
    printf("\n");

/////////////////////////////////////////////////////////////   

    int arr3[3]={1,20,30};
    printf("%d %d %d ",arr3[1],arr3[2],arr3[3]);
    printf("\n");

/////////////////////////////////////////////////////////////

    int arr4[]={1,2,3};
    arr4[0,1,2]=10;
    
    printf("%d %d %d ",arr4[0],arr4[1],arr4[2]);
    printf("\n");

////////////////////////////////////////////////////////////

    int arr5[]={1,2,3,4,5};
    arr5[1+2]=10;
    for(i=0;i<5;i++)
    printf("%d ",arr5[i]);
    printf("\n");

//////////////////////////////////////////////////////////////

    int arr6[]={1,2,3,4,5};
  //  arr6[2.5+1.5]=10;                 ERROR....array subscript is not integer
    for(i=0;i<5;i++)
    printf("%d ",arr6[i]);
    printf("\n");

//////////////////////////////////////////////////////////////
 
    int array[]={1,2,3,4};
    printf("The no. of elements in array are %d", sizeof(array)/sizeof(array[0]));
    printf("\n");
 
///////////////////////////////////////////////////////////// 

    int x=10,y;
    int arr7[]={1,2,3}, brr[3];

    printf("Assigning contents of x to y\n");
 //   y=a;                                              ERROR
    printf("Assigning contents of one array to another\n");
 //   brr=arr7;
    printf("Contents of brr are %d %d %d",brr[0],brr[1],brr[2]);

    printf("\n");

///////////////////////////////////////////////////////////////////

    int a[]={1,2,3,4,5};
    int *ptrx = a;
    printf("%d %d\n %d %d\n",*a,*ptrx, a, ptrx);
    
    printf("%d %d\n",a,&a);
   // printf("%d %d\n",a++,&a++);
     printf("%d %d\n",a+1,&a+1);


/////////////////////////////////////////////////////////////



    return 0;
}