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

        void fun(int no)  // overloaded Defination
        {
            cout<<"Inside fun\n";
        }
};
int main()
{
    
    
    
    return 0;
}