//Accept number from user and check whether number is perfect no. or not
//Input:6                   28
//Output:1+2+3 = 6          1+2+4+7+14

#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;
    public:
        void Accept()
        {
            cout<<"Enter number"<<endl;
            cin>>this->iNo;
        }

        void Display()
        {
            cout<<this->iNo<<endl;
        }

        bool CheckPerfect()
        {
            int iCnt = 0, iSum = 0;

            for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
            {
                if((iNo % iCnt) == 0)
                {
                    iSum += iCnt;
                }
            }
            if(iSum == iNo)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    bool bRet = 0;
    Number nobj;

    nobj.Accept();
    nobj.Display();
    bRet = nobj.CheckPerfect();

    if(bRet == true)
    {
        cout<<"Number is perfect"<<endl;
    }
    else
    {
        cout<<"Number is not perfect"<<endl;
    }
}