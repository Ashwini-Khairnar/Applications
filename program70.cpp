//Accept N nos and one other number and search  Last occurrence of that no.


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
        int SearchLastOcc()
        {
            int iCnt = 0, iNo = 0;
           
            cout<<"Enter element to search"<<endl;
            cin>>iNo;

            for(iCnt = iSize - 1; iCnt >= 0; iCnt--)
            {
                if(Arr[iCnt] == iNo)
                {
                    break;
                }
            }
            return iCnt;
            
        }
};

int main()
{
    int iRet = 0;
    ArrayX obj(10);

    obj.Accept();
    obj.Display();
    iRet = obj.SearchLastOcc();
    if(iRet == -1)
    {
        cout<<"Element is not present there."<<endl;
    }
    else{
        cout<<"Element is occured at "<<iRet<<endl;
    }
    
    return 0;
}