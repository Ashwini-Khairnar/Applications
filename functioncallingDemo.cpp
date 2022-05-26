#include<iostream>
using namespace std;

int increment(int var)
{
    var = var + 1;
    return var;
}
int main()
{
    int num1=20;
    int num2=increment(num1);

    cout<<"num1 value is: "<<num1<<endl;
    cout<<"num2 value is: "<<num2<<endl;

    return 0;
}