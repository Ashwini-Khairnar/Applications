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

        Demo(int a, int b) : i(a), j(b)
        {
            cout<<"Inside parameterised\n";
            b++;
    cout<<"b :"<<b<<endl;
        }
};
int main()
{
    Demo obj(11,21);
    cout<<obj.i<<endl;
    cout<<obj.j<<endl;

    obj.i++;
    cout<<obj.i<<endl;
    // obj.j++; Not allowed

    
    return 0;
}