#include<iostream>

using namespace std;

class Department
{
    public: 
     //characteristics
    char stud_name[50];
    char subject[20];

    Department()        //Default constructor
    {
        cout<<"Inside Default constructor\n";
    }

    Department(char stud[], char sub[])
    {
        cout<<"Inside parameterised constructor\n";
    }

    ~Department()
    {
        cout<<"Inside destructor\n";
    }

    void Accept()
    {
        cout<<"Enter student name:\n";
        cin>>stud_name;
        cout<<"Enter subject name:\n";
        cin>>subject;
    }
    void Dispaly()
    {
        cout<<"student details are:\n";
        cout<<"Student name:"<<stud_name<<endl;
        cout<<"Student Subject:"<<subject<<endl;
    }
};
int main()
{
    Department dObj1;
    Department dObj2("Ram","MAths");

    dObj1.Accept();
    dObj1.Dispaly();

    return 0;
}
