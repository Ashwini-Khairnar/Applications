// sizeof operator & stuctures

#include<stdio.h>
#pragma pack(1)
struct pad
{
    char a;
    int b;
    char c;
    float d;
};

int main()
{
    struct pad obj1={'A',2,'B',10.11};
    struct pad obj2={'A',2,'B',10.11};

    if(obj1==obj2)              //This is not allowed
        printf("Structure variables are Equal\n");
    else
        printf("Structure variables are not Equal\n");
  
    return 0;
}