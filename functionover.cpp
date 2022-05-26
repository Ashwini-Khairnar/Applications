#include<iostream>
using namespace std;

class Demo
{
    public:
    int Addition(int no1, int no2)   //Addition@2ii
    {
        int ans=0;
        ans=no1+no2;
        return ans;
    }

    int Addition(int no1, int no2, int no3)   //Addition@3iii
    {
        int ans=0;
        ans=no1+no2+no3;
        return ans;
    }

    int Addition(int no1, int no2, int no3, int no4)    //Addition@4iiii
    {
        int ans=0;
        ans=no1+no2+no3+no4;
        return ans;
    }
};

int main()
{
    Demo obj;
    int ret = 0;

    //PUSH 10
    //PUSH 11
    //1000
    ret = obj.Addition(10,11);
    cout<<ret<<"\n";

    //PUSH 10
    //PUSH 11
    //PUSH 21
    //1000
    ret = obj.Addition(10,11,21);
    cout<<ret<<"\n";

    ret = obj.Addition(10,11,21,51);
    cout<<ret<<"\n";

    return 0;
}