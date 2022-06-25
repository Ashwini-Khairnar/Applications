//Accept N nos and one other number and search that no.


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
        bool Search()
        {
            int iCnt = 0, iNo = 0;
            bool flag = false;
            cout<<"Enter element to search"<<endl;
            cin>>iNo;

            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iNo)
                {
                    flag = true;
                    break;
                }
            }
            return flag;
        }
};

int main()
{
    bool bRet = 0;
    ArrayX obj(5);

    obj.Accept();
    obj.Display();
    bRet = obj.Search();
    if(bRet == true)
    {
        cout<<"Element is present there."<<endl;
    }
    else{
        cout<<"Element is not present there."<<endl;
    }
    
    return 0;
}