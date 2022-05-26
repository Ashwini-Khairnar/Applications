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
    Base *bp = new Base();       // No casting
    Derived *dp = new Derived();    // NO casting

    Base *bp1 = new Derived();  // upcasting
    //Derived *dp1 = new Base();  // downcasting


    return 0;
}