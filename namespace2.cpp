#include<iostream>

namespace Marvellous
{
    void fun()
    {
        std::cout<<"Inside fun\n";
    }
}

int main()
{
    std::cout<<"Jay Ganesh\n";
   
   // Marvellous::fun();
    
    using namespace Marvellous;  //use it when we have required 1 function many times
    fun();

    return 0;

}