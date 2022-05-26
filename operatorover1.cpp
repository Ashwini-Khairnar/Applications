#include<iostream>
using namespace std;

class Demo
{
    public :
        int x;
        int y;

        Demo(int i =10, int j = 20)
        {
            x = i;
            y = j;
        }
};
Demo operator + (Demo op1, Demo op2)
{
    return Demo(op1.x+op2.x , op1.y+op2.y);
}

Demo operator - (Demo op1, Demo op2)
{
    return Demo(op1.x-op2.x , op1.y-op2.y);
}

Demo operator * (Demo op1, Demo op2)
{
    return Demo(op1.x*op2.x , op1.y*op2.y);
}

Demo operator / (Demo op1, Demo op2)
{
    return Demo(op1.x/op2.x , op1.y/op2.y);
}

Demo operator % (Demo op1, Demo op2)
{
    return Demo(op1.x%op2.x , op1.y%op2.y);
}

int main()
{
    Demo obj1(11,21);
    Demo obj2(21,31);
    Demo robj1(0,0);
    Demo robj2(0,0);
    Demo robj3(0,0);
    Demo robj4(0,0);
    Demo robj5(0,0);

    robj1 = obj1 + obj2;        //+(obj1,obj2);
    cout<<robj1.x<<endl;        //32
    cout<<robj1.y<<endl;        //52

    robj2 = obj2 - obj1;        //-(obj2,obj1);
    cout<<robj2.x<<endl;        //10
    cout<<robj2.y<<endl;        //10

    robj2 = obj2 * obj1;        //*(obj2,obj1);
    cout<<robj2.x<<endl;        //10
    cout<<robj2.y<<endl;        //10

    robj2 = obj2 / obj1;        //-(obj2,obj1);
    cout<<robj2.x<<endl;        //10
    cout<<robj2.y<<endl;        //10
    
    robj2 = obj2 % obj1;        //-(obj2,obj1);
    cout<<robj2.x<<endl;        //10
    cout<<robj2.y<<endl;        //10
    return 0;
}
