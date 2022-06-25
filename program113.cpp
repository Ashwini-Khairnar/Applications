//Accept number and return the factorial
//input : 4
//output: 4*3*2*1
//        1*2*3*4  
#include<iostream>
using namespace std;

class Number
{
    private:
        int iNo;

    public : 
        void Accept()   //setter
        {
            cout<<"Enter the value : "<<endl;
            cin>>this->iNo;
        }

        void Display()  //getter
        {
            cout<<"Value is : "<<this->iNo<<endl;
        }
    
        int Factorial()
        {
            int iFact = 1, iCnt = 0;

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                iFact *= iCnt;
            }
            return iFact;
        } 
};

int main()
{
    Number nobj1;
    Number nobj2;
    int iRet = 0;

    //cout<<nobj.iNo;

    nobj1.Accept();
    nobj1.Display();
    iRet = nobj1.Factorial();
    cout<<"Factorial is : "<<iRet<<endl;

    nobj2.Accept();
    nobj2.Display();
    iRet = nobj2.Factorial();
    cout<<"Factorial is : "<<iRet<<endl;
    return 0;
}