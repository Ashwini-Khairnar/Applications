#include<iostream>
using namespace std;

template <class T>
T DisplayMax(T Arr[], int size)
{
    T max = Arr[0];
    int i = 0;
    for(i = 0; i < size; i++)
    {
        if(Arr[i] > max)
        {
            max = Arr[i];
        }
    }
    return max;
}


int main()
{
    int Brr[] = {10,20,30,40,50};
    int ret;
    ret = DisplayMax(Brr,5);
    cout<<"Maximun number is : "<<ret<<endl;

    float Crr[] = {10.11,20.11,30.11,40.11,50.11};
    float fret;
    fret = DisplayMax(Crr,5);
    cout<<"Maximun number is : "<<fret<<endl;


    return 0;
}