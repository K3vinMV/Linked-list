#include "List.h"
#include "Student.h"

List::List()
{
    //ctor
}

List::List(Node *ptr)
{
    h = ptr;
}

void List::initialize()
{
    h = nullptr;
}

void List::insertAtBeginning(class Student data)
{
    Node *tmp=new Node(data,nullptr);

    if(!h)
    {
        h=tmp;
    }
    else
    {
        tmp->next=h;
        h=tmp;
    }
}

void List::display()
{
    Node *aux=h;
    if(h)
    {
        while (aux)
        {
            cout<<aux->data.name<<endl;
            cout<<aux->data.age<<endl;
            aux=aux->next;
        }
    }else
    {
        cout<<"List is empty"<<endl;
    }
}

void List::insertAtEnd(class Student data)
{
    Node *tmp=new Node(data,nullptr);
    tmp->data = data;

    Node *aux1 = h;
    Node *aux2;

    while(aux1!=nullptr)
    {
        aux2=aux1;
        aux1=aux1->next;
    }
    if(h!=aux1)
    {
        aux2->next=tmp;
        tmp->next=aux1;
    }
}

void List::Remove(int n)
{
    if(h)
    {
        Node *studentDel;
        Node *previous = nullptr;

        studentDel = h;
        while((studentDel!=nullptr)&&(studentDel->data.age != n))
        {
            previous = studentDel;
            studentDel = studentDel->next;

        }
        if(studentDel == nullptr)
        {
            cout<<"List is empty"<<endl;
        }
        else if(previous == nullptr)
        {
            h=h->next;
            delete studentDel;
        }
        else
        {
            previous->next=studentDel->next;
            delete studentDel;
        }
    }
}

void List::removeAll()
{
    while (h!= nullptr)
    {
        Node *aux = h;
        h=aux->next;
        delete aux;
    }
}

void List::insertAtPosition(class Student data, int pos)
{
    Node *tmp=new Node(data,nullptr);
    tmp->data = data;
    int i=1;

    Node *aux1 = h;
    Node *aux2;


    for(int i;i!=pos;i++)
    {
        aux2=aux1;
        aux1=aux1->next;
    }
    if(i=pos)
    {
        aux2->next=tmp;
        tmp->next=aux1;
    }else if(i=1)
    {
        tmp->next=h;
        h=tmp;
    }else if(aux1==nullptr)
    {
        aux2->next=tmp;
        tmp->next=aux1;
    }
}

void List::isEmpty()
{
    if (h==nullptr)
    {
        cout<<"List is empty"<<endl;
    }else
    {
        cout<<"List contains data"<<endl;
    }
}

Node* List::Search(int age)
{
    Node *aux = h;

        while((aux!=nullptr)&&(aux->data.age !=age))
        {
            aux = aux->next;

        }
        return aux;
}

int List::Size()
{
    Node *aux=h;
    int i=0;
    if(h)
    {
        while (aux)
        {
            aux=aux->next;
            i++;
        }
    }
    return i;
}

Node* List::first()
{
    Node *aux=h;

    if(aux)
    {
        return aux;
    }else
    {
        return nullptr;
    }
}

Node* List::last()
{
    Node *aux1 = h;
    Node *aux2;

    while(aux1!=nullptr)
    {
        aux2=aux1;
        aux1=aux1->next;
    }
    if(aux1==nullptr)
    {
        return aux2;
    }else
    {
        return nullptr;
    }
}

Node* List::next(int age)
{
    Node *aux1 = h;
    Node *aux2;

    while(aux2->data.age!=age)
    {
        aux2=aux1;
        aux1=aux1->next;
    }
    if(aux2->data.age==age)
    {
        return aux1;
    }else
    {
        return nullptr;
    }
}

Node* List::previous(int age)
{
    Node *aux1 = h;
    Node *aux2;

    while(aux1->data.age!=age)
    {
        aux2=aux1;
        aux1=aux1->next;
    }
    if(aux1->data.age==age)
    {
        return aux2;
    }else
    {
        return nullptr;
    }
}




