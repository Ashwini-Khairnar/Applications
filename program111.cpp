//Accept number and return the factorial
//input : 4
//output: 4*3*2*1
//        1*2*3*4  
#include<iostream>
using namespace std;

int Factorial(int iNo)
{
    int iFact = 1, iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact *= iCnt;
    }
    return iFact;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter number\n";
    cin>>iValue;

    iRet = Factorial(iValue);

    cout<<"Factorial is : "<<iRet<<endl;
    return 0;
}