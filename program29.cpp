//Accept no from user and perform addition of factors
//Input : 10
//Output: 1 + 2 + 5= 8

#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;

    public:
        void Accept()
        {
            cout<<"Enter number: "<<endl;
            cin>>this->iNo;
        }

        void Display()
        {
            cout<<"Value is: "<<this->iNo<<endl;
        }
        
        int SumFactor()
        {
            int iCnt = 0, iSum = 0;
            if(iNo  < 0)
            {
                iNo = -iNo;
            }

            for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
            {
                if((iNo % iCnt) == 0)
                {
                    iSum += iCnt;
                }
            }
            return iSum;
        }

};

int main()
{
    Number nobj;
    int iRet = 0;

    nobj.Accept();
    nobj.Display();
    iRet = nobj.SumFactor();
    cout<<"Sum of Factors is : "<<iRet<<endl;


    return 0;
}