#include<iostream>
using namespace std;

float Cicumference_Circle(float radius, float PI=3.14)
{
    double ans=0.0;
    ans=2* PI * radius;
    return ans;
}
int main()
{
    float fRet=0.0;

    fRet=Cicumference_Circle(10.36, 5.9);
    cout<<fRet<<endl;

    fRet=Cicumference_Circle(50.32);
    cout<<fRet<<endl;

    fRet=Cicumference_Circle(5);
    cout<<fRet<<endl;

    return 0;
}