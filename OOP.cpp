#include<iostream>
using namespace std;

class Arithmatic
{
    public:
    //Characteristics
    int iNo1;
    int iNo2;

    //Behaviour

    Arithmatic()    // Default Constructor
    {
        cout<<"Inside default constructor\n";
        iNo1 = 0;
        iNo2 = 0;
    }

    Arithmatic(int A, int B)    // Parameterised Constructor
    {
        cout<<"Inside parameterised constructor\n";
        iNo1 = A;
        iNo2 = B;
    }

    ~Arithmatic()
    {
        cout<<"Inside destructor\n";
    }

    int Addition()
    {
        int iAns = 0;
        iAns = iNo1 + iNo2;
        return iAns;
    }

    int Subtraction()
    {
        int iAns = 0;
        iAns = iNo1 - iNo2;
        return iAns;
    }
};

int main()
{
     int iValue1=0, iValue2=0, iRet=0;

    cout<<"Enter first number\n";
    cin>>iValue1;

    cout<<"Enter second number\n";
    cin>>iValue2;

    Arithmatic obj1;
    Arithmatic obj2(iValue1, iValue2);

    iRet = obj2.Addition();
    cout<<"Addition is:"<<iRet<<"\n";

    iRet = obj2.Subtraction();
    cout<<"Subtraction is:"<<iRet<<"\n";
    
    return 0;
}