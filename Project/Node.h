#ifndef NODE_H
#define NODE_H
#include "Student.h"

class Node
{
    public:
        Node *next;

        Student data;
        Node();
        Node(class Student, Node*);

};

#endif // NODE_H
