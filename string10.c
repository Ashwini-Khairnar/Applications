// display names of students starting with perticular character

#include<stdio.h>
int main()
{
    char name[40], firstchar;
    int iNo=0, i=0;
    void *ptr=name;

    printf("How many students are their in class: ");
    scanf("%d",&iNo);

    printf("Enter the name of the students:\n");
         for(i=0; i<iNo; i++)
                ptr = gets(name[i]);

    printf("Enter the first character of students name: ");
    scanf("%c",&firstchar);

    printf("Students whose names start with %c are :\n", firstchar);
    for(i=0; i<iNo; i++)
        if(name[i]==firstchar)
           ptr = puts(name[i]);

    return 0;
}