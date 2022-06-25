//Accept number from user and check whether number is perfect no. or not
//Input:6                   28
//Output:1+2+3 = 6          1+2+4+7+14


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

    public boolean CheckPerfect()
    {
        int iCnt = 0, iSum = 0;
        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                iSum += iCnt;
            }
        }
        if(iSum == iNo)
            return true;
        else
            return false;

    }
}

class program31
{
    public static void main(String a[])
    {
        boolean bRet ;
        Number nobj = new Number();
        nobj.Accept();
        nobj.Display();
        bRet = nobj.CheckPerfect();
        if(bRet == true)
        {
            System.out.println("Number is a Perfect number.");
        }
        else
        {
            System.out.println("Number is not a Perfect number.");
        }
        
    }
}