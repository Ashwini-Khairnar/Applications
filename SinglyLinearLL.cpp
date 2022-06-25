#include<iostream>
using namespace std;

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
    int Data;
    node *Next;
};
typedef struct node NODE;
typedef struct node *PNODE;

class Singly_LinkedList
{
private:
    PNODE Head;
public:
    Singly_LinkedList();
    ~Singly_LinkedList();
    BOOL InsertFirst(int);
    BOOL InsertLast(int);
    BOOL InsertAtPosition(int, int);
    inline void Display();
    inline int Count();
    BOOL DeleteFirst();
    BOOL DeleteLast();
    BOOL DeleteAtPosition(int);
};

Singly_LinkedList::Singly_LinkedList()
{
    Head = NULL;
}

Singly_LinkedList::~Singly_LinkedList()
{
    PNODE Temp, Navigate;
    if(Head != NULL)
    {
        Navigate = Head;
        while(Navigate != NULL)
        {
            Temp = Navigate->Next;
            delete Navigate;
            Navigate = Temp;
        }
    }
}
BOOL Singly_LinkedList::InsertFirst(int no)
{
    PNODE newn = NULL;
    newn = new NODE;

    if(newn == NULL)
    {
        return FALSE;
    }
    newn->Data = no;
    newn->Next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        newn->Next = Head;
        Head = newn;
    }
    return TRUE;

}
BOOL Singly_LinkedList::InsertLast(int no)
{
    PNODE newn = NULL;
    newn = new NODE;

    PNODE temp = Head;

    if(newn == NULL)
    {
        return FALSE;
    }
    newn->Data = no;
    newn->Next = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        while(temp->Next != NULL)
        {
            temp = temp->Next;
        }
        temp->Next = newn;
    }
    return TRUE;
}
BOOL Singly_LinkedList::InsertAtPosition(int no, int pos)
{
    if((Head==NULL) || (pos>Count()+1) || (pos <= 0))
    {
        return FALSE;
    }
    if(pos == 1)
    {
        return(InsertFirst(no));
    }
    else if(pos == Count()+1)
    {
        return(InsertLast(no));
    }
    else
    {
        PNODE newn = NULL, temp = Head;

        newn = new NODE;
        if(newn == NULL)
        {
            return FALSE;
        }
        newn->Next = NULL;
        newn->Data = no;

        for(int i=1; i<(pos-2); i++)
        {
            temp = temp->Next;
        }
        newn->Next = temp->Next;
        temp->Next = newn;
    }
    return TRUE;
}
void Singly_LinkedList::Display()
{
    PNODE Temp = Head;
    while(Temp != NULL)
    {
        cout<<Temp->Data<<"->";
        Temp = Temp->Next;
    }
    cout<<"NULL\n";
}

int Singly_LinkedList::Count()
{
    PNODE Temp = Head;
    int iCnt = 0;

    while(Temp != NULL)
    {
        iCnt++;
        Temp = Temp->Next;
    }
    return iCnt;
}

BOOL Singly_LinkedList::DeleteFirst()
{
    PNODE temp = Head;
    if(Head == NULL)
    {
        return FALSE;
    }
    else
    {
        Head = Head -> Next;
        free(temp);
    }
    return TRUE;
}

BOOL Singly_LinkedList::DeleteLast()
{
    PNODE temp = Head;
    if(Head == NULL)
    {
        return FALSE;
    }
    else if(Head -> Next == NULL)
    {
       delete Head;
       Head = NULL;
    }
    else
    {
        PNODE temp1 = Head, temp2 = NULL;

        while(temp1->Next->Next != NULL)
        {
            temp1 = temp1-> Next;
        }
        temp2 = temp1->Next;
        temp1->Next = NULL;
        free(temp2);
    }
    return TRUE;
}

BOOL Singly_LinkedList::DeleteAtPosition(int pos)
{
    if((Head == NULL) || (pos > Count()) || (pos <= 0))
    {
        return FALSE;
    }
    else if(pos == 1)
    {
       DeleteFirst();
    }
    else if(pos == (Count()))
    {
        DeleteLast();
    }
    else
    {
        PNODE temp1 = Head, temp2 = NULL;

        for(int i =1; i<(pos-2);i++)
        {
            temp1 = temp1->Next;
        }
        temp2 = temp1->Next;
        temp1->Next = temp2->Next;
        delete temp2;
    }
    return TRUE;
}

int main()
{
    Singly_LinkedList obj1;
    Singly_LinkedList *obj2 = new Singly_LinkedList();

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.Display();
    cout<<"Number of nodes : "<<obj1.Count()<<"\n";

    obj1.InsertAtPosition(55,2);
    obj1.InsertAtPosition(5555,4);   
    obj1.InsertLast(75);
    obj1.InsertLast(555); 
    obj1.Display();

    obj1.DeleteFirst();
    obj1.DeleteLast();
    obj1.DeleteAtPosition(3);
    obj1.Display();

    obj2->InsertFirst(101);
    obj2->InsertFirst(111);
    obj2->InsertFirst(1201);
    obj2->Display();
    cout<<"Number of nodes : "<<obj2->Count()<<"\n";

    obj2->InsertLast(2000);
    obj2->InsertAtPosition(3000,3);
    obj2->Display();

    obj2->DeleteFirst();
    obj2->DeleteLast();
    obj2->DeleteAtPosition(2);
    obj2->Display();

}