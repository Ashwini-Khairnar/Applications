//accept sting and count no of vowels
// accept string and count the occurence of Capital letter 
#include<iostream>
using namespace std;

int CountVowels(char str[]) 
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;
    
    cout<<"Enter string"<<endl;
    cin.getline(Arr,20);

    iRet = CountVowels(Arr);
    cout<<"String contains vowels : "<<iRet<<" times"<<endl;

    return 0;
}