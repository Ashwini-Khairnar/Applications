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
bool operator == (Demo op1, Demo op2)
{
    if((op1.x==op2.x) && (op1.y==op2.y))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator < (Demo op1, Demo op2)
{
    if((op1.x<op2.x) && (op1.y<op2.y))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator > (Demo op1, Demo op2)
{
    if((op1.x>op2.x) && (op1.y>op2.y))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator <= (Demo op1, Demo op2)
{
    if((op1.x<=op2.x) && (op1.y<=op2.y))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator >= (Demo op1, Demo op2)
{
    if((op1.x>=op2.x) && (op1.y>=op2.y))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool operator != (Demo op1, Demo op2)
{
    if((op1.x!=op2.x) && (op1.y!=op2.y))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    Demo obj1(11,21);
    Demo obj2(11,21);

    if(obj1 == obj2)
    {
        cout<<"Objects are same"<<endl;
    }
    else
    {
        cout<<"Objects are different"<<endl;
    }

    if(obj1 < obj2)
    {
        cout<<"Object1 is smaller"<<endl;
    }
    else
    {
        cout<<"Object2 is smaller"<<endl;
    }

    if(obj1 > obj2)
    {
        cout<<"Object1 is Greater"<<endl;
    }
    else
    {
        cout<<"Object2 is Greater"<<endl;
    }

    if(obj1 <= obj2)
    {
        cout<<"Object1 is less than equal to object2"<<endl;
    }
    else
    {
        cout<<"Object2 is less than equal to object1"<<endl;
    }

     if(obj1 >= obj2)
    {
        cout<<"Object1 is greater than equal to object2"<<endl;
    }
    else
    {
        cout<<"Object2 is greater than equal to object1"<<endl;
    }

     if(obj1 != obj2)
    {
        cout<<"Object1 is not equal to object2"<<endl;
    }
    else
    {
        cout<<"Objects are equal"<<endl;
    }

    return 0;
}