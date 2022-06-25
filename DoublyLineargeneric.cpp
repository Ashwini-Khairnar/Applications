//Generic LinkList

#include<iostream>
using namespace std;

template<class T>
struct node
{
    T Data;
    struct node *Next;
    struct node *prev;
};

template<class T>
class DoublyLL
{
    public:
        struct node<T> *Head;
        int Count;

    DoublyLL();
    void InsertFirst(T);
    void InsertLast(T);
    void DeleteFirst();
    void DeleteLast();
    void InsertAtPos(T,int pos);
    void DeleteAtPos(int pos);
    void Display();
    int CountNode();
};

template<class T>
DoublyLL<T>::DoublyLL()
{
    Head = NULL;
    Count = 0;
}

template<class T>
void DoublyLL<T>::InsertFirst(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    if(newn == NULL)
    {
        return;
    }
    newn->Data = no;
    newn->Next = NULL;
    newn->prev = NULL;

    if(Head == NULL)
    {
        Head = newn;
    }
    else
    {
        newn->Next = Head;
        Head->prev = newn;
        Head = newn;
    }

    Count++;
}

template<class T>
void DoublyLL<T>::InsertLast(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    struct node<T> * temp = Head;

    if(newn == NULL)
    {
        return;
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
        newn->prev = temp;
    }
    Count++;
}

template <class T>
void DoublyLL<T> :: Display()
{
    cout<<"Elements from LinkedKist are "<<endl;
    struct node<T> *temp = Head;
    while(temp != NULL)
    {
        cout<<temp->Data<<" ";
        temp = temp->Next;
    }
    cout<<endl;
}
template <class T>
int DoublyLL<T> :: CountNode()
{
    return Count;
}

template<class T>
void DoublyLL<T>::DeleteFirst()
{
    struct node<T> *temp = Head;

    if(Head == NULL)
    {
        return;
    }
    else
    {
        Head = Head -> Next;
        Head->prev = NULL;
        delete(temp);
    }
}

template<class T>
void DoublyLL<T>::DeleteLast()
{
    struct node<T> *temp = Head;
    if(Head == NULL)
    {
        return;
    }
    else if(Head -> Next == NULL)
    {
       delete Head;
       Head = NULL;
    }
    else
    {
        struct node<T> *temp = Head;

        while((temp->Next) != NULL)
        {
            temp = temp-> Next;
        }
        temp->prev->Next = NULL;
        delete temp;
    }
}

template <class T>
void DoublyLL<T>::InsertAtPos(T no, int pos)
{
    if((Head==NULL) || (pos>Count+1) || (pos <= 0))
    {
        return;
    }
    if(pos == 1)
    {
        return(InsertFirst(no));
    }
    else if(pos == Count+1)
    {
        return(InsertLast(no));
    }
    else
    {
        struct node<T> *newn = NULL;
        struct node<T> *temp = Head;
        newn = new node<T>;
        if(newn == NULL)
        {
            return;
        }
        newn->Next = NULL;
        newn->prev = NULL;
        newn->Data = no;

        for(int i=1; i<=(pos-2); i++)
        {
            temp = temp->Next;
        }
        newn->Next = temp->Next;
        temp->Next->prev = newn;
        temp->Next = newn;
        newn->prev = temp;
    }
}

template <class T>
void DoublyLL<T>::DeleteAtPos(int pos)
{
    if((Head == NULL) || (pos > Count) || (pos <= 0))
    {
        return;
    }
    else if(pos == 1)
    {
       DeleteFirst();
    }
    else if(pos == (Count))
    {
        DeleteLast();
    }
    else
    {
        struct node<T> *temp = Head;

        for(int i =1; i<=(pos-2);i++)
        {
            temp = temp->Next;
        }
        temp->Next = temp->Next->Next;
        delete(temp->Next->prev);
        temp->Next->prev = temp;
    }
}


int main()
{
    DoublyLL <int>obj1;
    DoublyLL <float>obj2;
    DoublyLL <char>obj3;

    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.InsertLast(51);
    obj1.InsertLast(101);

    obj1.Display();
    cout<<"Number of nodes are : "<<obj1.CountNode()<<endl;

    obj1.DeleteFirst();
    obj1.Display();

    obj1.InsertAtPos(1000,3);
    obj1.Display();

    obj1.DeleteAtPos(2);
    obj1.Display();

    obj2.InsertFirst(21.11);
    obj2.InsertFirst(11.11);
    obj2.InsertLast(51.11);
    obj2.InsertLast(101.11);

    obj2.Display();
    cout<<"Number of nodes are : "<<obj2.CountNode()<<endl;

    obj2.DeleteLast();
    obj2.Display();

    obj2.InsertAtPos(2000.25,3);
    obj2.Display();

    obj2.DeleteAtPos(3);
    obj2.Display();

    obj3.InsertFirst('D');
    obj3.InsertFirst('C');
    obj3.InsertLast('B');
    obj3.InsertLast('A');

    obj3.Display();
    cout<<"Number of nodes are : "<<obj3.CountNode()<<endl;

    obj3.DeleteFirst();
    obj3.Display();

    obj3.InsertAtPos('G',3);
    obj3.Display();

    obj3.DeleteAtPos(2);
    obj3.Display();
    return 0;
}