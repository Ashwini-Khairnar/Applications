//Accept no from user and perform addition of factors
//Input : 10
//Output: 1 + 2 + 5= 8

import java.lang.*;
import java.util.*;

class Number
{
    private int iNo;

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number: ");
        this.iNo = sobj.nextInt();
    }

    public void Display()
    {
        System.out.println("Value is: " + this.iNo);
    }

    public int DisplaySumFactors()
    {
        int iCnt = 0, iSum = 0;
        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum += iCnt;
            }
        }
        return iSum;

    }
}

class program29
{
    public static void main(String a[])
    {
        int iRet = 0;
        Number nobj = new Number();
        nobj.Accept();
        nobj.Display();
        iRet = nobj.DisplaySumFactors();
        System.out.println("Addition of Factors is: "+iRet);
    }
}