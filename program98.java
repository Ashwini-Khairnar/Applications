//Input : row = 4         column = 4

/*Output: 

ABCD
abcd
ABCD
abcd

*/
//Time Complexity: n^2 

import java.lang.*;
import java.util.*;

class Pattern
{
    private int iRow, iCol;

    public Pattern(int a, int b)
    {
        this.iRow = a;
        this.iCol = b;
    }

    public void DisplayPattern()
    {
        int i = 0, j = 0;
        char ch1 = '\0', ch2 = '\0';
        for(i = 1; i <= 4; i++)
        {
            for(j = 1, ch1 = 'a', ch2 = 'A' ; j <= 4; j++, ch1++, ch2++)
            {
                if(i % 2 == 0)
                {
                    System.out.print(ch1+"\t");
                }
                else
                {
                    System.out.print(ch2+"\t");
                }  
            }
            System.out.println();
        }
    }
}

class program98
{
    public static void main(String arg[])
    {
        Pattern  obj = new Pattern(4,4);
        obj.DisplayPattern();
    }
}