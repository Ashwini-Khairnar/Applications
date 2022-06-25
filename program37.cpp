//Accept number from user and check whether number is prime no. or not

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

        bool CheckPrime()
        {
            int iCnt = 0, iSum = 0, flag = true;

            for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
            {
                if((iNo % iCnt) == 0)
                {
                    flag = false;
                    break;
                }
            }
            return flag;  
        }

};

int main()
{
    bool bRet = 0;
    Number nobj;

    nobj.Accept();
    nobj.Display();
    bRet = nobj.CheckPrime();

    if(bRet == true)
    {
        cout<<"Number is prime"<<endl;
    }
    else
    {
        cout<<"Number is not prime"<<endl;
    }

    return 0;
}