//Generic LinkList

#include<iostream>
using namespace std;

template<class T>
struct node
{
    T data;
    struct node *next;
};

template<class T>
class SinglyCLL
{
    public:
        struct node<T> *Head;
        struct node<T> *Tail;
        int Count;

    SinglyCLL();
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
SinglyCLL<T>::SinglyCLL()
{
    Head = NULL;
    Tail = NULL;
    Count = 0;
}

template<class T>
void SinglyCLL<T>::InsertFirst(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if((Head == NULL) && (Tail == NULL))        //IF LL is empty
    {
        Head = newn;
        Tail = newn;
    }
    else    //If LL contains atleast one node
    {
        newn->next = Head;
        Head = newn;
    }
    Tail->next = Head;
    Count++;
}

template<class T>
void SinglyCLL<T>::InsertLast(T no)
{
    struct node<T> *newn = NULL;
    newn = new node<T>;

    newn->data = no;
    newn->next = NULL;

    if((Head == NULL) && (Tail == NULL))        //IF LL is empty
    {
        Head = newn;
        Tail = newn;
    }
    else    //If LL contains atleast one node
    {
        Tail->next = newn;
        Tail = newn;
    }
    Tail->next = Head;
    Count++;
}

template <class T>
void SinglyCLL<T> :: Display()
{
    cout<<"Elements from LinkedKist are "<<endl;
    struct node<T> *temp = Head;
    
    if(Head == NULL && Tail == NULL)
    {
        return;
    }
    do
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp -> next;
    }while(temp != Head);
    
    cout<<endl;
}
template <class T>
int SinglyCLL<T> :: CountNode()
{
    return Count;
}

template<class T>
void SinglyCLL<T>::DeleteFirst()
{
    if(Head == NULL && Tail == NULL)
    {
        return;
    }else if(Head == Tail)
    {
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        Head = Head->next;
        delete Tail->next;

        Tail->next = Head;
    }
}

template<class T>
void SinglyCLL<T>::DeleteLast()
{
    if(Head == NULL && Tail == NULL)
    {
        return;
    }else if(Head == Tail)
    {
        delete Tail;
        Head = NULL;
        Tail = NULL;
    }
    else
    {
        struct node<T> *temp = Head;
        while(temp->next != Tail)
        {
            temp =temp->next;
        }
        delete temp->next;  //delete Tail
        Tail = temp;

        Tail->next = Head; 
    }
}

template <class T>
void SinglyCLL<T>::InsertAtPos(T no, int pos)
{
    int iSize = Count;

    if((pos < 1) || (pos > iSize+1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        InsertFirst(no);
    }
    else if(pos == iSize + 1)
    {
        InsertLast(no);
    }
    else
    {
        struct node<T> *newn = NULL;
    
        newn = new node<T>;
        newn->data = no;
        newn->next = NULL;

        struct node<T> *temp = Head;
        int iCnt = 0;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp = temp->next; 
        }
        newn->next = temp->next;
        temp->next = newn;
    }
}

template <class T>
void SinglyCLL<T>::DeleteAtPos(int pos)
{
    int iSize = Count;

    if((pos < 1) || (pos > iSize))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(pos == 1)
    {
        DeleteFirst();
    }
    else if(pos == iSize)
    {
        DeleteLast();
    }
    else
    {
        struct node<T> *temp1 = Head;
        int iCnt = 0;

        for(iCnt = 1; iCnt < pos-1; iCnt++)
        {
            temp1 = temp1->next; 
        }
        struct node<T> *temp2 = temp1->next;

        temp1->next = temp2->next;
        delete temp2;       
    }
}


int main()
{
    SinglyCLL <int>obj1;
    SinglyCLL <float>obj2;

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

    return 0;
}