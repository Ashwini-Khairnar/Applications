//Multiple reference to single variable

#include<iostream>
using namespace std;

int main()
{
    int no = 11;

    int &x = no;
    
    int &y = no;
    return 0;
}