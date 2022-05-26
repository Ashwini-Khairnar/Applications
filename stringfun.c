#include<stdio.h>
void myFunction(char name[],int age);

int main() 
{
  myFunction("Liam",3);
  myFunction("Jenny",5);
  myFunction("Anja",10);
  return 0;
}

void myFunction(char name[], int age)
{
  printf("Hello %s.You are %d years old.\n", name,age);
}