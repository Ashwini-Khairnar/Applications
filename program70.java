//Accept N nos and one other number and search last occurence.
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
        System.out.println("Enter array elements:");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        int iCnt = 0;
        System.out.println("Array elements are:");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            System.out.println(Arr[iCnt]); 
        }
    }

    public int SearchLastOccurence()
    {
        int iCnt = 0, iNum = 0 ;
        
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter elements to search:");
        iNum = sobj.nextInt();

        for(iCnt = Arr.length-1; iCnt > 0; iCnt--)
        {
            if( Arr[iCnt] == iNum)
            {
                break;
            }
        }
        return iCnt;
    }
}

class program70
{
    public static void main(String arg[])
    {
        int iRet;
        int iLength = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter value for constructor : ");
        iLength = sobj.nextInt();

        ArrayX obj = new ArrayX(iLength);

        obj.Accept();
        obj.Display();

        iRet = obj.SearchLastOccurence();

        if(iRet == -1)
        {
            System.out.println("No such element is there in array");
        }
        else
        {
            System.out.println("Element last occured at:"+iRet);
        }
    }
}