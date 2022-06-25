//Input : row = 4         column = 4

/*Output: 

A B C D
A B C D
A B C D
A B C D

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
        char ch = '\0';
        for(i = 1; i <= 4; i++)
        {
            for(j = 1, ch = 'A' ; j <= 4; j++, ch++)
            {
                System.out.print(ch+"\t");
            }
            System.out.println();
        }
    }
}

class program94
{
    public static void main(String arg[])
    {
        Pattern  obj = new Pattern(4,4);
        obj.DisplayPattern();
    }
}