#include<iostream>
using namespace std;

class Demo
{
    public: 
        int i,j;
        void gun()   //Defination
        {
            cout<<"Inside gun";
        }

        void fun()  //Defination
        {
            cout<<"Inside fun\n";
        }
};

class Hello : public Demo
{
    public:
        int x,y;

        void sun()      //Defination
        {
            cout<<"Inside sun\n";
        }

        void gun(int n)      //redefination
        {
            cout<<"Inside gun of child\n";
        }
};
int main()
{
    
    
    
    return 0;
}