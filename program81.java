//Input : row = 4         column = 4

/*Output:  
1   1   1   1
2   2   2   2
3   3   3   3
4   4   4   4
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
        for(i = 1; i <= 4; i++)
        {
            for(j = 1; j <= 4; j++)
            {
                System.out.print(i+"\t");
            }
            System.out.println();
        }
    }
}

class program81
{
    public static void main(String arg[])
    {
        Pattern  obj = new Pattern(4,4);
        obj.DisplayPattern();
    }
}