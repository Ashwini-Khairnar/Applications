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
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the values:");

        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("ELements of array are: ");
        for(int iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    public int CountEven()
    {
        int iCnt = 0, EvenCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                EvenCnt++;
            }
        }
        return EvenCnt;
    }
}

class program61
{
    public static void main(String a[])
    {
        int iLength = 0, iRet = 0;
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the value for constructor:");

        iLength = sobj.nextInt();

        ArrayX obj = new ArrayX(iLength);

        obj.Accept();
        obj.Display();
        iRet = obj.CountEven();
        System.out.println("Conut of Even numbers is:"+iRet);
    }
}