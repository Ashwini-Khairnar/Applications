//Singly Linear Linked list
/*
    InsertFirst
    InsertLast
    InsertAtPosition
    DeleteFirst
    DeleteLast
    DeleteAtPosition
    Display
    Count
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    //Allocate memory for node
    //Initialize that node

    //check whether LL is empty or not
    //if LL is empty then new node is first node so update its address in first pointer through head
    
    //if LL is not empty then store the address of first node in the next pointer of our new node
    //update the first pointer through head

    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)   //LL is empty
    {
        *head = newn;
    }
    else            //LL contains atleast one node
    {
        newn->next = *head;
        *head = newn;
    }
}

void InsertLast(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)   //LL is empty
    {
        *head = newn;
    }
    else            //LL contains atleast one node
    {
        temp = *head;
        
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void Display(PNODE head)
{
    printf("Elements from linked list are:\n");

    while(head != NULL)
    {
        printf("| %d |->",head->data);
        head= head->next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCnt = 0;
    while(head != NULL)
    {
        iCnt++;
        head= head->next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE head)
{
    //if LL is empty then return
    //If LL contains atleast one node then
    //store the address of second node in the first pointer through the head
    //and delete the first node
    PNODE temp = NULL;

    if(*head == NULL)
    {
        return;
    }
    else
    {
        temp = *head;
        *head = temp->next;
        free(temp);
    }
}

void DeleteLast(PPNODE head)
{
    PNODE temp = NULL;
    if(*head == NULL)//LL is empty
    {
        return;
    }
    else if((*head)->next == NULL)//LL contains one node
    {
        free(*head);
        *head = NULL;
    }
    else    //LL contains more than one node
    {
        temp = *head;
        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

void InsertAtPos(PPNODE head, int no, int pos)
{
    //If position is invalid then return
    //If position is 1 then call InsertFirst
    //If position is N+1 then call InsertLast
    int size = 0, iCnt = 0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    size = Count(*head);

    if((pos < 1) || (pos > (size+1)))
    {
        printf("Position is invalid\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(head,no);
    }
    else if(pos == (size+1))
    {
        InsertLast(head,no);
    }
    else
    {
        newn = NULL;

        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;

        temp = *head;

        for(iCnt = 1; iCnt < pos-1  ; iCnt++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next= newn;
    }
}

void DeleteAtPos(PPNODE head, int pos)
{
    int size = 0, iCnt = 0;
    PNODE temp = NULL;
    PNODE tempdelete = NULL;

    size = Count(*head);

    if((pos < 1) || (pos > size))
    {
        printf("Position is invalid\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(head);
    }
    else if(pos == size)
    {
        DeleteLast(head);
    }
    else
    {
        temp = *head;

        for(iCnt = 1; iCnt < pos-1  ; iCnt++)
        {
            temp = temp->next;
        }
        tempdelete = temp->next;
        temp->next = temp->next->next;
        free(tempdelete);
    }
}


int main()
{
    int iRet = 0;
    PNODE first = NULL;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertAtPos(&first,75,3);

    DeleteAtPos(&first,3);

    Display(first);

    iRet = Count(first);
    printf("Number of nodes are : %d\n",iRet);

    InsertFirst(&first,1);

    Display(first);  //call by value

    iRet = Count(first);        //call by value
    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&first,1000);        //call by address
    InsertLast(&first,2000);

    Display(first);

    iRet = Count(first);
    printf("Number of nodes are : %d\n",iRet);

    InsertFirst(&first,5000);

    Display(first);
    iRet = Count(first);
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&first);
    DeleteFirst(&first);
    
    Display(first);
    iRet = Count(first);
    printf("Number of nodes are : %d\n",iRet);


    DeleteLast(&first);

    Display(first);
    iRet = Count(first);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}