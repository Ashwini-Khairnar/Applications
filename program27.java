//Accept number from user and display its factors
//Input: 10
//Output: 1 2 5

import java.lang.*;
import java.util.*;

class Number
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number:");
        this.iNo = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("Value is:"+this.iNo);
    }

    public void DisplayFactors()
    {
        int iCnt = 0;
        System.out.println("Factors of number are:");
        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

class program27
{
    public static void main(String arg[])
    {
        Number nobj = new Number();
        nobj.Accept();
        nobj.Display();
        nobj.DisplayFactors();
    }
}