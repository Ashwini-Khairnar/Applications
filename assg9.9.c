#include<stdio.h>
int main()
{
   /* char ch='A';
    char *p = &ch;
    char **q = &P;
    char **x = &p;
    char *y = &ch;

    printf("%d\n", &ch);
    printf("%d\n", p);
    printf("%d\n", &p);
    printf("%d\n", &q);
    printf("%c\n", **x);
    printf("%c\n", **q);
    printf("%d\n", *q); */

    int arr[]={10,20,30,40,50};
    int *p = arr;

    printf("%d\n", arr);
    printf("%d\n", &arr);
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(arr[0]));
    printf("%d\n", sizeof(p));
    printf("%d\n", sizeof(*p));
    return 0;
}