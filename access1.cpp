#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;

    private:
        int j;

    protected:
        int k;

};

class Hello : public Demo
{
    public:
        int x;

    private:
        int y;

    protected:
        int z;

};

int main()
{

    return 0;
}