//Accept N numbers from user and count frequency of a number.

import java.lang.*;
import java.util.*;

class ArrayX
{
    private int Arr[];

    public ArrayX(int iNo)
    {
        Arr = new int[iNo];
    }

    public void Accept()
    {
        int iCnt = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the values:");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }
    public void Display()
    {
        int iCnt = 0;
        System.out.println("Elements in array are:");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }
    public int Frequency()
    {
        int iCnt = 0, iNo = 0;
        int iFreqCnt = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter element to count frequency : ");
        iNo = sobj.nextInt();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNo)
            {
               iFreqCnt++; 
            }
        }
        return iFreqCnt++;
    }
}

class program66
{
    public static void main(String a[])
    {
        int iLength = 0, iRet = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter value for constructor:");

        iLength = sobj.nextInt();
        ArrayX obj = new ArrayX(iLength);

        obj.Accept();
        obj.Display();
        iRet = obj.Frequency();
        System.out.println("Freuency of a  number is : "+ iRet);
    }
}