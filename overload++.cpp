#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;

        Demo(int i = 0)
        {
            this -> i = i;
        }
        Demo operator ++()       //pre
        {
            Demo temp;
            temp.i= ++i;
            return temp;  
        }

        Demo operator ++ (int)  //post
        {
            Demo temp;
            temp.i = i++;
            return temp;
        }  
        void dispaly()
        {
            cout<<"i= "<<i<<endl;
        }
};

/*Demo operator ++()       //pre
{
    Demo temp;
    temp.i= ++i;
    return temp;  
} 

Demo operator ++ (int)  //post
{
   Demo temp;
   temp.i = i++;
   return temp;
}  */

int main()
{
    Demo obj1(10);
    cout<<"Before increment: ";
    obj1.dispaly();

    Demo obj2 = ++obj1;
    cout<<"After pre increment: ";
    obj2.dispaly();

    Demo obj3(100);
    cout<<"Before increment: ";
    obj3.dispaly();

    Demo obj4 = obj3++;
    cout<<"After post increment: ";
    obj4.dispaly();

    
    return 0;
}
