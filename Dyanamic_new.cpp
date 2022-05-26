#include<iostream>
using namespace std;

void OneDimentional();
void TwoDimentional();
void ThreeDimentional();

int main()
{
    int choice;

    cout<<"Enter your choice:\n";
    cout<<"1: One Dimentional\n";
    cout<<"2: Two Dimentional\n";
    cout<<"3: Three Dimentional\n";
    cin>>choice;

    switch(choice)
    {
        case 1:OneDimentional();
                break;
                
        case 2:TwoDimentional();
                break;
                
        case 1:ThreeDimentional();
                break;
        
        default:cout<<"Not valid choice";
    }

    return 0;
}

void OneDimentional()
{
    int *p;
    int col, i;

    cout<<"Enter number of elements:";
    cin>>col;

    p = new int[col];

    cout<<"Enter the elements\n";
    for(i=0;i<col;i++)
    {
        cin>>p[i];
    }

    cout<<"Elements in 1D array are\n";
    for(i=0;i<col;i++)
    {
        cout<<" %d ", p[i];
    }

    cout<<"Free the allocated memory for the 1D array\n";
    delete p;
}
void TwoDimentional()
{
    int **p = NULL;
    int col, row, i,j;

    cout<<"Enter number of elements:";
    cin>>col;

    p = new int[col];

    cout<<"Enter the elements\n";
    for(i=0;i<col;i++)
    {
        cin>>p[i];
    }

    cout<<"Elements in 1D array are\n";
    for(i=0;i<col;i++)
    {
        cout<<" %d ", p[i];
    }

    cout<<"Free the allocated memory for the 1D array\n";
    delete p;
}


















