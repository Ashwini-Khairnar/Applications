#include<iostream>
using namespace std;

int main()
{
    int a=20, b=30, i=0, j=0;

    i = ++a;
    cout<<"i "<<a<<endl;    //21
    j = ++b;
    cout<<"j "<<b<<endl;    //31

    int x=20, y=30, k=0, l=0;

    k = x++;
    cout<<"x "<<x<<endl;    //21
    l=  y++;
    cout<<"y "<<y<<endl;    //31
    return 0;
}