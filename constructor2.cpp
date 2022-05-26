#include<iostream>
using namespace std;

class Demo
{
    public:
        int x;
        int y;

    Demo()
    {
        cout<<"Inside Default constructor\n";
    }

    Demo(int i, int j)
    {
        cout<<"Inside parameterised constructor\n";
        x=i;
        y=j;
    }
    Demo(Demo &ref)   //copy constuctor
    {
        cout<<"Inside copy constructor\n";
        x = ref.x;
        y = ref.y;
    }
    ~Demo()
    {
        cout<<"Inside Destructor\n";        
    }
};

int main()
{
    Demo obj1(11,21);
    Demo obj2(obj1);
       
    return 0;
}