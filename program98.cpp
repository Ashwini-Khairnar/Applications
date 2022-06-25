//Input : row = 4         column = 4

/*Output:  
ABCD
abcd
ABCD
abcd

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
            char ch1 = '\0', ch2 = '\0';

        for(i = 1; i <= 4; i++)
        {
            for(j = 1, ch1 = 'a', ch2 = 'A' ; j <= 4; j++, ch1++, ch2++)
            {
                if(i % 2 == 0)
                {
                    cout<<ch1<<"\t";
                }
                else
                {
                    cout<<ch2<<"\t";
                }  
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