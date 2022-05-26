#include<iostream>
using namespace std;

class static_demo
{
    private :
            static int a;
    public : 
            static int b;

            void set(int x, int y)
            {
                a = x;
                b = y;
            }
            void show()
            {
                cout<<"a= "<<a<<endl;
                cout<<"b= "<<b<<endl;
            }
};
int static_demo :: a = 100;
int static_demo :: b = 10;
int main()
{
   // static_demo :: a = 20;        //we can't access private static members inside main 
   cout<< static_demo :: b << endl;

    return 0;
}