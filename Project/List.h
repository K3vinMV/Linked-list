#ifndef LIST_H
#define LIST_H
#include "Student.h"
#include "Node.h"
#include <iostream>

using namespace std;

class List
{
    public:
        Node *h;

        List();
        List(Node*);

        void insertAtBeginning(class Student);
        void display();
        void insertAtEnd(class Student);
        void Remove(int);
        void removeAll();
        void insertAtPosition(class Student, int);
        void isEmpty();
        Node* Search(int age);
        int Size();
        Node* first();
        Node* last();
        Node* next(int age);
        Node* previous(int age);
        void initialize();

};

#endif // LIST_H
