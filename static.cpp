#include<iostream>
using namespace std;

class Demo
{
    public :
        int i,j;
        static int x;

        Demo()
        {
            cout<<"Inside default constructor\n";
            i = 10;
            j = 20;
        }
};

int Demo :: x = 30;

int main()
{
    cout<<Demo::x<<endl;

    Demo obj1;
    Demo obj2;

    cout<<sizeof(obj1)<<"\n";  //8
    cout<<sizeof(obj2)<<"\n";  //8

    cout<<obj1.i<<endl;
    cout<<obj2.i<<endl;
    return 0;
}