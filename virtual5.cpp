#include<iostream>
using namespace std;

class Base
{
    public:
        int x,y;

        virtual void fun()
        {
            cout<<"Base fun"<<"\n";
        }
        virtual void gun()
        {
            cout<<"Base gun"<<"\n";
        }
        void sun()
        {
            cout<<"Base sun"<<"\n";
        }
        virtual void run()
        {
            cout<<"Base run"<<"\n";
        }
};
class Derived : public Base
{
    public:
        int i, j;
        void fun()
        {
            cout<<"Derived fun"<<"\n";
        }
        virtual void gun()
        {
            cout<<"Derived gun"<<"\n";
        }
        void sun()
        {
            cout<<"Derived sun"<<"\n";
        }
        virtual void mun()
        {
            cout<<"Derived mun"<<"\n";
        }
};
int main()
{
    Base *bp = new Derived();  // upcasting
   
    bp->fun();
    bp->gun();
     bp->sun();
    bp->run();
   // bp->mun();
    
    return 0;
}