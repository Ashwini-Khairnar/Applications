#include<iostream>
using namespace std;

class Demo
{
    public:
        int x;
        int y;

    Demo(int a=10, int b=20)
    {
        x=a;
        y=b;
    }

    void fun(int no)
    {
        cout<<"Inside fun\n";
        
      //  cout<<"Address of function is:"<<fun<<endl;
        cout<<this->x<<endl;
        cout<<this->y<<endl;
    }
};

int main()
{
    Demo obj(11,21);
    obj.fun(51);

    return 0;
}