#include<iostream>
 
 using namespace std;
 
 class Demo
 {
     public:
     int x;
     int y;

    Demo()
    {
        cout<<"Inside default condtructor\n";
    }
    ~Demo()
    {
        cout<<"Inside destructor\n";
    }   
    void fun()
    {
        cout<<"Inside fun\n";
    }
 };

 int main()
 {
     Demo obj;              //static object creation

     Demo *ptr = NULL;

     ptr = new Demo;           //dynamic object creation

     obj.fun();     //direct accessing operator

     ptr->fun();    //Indirect accessing operator

     delete ptr;
     
     return 0;
 }