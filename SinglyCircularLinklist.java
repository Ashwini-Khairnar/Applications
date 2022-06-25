import java.lang.*;
import java.util.*;

class node
{
    public int data;
    public node next;
}

class SinglyCLL
{
    public node Head;
    public node Tail;
    public int Count;

    public SinglyCLL()
    {
        Head = null;
        Tail = null;
        Count = 0;
    }
    
    public void InsertFirst(int no)
    {
        node newn = new node();
        newn.data = no;
        newn.next = null;

        if((Head == null) && (Tail == null))
        {
            Head = newn;
            Tail = newn;
        }
        else
        {
            newn.next = Head;
            Head = newn;
        }
        Tail.next = Head;
        Count++;
    }

    public void InsertLast(int no)
    {
        node newn = new node();
        newn.data = no;
        newn.next = null;

        if((Head == null) && (Tail == null))
        {
            Head = newn;
            Tail = newn;
        }
        else
        {
            Tail.next = newn;
            Tail = newn;
        }
        Tail.next = Head;
        Count++;
    }

    public void Display()
    {
        node temp = Head;

        System.out.println("Elemnets of Link list are :");
        if(Head == null && Tail == null)
        {
            return;
        }
        do
        {
                System.out.print(temp.data + "|->");
                temp = temp.next;
        }while(temp != Head);
    
        System.out.println();
    }

    public int CountNode()
    {
        return Count;
    }

    public void DeleteFirst()
    {
        if(Head == null && Tail == null)
        {
            return;
        }
        else if(Head == Tail)
        {
           // delete Head;
            Head = null;
            Tail = null;
        }
        else
        {
            Head = Head.next;
            Tail.next = null;

            Tail.next = Head;
        }
        Count--;
    }

    public void DeleteLast()
    {
        if(Head == null && Tail == null)
        {
            return;
        }else if(Head == Tail)
        {
            //delete Tail;
            Head = null;
            Tail = null;
        }
        else
        {
            node temp = Head;
            while(temp.next != Tail)
            {
                temp =temp.next;
            }
            Tail = null;  //delete Tail
            Tail = temp;
    
            Tail.next = Head; 
        }
        Count--;
    }

    public void InsertAtPos(int no, int pos)
    {

    if((pos < 1) || (pos > Count+1))
    {
        System.out.println("Invalid Position");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == Count + 1)
    {
        InsertLast(no);
    }
    else
    {
        
        node newn = new node();
        
        newn.data = no;
        newn.next = null;

        node temp = Head;
        int iCnt = 0;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp.next; 
        }
        newn.next = temp.next;
        temp.next = newn;
    }
    }

    public void DeleteAtPos(int pos)
    {
        if((pos < 1) || (pos > Count))
        {
            return;
        }
        
        if(pos == 1)
        {
            DeleteFirst();
        }
        else if(pos == Count)
        {
            DeleteLast();
        }
        else
        {
            node temp = Head;

            for(int i = 1; i < pos-1; i++)
            {
                temp = temp.next;
            }
            node temp2 = temp.next;
           temp.next = temp2.next;
             temp2 = null;
            Count--;
        }
    }
}

class SinglyCircularLinklist
{
    public static void main(String arg[])
    {
        SinglyCLL obj = new SinglyCLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.InsertLast(101);
        obj.InsertLast(111);

        obj.InsertAtPos(55,4);
        obj.Display();
        obj.DeleteAtPos(4);

        obj.Display();
        System.out.println("Number of elements are : "+obj.CountNode());

        obj.DeleteFirst();
        obj.DeleteLast();

        obj.Display();
        System.out.println("Number of elements are : "+obj.CountNode());
    }
}