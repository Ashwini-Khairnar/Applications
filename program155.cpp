#include<iostream>
using namespace std;

template<class T>
void SwapR(T &p, T &q)
{
    T temp;

    temp = p;
    p = q;
    q = temp;
}

int main()
{
    int No1 = 11, No2 = 21;

    cout<<"Before swap data is :"<<endl;
    cout<<"No1 = "<<No1<<" No2 = "<<No2<<endl;
    SwapR(No1, No2);
    cout<<"After swap data is :"<<endl;
    cout<<"No1 = "<<No1<<" No2 = "<<No2<<endl;

    float fNo1 = 11.55, fNo2 = 21.03;
    cout<<"Before swap data is :"<<endl;
    cout<<"No1 = "<<fNo1<<" No2 = "<<fNo2<<endl;
    SwapR(fNo1, fNo2);
    cout<<"After swap data is :"<<endl;
    cout<<"No1 = "<<fNo1<<" No2 = "<<fNo2<<endl;

    double dNo1 = 11.20, dNo2 = 21.50;
    cout<<"Before swap data is :"<<endl;
    cout<<"No1 = "<<dNo1<<" No2 = "<<dNo2<<endl;
    SwapR(dNo1, dNo2);
    cout<<"After swap data is :"<<endl;
    cout<<"No1 = "<<dNo1<<" No2 = "<<dNo2<<endl;

    char cNo1 = 'A', cNo2 = 'B';
    cout<<"Before swap data is :"<<endl;
    cout<<"No1 = "<<cNo1<<" No2 = "<<cNo2<<endl;
    SwapR(cNo1, cNo2);
    cout<<"After swap data is :"<<endl;
    cout<<"No1 = "<<cNo1<<" No2 = "<<cNo2<<endl;

    return 0;
}