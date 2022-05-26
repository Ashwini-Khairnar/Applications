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

         void fun()
         {
             cout<<"Base fun";
         }
          virtual void gun()
         {
             cout<<"Base gun";
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

         void gun()
         {
             cout<<"Derived gun";
         }
         virtual void  sun()
         {
             cout<<"Derived sun";
         }
};
int main()
{
    derived dobj;
    cout<<sizeof(dobj);
    dobj.fun();
    dobj.gun();
    dobj.sun();
    return 0;
}