// accept string and return length of string
#include<iostream>
using namespace std;

int strlenX(char str[]) //void Display(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    
    cout<<"Enter string"<<endl;
   // scanf("%[^'\n']s",Arr);
    //std::getline(std::cin,Arr);
    cin.getline(Arr,20);

    iRet = strlenX(Arr);
    cout<<"String length is : "<<iRet<<endl;

    return 0;
}