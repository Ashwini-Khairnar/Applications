#include<iostream>
using namespace std;

class Base1
{
    public:
    int i,j;
    Base1()
    {
        cout<<"Inside Base1\n";
    }
    ~Base1()
    {
        cout<<"Inside Base1\n";
    }
};

class Base2
{
    public:
    int i,j;
    Base2()
    {
        cout<<"Inside Base2\n";
    }
    ~Base2()
    {
        cout<<"Inside Base2\n";
    }
};

class Derived:public Base1, Base2
{
    public:
    int i,j;
    Derived()
    {
        cout<<"Inside Derived\n";
    }
    ~Derived()
    {
        cout<<"Inside Derived\n";
    }
};

int main()
{
    Derived dobj;
    return 0;
}