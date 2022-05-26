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
    }
    ~Demo()
    {
        cout<<"Inside Destructor\n";
    }
};

int main()
{
    cout<<"Inside Main\n";
    Demo obj1;
    cout<<"End of Main\n";

    Demo obj2(11,21);
    Demo obj3(51,101);

    cout<<sizeof(obj2)<<"\n";
    cout<<sizeof(obj3)<<"\n";

    cout<<"Value of x in obj2 : "<<obj2.x<<"\n";
    cout<<"Value of x in obj3 : "<<obj3.x<<"\n";

    obj2.x++;

    cout<<"Value of x in obj2 : "<<obj2.x<<"\n";
    cout<<"Value of x in obj3 : "<<obj3.x<<"\n";

    return 0;
}