//Accept N nos and one other number and count frequency of that no.

#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public: 
        ArrayX(int iValue)
        {
            this->iSize = iValue;
            Arr = new int[iSize];
        }
        ~ArrayX()
        {
            delete []Arr;
        }
        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter array elements: "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
        {
            int iCnt = 0;
            cout<<"Array elements are : "<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }
        int Frequency()
        {
            int iCnt = 0, iNo = 0, iFreq = 0;
            cout<<"Enter element to calculate frequency"<<endl;
            cin>>iNo;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iNo)
                {
                    iFreq++;
                }
            }
            return iFreq;
        }
};

int main()
{
    int iRet = 0;
    ArrayX obj(5);

    obj.Accept();
    obj.Display();
    iRet = obj.Frequency();
    cout<<"Frequency of number is:"<<iRet;
    return 0;
}