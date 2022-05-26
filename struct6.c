//Accessing stucture members via pointer to stucture object
#include<stdio.h>

struct coord
{
    int x,y;
};
int main()
{
    struct coord pt={2,3};
    struct coord* ptr=&pt;

    printf("Coordinate of pt1 are (%d,%d)\n",(*ptr).x, (*ptr).y);
    printf("Coordinate of pt1 are (%d,%d)\n",ptr->x, ptr->y);
    return 0;
}