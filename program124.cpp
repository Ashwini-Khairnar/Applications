// accept string and count the occurence of letter l
#include<iostream>
using namespace std;

int CountL(char str[]) //void Display(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == 'l') || (*str == 'L'))
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

    iRet = CountL(Arr);
    cout<<"l occure : "<<iRet<<" times"<<endl;

    return 0;
}