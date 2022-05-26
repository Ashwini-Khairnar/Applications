#include<iostream>

namespace       //Anonimous namespace or unnamed namespace
{
    void fun()   //NOt accessible outside
    {
        std::cout<<"Inside fun\n";
    }
}
int main()
{
    std::cout<<"Jay Ganesh\n";

    fun();   
  
    return 0;

}