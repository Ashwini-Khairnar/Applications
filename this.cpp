#include<iostream>
using namespace std;

class Demo
{
    public:
        int x;
        int y;

    Demo(int a=10, int b=20)        //parameterized constructor with default value
    {
        x=a;
        cout<<"x "<<x<<endl;
        y=b;
        cout<<"y "<<y<<endl;
    }
};

int main()
{
    Demo obj1;
    Demo obj2(11);
    Demo obj3(11,21);

    return 0;
}