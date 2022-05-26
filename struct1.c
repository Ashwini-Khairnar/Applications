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
    struct pad obj;

    printf("Object of type struct pad will take %d bytes\n",sizeof(struct pad));
    printf("Structure variable obj takes %d bytes\n",sizeof(obj));
    return 0;
}