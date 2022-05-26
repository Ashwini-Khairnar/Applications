#include<iostream>
using namespace std;

void Call_Value(int no)
{
    no++;
}
void Call_Address(int *p)
{
    (*p)++;
}
void callAddress(int *ptr)
{
    (*ptr)--;
}
void Call_Reference(int &ref)
{
    ref++;
}

int main()
{
    int a=500, b=10, c=10;

    Call_Value(a);          // Call_Value(10);
    cout<<a<<endl;          //500

    callAddress(&a);        //callAddress(100)
    cout<<a<<endl;          //500-- = 499

    Call_Address(&b);       // Call_Address(200);
    cout<<b<<endl;              //11

     Call_Address(&c);       // Call_Address(300);
    cout<<c<<endl;             // 11

    Call_Reference(a);      // Call_Reference(100);
    cout<<a<<endl;              //499 + 1 = 500

    Call_Reference(c);      // Call_Reference(11);
    cout<<c<<endl;              //11++ = 12

    return 0;
}