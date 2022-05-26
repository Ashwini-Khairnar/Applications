#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;
};

class Derived : public Base
{
    public:
        int i, j;

};
int main()
{
    // static memory
    Base bobj;      //size  8 byte
    Derived dobj;   //size  16 byte

    //Dynamic memory
    Base *bp = new Base();
    Derived *dp = new Derived();

    return 0;
}