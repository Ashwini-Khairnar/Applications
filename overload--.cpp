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
        Demo operator --()       //pre
        {
            Demo temp;
            temp.i= --i;
            return temp;  
        }

        Demo operator --(int)  //post
        {
            Demo temp;
            temp.i = i--;
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
    cout<<"Before decrement: ";
    obj1.dispaly();

    Demo obj2 = --obj1;
    cout<<"After pre decrement: ";
    obj2.dispaly();

    Demo obj3(100);
    cout<<"Before decrement: ";
    obj3.dispaly();

    Demo obj4 = obj3--;
    cout<<"After post decrement: ";
    obj4.dispaly();
    
    return 0;
}
