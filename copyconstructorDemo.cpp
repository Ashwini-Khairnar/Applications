#include<iostream>
using namespace std;

class Demo
{
    public:
        int x,y;

        Demo(int a, int b)
        {
            cout<<"Inside parameterised constructor"<<endl;
            x = a;
            y = b;
            cout<<x<<endl<<y<<endl;
        }
        Demo(Demo &x1)
        {
            cout<<"Inside copy constructor"<<endl;
            x = x1.x;
            y = x1.y;
            cout<<x<<endl<<y<<endl;
        }
};

int main()
{
    Demo obj1(10,20);
    Demo obj2(30,40);
    Demo obj3(obj1);
    Demo obj4(obj2);
   return 0; 
}