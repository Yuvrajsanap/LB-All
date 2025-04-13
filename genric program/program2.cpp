#include<iostream>
using namespace std;

typedef struct node{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

class SinglyLL{
    private:
    PNODE first;
    int Count;

    public:
    SinglyLL();
    void InsertFirst(int no);
    void InsertLast(int no);
    void Display();
    int CountNode();
    void DeleteFirst();
    void DeleteLast();
    void InsertAtPos(int no,int iPos);
    void DeleteAtPos(int iPos);
};

SinglyLL::SinglyLL()
{
    cout<<"Inside constructer\n";
    first=NULL;
    Count=0;
}

void SinglyLL::InsertFirst(int no)
{
    PNODE newn=NULL;

    newn=new NODE;
    newn->data=no;
    newn->next=NULL;

    if(first==NULL)
    {
        first=newn;
    }
    else
    {
        newn->next=first;
        first=newn;

    }
}

void SinglyLL::InsertLast(int no)
{
    PNODE newn=NULL;
    PNODE temp=first;

    newn=new NODE;

    newn->data=no;
    newn->next=NULL;

    if(first==NULL)
    {
        first=newn;
    }
    else
    {
        while(temp->next!=NULL)
        {
           temp=temp->next;
        }
        temp->next=newn;
    }
    Count++;
}

void SinglyLL::Display()
{
    PNODE temp=first;

    cout<<"Element of the linked list are: \n";
    while(temp!=NULL){
        cout<<"|"<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

int SinglyLL::CountNode()
{
    return Count;
}

void SinglyLL::DeleteFirst()
{
    if(first==NULL){
        return;
    }
    else if(first->next==NULL){
        delete first;
        first=NULL;
    }
    else
    {
        PNODE temp=first;

        first=first->next;
        delete temp;
    }
    Count--;
}

void SinglyLL::DeleteLast()
{
    if(first==NULL)
    {
        return;
    }
    else if(first->next=NULL){
        delete first;
        first=NULL;
    }
    else{
        PNODE temp=first;

        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    Count--;
}
void SinglyLL::InsertAtPos(int no,int iPos)
{
    if(iPos<1 || iPos>Count+1){
        return;
    }

    if(iPos==1){
        InsertFirst(no);
    }
    else if(iPos=Count){
        InsertLast(no);
    }
    else{
        PNODE temp=first;
        PNODE newn=NULL;

        newn=new NODE;

        newn->data=no;
        newn->next=NULL;

        for(int i=1;i<iPos-1;i++){
            temp=temp->next;
        }
        newn->next=temp->next;
        temp->next=newn;

        Count++;
    }
}

void SinglyLL::DeleteAtPos(int iPos){

    if(iPos<1 || iPos>Count+1){
        return;
    }
    if(iPos==1){
        DeleteFirst();
    }
    else if(iPos==Count){
        DeleteLast();
    }
    else{
        PNODE temp=first;

        int i=0;
        for(i=1;i<iPos-1;i++){
            temp=temp->next;
        }
        PNODE targatednode=temp->next;
        temp->next=temp->next->next;

    }
}
int main()
{

    return 0;
}