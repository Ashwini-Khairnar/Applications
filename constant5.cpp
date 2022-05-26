#include<iostream>
using namespace std;

class Demo
{
    public : 
        int i;
        const int j ;  //constant characteristics

        Demo(int a, int b) : j(b)
        {
            i = a;
        }

        void fun()
        {
            cout<<"Inside fun\n";
            i++;    //Allowed
          //  j++;  //Not allowed
        }

    // b is a constant input argument
        void gun(int a, const int b) const  //constant function/behaviour
        {
            int x = 10;
            const int y =20;  //constant variable

            cout<<"Inside gun\n";
           // i++;    //Not Allowed
           // j++;  //NOt Allowed

            x++;    //Allowed
          //  y++;    //NOt Allowed

            a++;    //Allowed
          //  b++;    //Not Allowed
        }
};
int main()
{
    Demo obj(11,21);

    const Demo obj1(10,20);// i and j both are constant

    cout<<obj.i<<endl;
    cout<<obj.j<<endl;

    obj.i++;
    cout<<obj.i<<endl;
    // obj.j++; Not allowed

    obj.fun();
    obj.gun(10,20);

  //  obj1.fun();  //Not allowed
    obj1.gun(10,20);
    
    return 0;
}