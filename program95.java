//Input : row = 4         column = 4

/*Output: 

A A A A
B B B B
C C C C
D D D D

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
        for(i = 1, ch = 'A'; i <= 4; i++, ch++)
        {
            for(j = 1 ; j <= 4; j++)
            {
                System.out.print(ch+"\t");
            }
            System.out.println();
        }
    }
}

class program95
{
    public static void main(String arg[])
    {
        Pattern  obj = new Pattern(4,4);
        obj.DisplayPattern();
    }
}