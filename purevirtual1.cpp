#include<iostream>
using namespace std;

class Base
{
    public :
        int x, y;
        //1000
        void fun()      // Concrete non virtual
        {
            cout<<"Base fun\n";
        }
        //2000
        virtual void gun()  //concrete virtual
        {
            cout<<"Base gun\n";
        }
        //3000
         virtual void sun()   //concrete virtual
        {
            cout<<"Base sun\n";
        }
        //__________
        virtual void run() = 0;     //abstract function //we cant create object of class

};

class Derived : public Base
{
    public : 
            int i, j;
            
            //4000
            void fun()      //Redefination (concrete function)
            {
                cout<<"Derived fun\n";
            }
            //5000
            virtual void gun()      //overridden
            {
                cout<<"Derived gun\n";
            }
            //6000
            void run()          // concrete function
            {
                cout<<"Derived run\n"; 
            }
};

int main()
{
   // Base bobj; Not allowed
    Derived dobj;

    Base *bp = NULL;
    bp = &dobj;     //Upcasting

    cout<<sizeof(Base)<<endl;   //16  12
    cout<<sizeof(Derived)<<endl;  //24   20
    bp->fun();
    bp->gun();
    bp->sun();
    bp->run();
   

    return 0;
}