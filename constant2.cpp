#include<iostream>
using namespace std;

class Demo
{
    public : 
        int i;
        const int j ;

        Demo() : j(20)  //member initialization
        {
            i = 10;
            //j =20;
        }
};
int main()
{
    Demo obj;
    cout<<obj.i<<endl;
    cout<<obj.j<<endl;
    return 0;
}