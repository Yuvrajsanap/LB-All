//Single lenear linked list

#include<iostream>
using namespace std;//33

template<class T>
struct node{
    T data;
    struct node *next;
};

template<class T>
class SingleLL{
    private:
    struct node<T> *first;
    int Count;

    public:
    SingleLL();
    void InsertFirst(T no);
    void InsertLast(T no);
    void Display();
    int CountNode();
    void DeleteFirst();
    void DeleteLast();
    void InsertAtPos(T no,int iPos);
    void DeleteAtPos(int iPos)
};

template<class T>
SingleLL<T>
int main(){


    return 0;
}