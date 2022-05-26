#include<iostream>
using namespace std;

class Demo
{
    public:
        int x;
        int y;

        Demo(int i = 0, int j = 0)
        {
            x = i;
            y = j;
        }
};

Demo operator ++(Demo &op)       //pre
{
    op.x++;
    op.y++;
    return op;   
}

Demo operator ++(Demo &op, int)  //post
{
    op.x++;
    op.y++;
   // return Demo(op.x-1, op.y-1);
   return op;
}

int main()
{
    Demo obj1(10,20);
    Demo obj2(10,20);
    
    Demo robj1(0,0);
    Demo robj2(0,0);

    robj1 = ++obj1;          //without dummy 
    cout<<obj1.x<<"\n"<<obj1.y<<"\n";   //11  21
    cout<<robj1.x<<"\n"<<robj1.y<<"\n"; //11  21
      
    robj2 = obj2++;          //with dummy
    cout<<obj2.x<<"\n"<<obj2.y<<"\n";   //11  21
    cout<<robj2.x<<"\n"<<robj2.y<<"\n"; //10  20
    
    return 0;
}