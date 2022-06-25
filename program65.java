//Accept N numbers from user and return Smallest number between them.

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
    public int DisplaySmallest()
    {
        int iCnt = 0;
        int iMin = Arr[0];
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
        }
        return iMin;
    }
}

class program65
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
        iRet = obj.DisplaySmallest();
        System.out.println("Smallest number is : "+ iRet);
    }
}