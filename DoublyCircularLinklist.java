import java.lang.*;
import java.util.*;

class node
{
    public int data;
    public node next;
    public node prev;
}

class DoublyLL
{
    public node Head;
    public node Tail;
    public int Count;

    public DoublyLL()
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
        newn.prev = null;

        if(Head == null)
        {
            Head = newn;
            Tail = newn;
        }
        else
        {
            newn.next = Head;
            Head.prev = newn;
            Head = newn;
        }
        Head.prev = Tail;
        Tail.next = Head;
        Count++;
    }

    public void InsertLast(int no)
    {
        node newn = new node();
        newn.data = no;
        newn.next = null;
        newn.prev = null;

        if(Head == null)
        {
            Head = newn;
            Tail = newn;
        }
        else
        {
            Tail.next = newn;
            newn.prev = Tail;

            Tail = newn;
        }

        Head.prev = Tail;
        Tail.next = Head;

        Count++;
    }

    public void Display()
    {
        node temp = Head;

        System.out.println("Elemnets of Link list are :");
        int i = 0;
    
        for(i = 1; i <= Count; i++)
        {
            System.out.print( "|" + temp.data + "|->"  );
            temp = temp.next;
        }
        System.out.println("NULL");
    }

    public int CountNode()
    {
        return Count;
    }

    public void DeleteFirst()
    {
        if(Count == 0)
        {
             return;
        }
        else if(Count == 1)
        {
            Head = null;
            Tail = null;
        }
        else
        {
            Head = Head.next;
            Tail.next = null;     //delete Head->prev
        }

        Head.prev = Tail;
        Tail.next = Head;
        Count--;
    }

     public void DeleteLast()
    {
        if(Count == 0)
        {
            return;
        }
        else if(Count == 1)
        {
            Head = null;
            Tail = null;
        }
        else
        {
            Tail = Tail.prev;
            Tail.next = null;  // delete Head->prev;
        }

        Head.prev = Tail;
        Tail.next = Head;  
        Count--;
    }

    public void InsertAtPos(int no, int pos)
    {
        if((pos < 1) || (pos > Count+1))
        {
            return;
        }
        
        if(pos == 1)
        {
            InsertFirst(no);
        }
        else if(pos == Count+1)
        {
            InsertLast(no);
        }
        else
        {
            node newn = new node();
            newn.data = no;
            newn.next = null;
            newn.prev = null;

            node temp = Head;

            for(int i = 1; i < pos-1; i++)
            {
                temp = temp.next;
            }

            newn.next = temp.next;
            temp.next = newn;
            newn.prev = temp.next;
            temp.next.prev = newn;

            Count++;

        }
    }

    public void DeleteAtPos(int pos)
    {
        if(Count == 0)
    {
        return;
    }
    else if(Count == 1)
    {
        Head = null;
        Tail = null;
    }
    else
    {
        Head = Head.next;
        Tail.next = null;     //delete Head->prev
    }

    Head.prev = Tail;
    Tail.next = Head;
    Count--;
    }
    
}

class DoublyCircularLinklist
{
    public static void main(String arg[])
    {
        DoublyLL obj = new DoublyLL();

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