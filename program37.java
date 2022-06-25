//Accept number from user and check whether number is prime no. or not

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

    public boolean CheckPrime()
    {
        int iCnt = 0;
        boolean flag = true;
        for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                flag = false;
                break;
            }
        }
       return flag;

    }
}

class program37
{
    public static void main(String a[])
    {
        boolean bRet ;
        Number nobj = new Number();
        nobj.Accept();
        nobj.Display();
        bRet = nobj.CheckPrime();
        if(bRet == true)
        {
            System.out.println("Number is a Prime number.");
        }
        else
        {
            System.out.println("Number is not a Prime number.");
        }
        
    }
}