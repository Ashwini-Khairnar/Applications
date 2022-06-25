#include<iostream>
using namespace std;

int main()
{
    char Arr[] = "Hello";
    int i = 0;

    cout<<Arr<<endl;
    printf("%s\n",Arr);

    cout<<"Using WHILE loop"<<endl;
    while(Arr[i] != '\0')
    {
        cout<<Arr[i]<<endl;
        i++;
    }

    cout<<"Using FOR loop"<<endl;
    for(i = 0; Arr[i] != '\0'; i++)
    {
        cout<<Arr[i]<<endl;
    }

    return 0;
}