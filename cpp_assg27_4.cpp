#include<iostream>
using namespace std;

class base
{
    public :
         int i;
         float f;
         
         base()
         {
             cout<<"base constructor";
         }

        virtual void fun()
         {
             cout<<"Base fun";
         }
          virtual void gun()
         {
             cout<<"Base gun";
         }
         virtual void sun()
         {
             cout<<"Base sun";
         }
         void run()
         {
             cout<<"Base run";
         }
};  
class derived : public base
{
    public:
        int i;
        double d;

        derived()
        {
             cout<<"derived constructor";
        }

        virtual void  fun()
         {
             cout<<"Derived fun";
         }

        virtual void gun()
         {
             cout<<"Derived gun";
         }
         void  sun()
         {
             cout<<"Derived sun";
         }
         virtual void run()
         {
             cout<<"Derived run";
         }
};
int main()
{
    derived dobj;
    cout<<sizeof(dobj);
    dobj.fun();
    dobj.gun();
    dobj.sun();
    dobj.run();
    return 0;
}