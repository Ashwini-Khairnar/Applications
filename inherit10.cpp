#include<iostream>
using namespace std;

class base
{
    public : 
        int i;
        float f;
        double d;

        void fun()
        {

        }

        void gun()
        {

        }
};

class derived1 : public base
{
    public : 
        int x, y;

        void sun()
        {

        }
};

class derived2 : public base
{
    public : 
        int j,k;

        void run()
        {

        }
};
int main()
{
    base bobj;
    derived1 dobj1;
    derived2 dobj2;
    cout<<sizeof(bobj)<<endl;
    cout<<sizeof(dobj1)<<endl;
    cout<<sizeof(dobj2)<<endl;
}