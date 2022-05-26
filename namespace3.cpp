#include<iostream>

namespace Marvellous
{
    void fun()
    {
        std::cout<<"Inside fun Marvellous\n";
    }
}
namespace Infosystem
{
    void fun()
    {
        std::cout<<"Inside fun Infosystems\n";
    }
}

int main()
{
    std::cout<<"Jay Ganesh\n";
   
   // Marvellous::fun();
    
    using namespace Marvellous;  //use it when we have required 1 function many times
   using namespace Infosystem;
  //  fun();    //Ambiguty
  Infosystem::fun();

    return 0;

}