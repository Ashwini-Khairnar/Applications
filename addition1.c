#include<stdio.h>
float addition(float no1,float no2)
{
    float ans=0;

    ans=no1+no2;

    return ans;

}

int main()
{
    float a=20.5, b=50.5, c=0;

    c=addition(a,b);

    printf("Addition is %f\n", c);
    return 0;
}