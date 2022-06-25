//Input : row = 4         column = 4

/*Output:  
A B C D
A B C D
A B C D
A B C D

*/
//Time Complexity: n/2 


#include<iostream>
using namespace std;

class Pattern
{
    private : 
        int iRow;
        int iCol;
    
    public:
        Pattern(int a, int b)
        {
            this->iRow = a;
            this->iCol = b;
        }

        void DisplayPattern()
        {
            int i = 0, j = 0;
            char ch = '\0';

            for(i = 1; i <= iRow; i++)
            {
                for(j = 1, ch = 'A'; j <= iCol; j++, ch++)
                {
                   cout<<ch<<"\t";
                }
                cout<<endl;
            }
        }
};

int main()
{
    Pattern obj(4,4);
    obj.DisplayPattern();

    return 0;
}