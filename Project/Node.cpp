#include "Node.h"
#include "Student.h"

Node::Node()
{
    Student data;
    next = nullptr;
    //ctor
}

Node::Node(class Student data, Node *next)
{
    this->data = data;
    this->next = next;
}
