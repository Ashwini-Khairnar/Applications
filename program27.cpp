//Accept number from user and display its factors
//Input: 10
//Output: 1 2 5


#include<iostream>
using namespace std;

class Number
{
private:
   int iNo;
public:
    void Accept()
    {
        cout<<"Enter number:"<<endl;
        cin>>this->iNo;
    }

    void Display()
    {
        cout<<"Value is:"<<this->iNo<<endl;
    }

    void DisplayFactors()
    {
        int iCnt = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }
        for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                cout<<iCnt<<endl;
            }
        }
    }

};

int main()
{
    Number nobj;

    nobj.Accept();
    nobj.Display();

    nobj.DisplayFactors();

    return 0;
}