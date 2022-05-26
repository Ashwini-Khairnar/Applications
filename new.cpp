#include<iostream>
 
 using namespace std;
 
 int main()
 {
    int Arr[10];
    int *p = NULL;
    // p = (int *)malloc(sizeof(int)* 10);

  /*  int id[10];
    int *ptr = NULL;

    ptr = new int[10];
    if(ptr == NULL)
    {
        cout<<"UNABLE TO ALLOCATE THE MEMORY\n";
    }
    else
    {
        cout<<"MEMORY ALLOCATED SUCCESSFULLY AT ADDRESS "<<ptr<<endl;
    }   */

    p = new int[10];
    if(p==NULL)
    {
        cout<<"Unable to allocate the memory\n";
    }
    else
    {
        cout<<"Memory gets allocated successfully at address : "<<p<<"\n";
    }

    //free(p);
    delete []p;
     return 0;
 }

