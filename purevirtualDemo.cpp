#include<iostream>
using namespace std;

class Parent
{
    public :
        int i,j;

        void Pan()
        {
            cout<<"Inside Parent Pan\n";
        }
        void Ran()
        {
            cout<<"Inside Parent Ran\n";
        }

        virtual void Credit()
        {
            cout<<"Inside Parent Credit\n";
        }

        virtual void Adhar() = 0;  //abstract function
};

class Child : public Parent
{
    public: 
        int x,y;

        void Pan()
        {
            cout<<"Inside Child Pan\n";
        }
        void Ran()
        {
            cout<<"Inside Child Ran\n";
        }
        void Credit()
        {
            cout<<"Inside Child Credit\n";
        }

        void Adhar()
        {
            cout<<"Inside Child Adhar\n";
        }
};

int main()
{
    Child obj;
    obj.Ran();
  //  obj.Credit();
//    obj.Adhar();

  //  Parent *bp = NULL;
  //  bp=&obj;
    Parent *bp = new Child();
    bp->Pan();
    bp->Ran();
    bp->Credit();
    bp->Adhar();
    return 0;
}