//Pointer to structure

#include<stdio.h>

struct coord
{
    int x,y,z;
}pt1={2,3,5}, *ptr1;
int main()
{
    struct coord pt2={4,5,6};
    struct coord *ptr2=&pt2;

    ptr1=&pt1;

    printf("Address of pt1 and pt2 are %d %d\n",&pt1,&pt2);
    printf("Address of ptr1 and ptr2 are %d %d\n",&ptr1,&ptr2);
    printf("ptr1 and ptr2 points to %d %d\n",ptr1,ptr2);
    printf("Size of type (struct coord) is %d\n",sizeof(struct coord));
    printf("Size of type (struct coord*) is %d\n",sizeof(struct coord*));
    printf("Size of pt1 is %d\n", sizeof(pt1));
    printf("Size of pt2 is %d\n", sizeof(pt2));
    return 0;
}