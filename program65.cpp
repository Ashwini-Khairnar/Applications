//Accept N numbers and return Smallest number between them

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
            cout<<"Enter array elements:"<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
        {
            int iCnt = 0;
            cout<<"Array elements are :"<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }
        int Minimum()
        {
            int iCnt = 0, iMin = Arr[0];
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] < iMin)
                {
                    iMin = Arr[iCnt];
                }
            }
            return iMin;
        }

};

int main()
{
    int iRet = 0;
    ArrayX obj(5);

    obj.Accept();
    obj.Display();
    iRet = obj.Minimum();
    cout<<"Minimum number is : "<<iRet;

    return 0;
}