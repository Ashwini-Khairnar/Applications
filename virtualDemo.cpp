#include<iostream>
using namespace std;

class Demo
{
    public : 
        int i, j;
        //1000
        virtual void Employee()
        {
            cout<<"Demo Employee"<<endl;
        }
        //2000
        virtual void Developer()
        {
            cout<<"Demo developer"<<endl;
        }
        //3000
        void Customer()
        {
            cout<<"Demo Customer"<<endl;
        }
        //4000
        virtual void TeamLeader()
        {
            cout<<"Demo TeamLeader"<<endl;
        }
};

class Hello : public Demo
{
    public : 
        int k, l;
        //5000
        virtual void Employee()
        {
            cout<<"Hello Employee"<<endl;
        }
        //6000
        void Developer()
        {
            cout<<"Hello developer"<<endl;
        }
        //7000
        void Customer()
        {
            cout<<"Hello Customer"<<endl;
        }
        //8000
        virtual void Team()
        {
            cout<<"Hello Team"<<endl;
        }

        void Dev()
        {
            cout<<"Hello Dev"<<endl;
        }
};

class Work : public Hello
{
    public :
        int x, y;
        
        virtual void Team()
        {
            cout<<"work Team"<<endl;
        }
        void Dev()
        {
            cout<<"Work Dev"<<endl;
        }

};

int main()
{
    Demo *dp = new Hello();

    cout<<sizeof(Demo)<<endl;
    cout<<sizeof(Hello)<<endl;
    cout<<sizeof(Work)<<endl;

    dp->Employee();     //Hello Employee
    dp->Developer();    //Hello Developer
    dp->Customer();     //Demo Customer
    dp->TeamLeader();   //Demo TeamLeader

    Hello *hp = new Work();
    hp->Team();         //Work Team
    hp->Dev();          //Hello Dev
  //  dp->Team();       Not allowed
    return 0;
}