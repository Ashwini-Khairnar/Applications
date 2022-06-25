//Input : row = 4         column = 4

/*Output:  
$   2   3   4
1   $   3   4
1   2   $   4
1   2   3   $
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
                if(i == j)
                {
                    System.out.print("$\t");
                }
                else
                {
                    System.out.print(j+"\t");
                }
            }
            System.out.println();
        }
    }
}

class program83
{
    public static void main(String arg[])
    {
        Pattern  obj = new Pattern(4,4);
        obj.DisplayPattern();
    }
}