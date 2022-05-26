#include<iostream>
using namespace std;

//public private
class Demo
{
    int i;          //by default private characteristics

    public:
        int x;

    private:
        int y;

        void gun()
        {
            cout<<"Inside private gun\n";
            cout<<y<<endl;                    //ALLOWED
        }  

    public:
        Demo()
        {
            x=10;
            y=20;
            i=30;
        }
    
        void fun()
        {
            cout<<"Inside public fun\n";
            cout<<y<<endl;                    //ALLOWED
            gun();                            //ALLOWED
        }

   /* private:
        void gun()
        {
            cout<<"Inside private gun\n";
            cout<<y<<endl;                    //ALLOWED
        }  */
};

int main()
{
    Demo obj;
    cout<<obj.x<<"\n";
   // cout<<obj.y<<"\n";        //ERROR
   // cout<<obj.i<<"\n";        //ERROR

    obj.fun();
   // obj.gun();                //ERROR

    return 0;
}