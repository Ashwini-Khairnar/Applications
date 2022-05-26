#include<stdio.h>
int main()
{
    double no = 3.14;
    double *a = &no;
    double **b = &a;
    double ***c = &b;
    double ****d = &c;

    printf("%d\n", &no);
    printf("%d\n", a);
    printf("%d\n", &c);
    printf("%d\n", &d);
    printf("%d\n", d);
    printf("%d\n", **d);
    printf("%d\n", **c);
    printf("%d\n", *b);

    printf("SIZE OF\n :");
    printf("%d\n", sizeof(no));
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(c));
    printf("%d\n", sizeof(d));
    printf("%d\n", sizeof(**d));
    printf("%d\n", sizeof(****d));
    printf("%d\n", sizeof(*a));
    printf("%d\n", sizeof(***c));
    printf("%d\n", sizeof(**c));
    
    return 0;
}