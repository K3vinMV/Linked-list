#include <iostream>
#include <cstdlib>
#include "Student.h"
#include "List.h"
#include "Node.h"

using namespace std;

void pause();

int main()
{

    List *lis=new List();
    int opt;
    Student data;

    do
    {
        system("cls");
        cout<<"-------Linked list------"<<endl;
        cout<<"1.-Initialize"<<endl;
        cout<<"2.-Insert at beginning"<<endl;
        cout<<"3.-Insert at end"<<endl;
        cout<<"4.-Insert at position"<<endl;
        cout<<"5.-Remove"<<endl;
        cout<<"6.-Remove everything"<<endl;
        cout<<"7.-Search student"<<endl;
        cout<<"8.-Is empty?"<<endl;
        cout<<"9.-First"<<endl;
        cout<<"10.-Last"<<endl;
        cout<<"11.-Size"<<endl;
        cout<<"12.-Next"<<endl;
        cout<<"13.-Previous"<<endl;
        cout<<"14.-Display list"<<endl;
        cout<<"15.-Exit"<<endl;
        cout<<"\nPlease enter an option: "<<endl;
        cin>>opt;

        switch(opt)
        {
        case 1:
            system("cls");
            cout<<"-------INITIALIZE-------"<<endl;
            lis->initialize();
            pause();
            break;

        case 2:
            system("cls");
            cout<<"-------INSERT AT BEGINNING-------"<<endl;
            cout<<"Insert name: \n"<<endl;
            cin>>data.name;
            cout<<"Insert age: \n"<<endl;
            cin>>data.age;
            lis->insertAtBeginning(Student(data));
            pause();
            break;

        case 3:
            system("cls");
            cout<<"-------INSERT AT END-------"<<endl;
            cout<<"Insert name: \n"<<endl;
            cin>>data.name;
            cout<<"Insert age: \n"<<endl;
            cin>>data.age;
            lis->insertAtEnd(Student(data));
            pause();
            break;

        case 4:
            system("cls");
            int num;
            cout<<"-------INSERT AT POSITION-------"<<endl;
            cout<<"Insert name: \n"<<endl;
            cin>>data.name;
            cout<<"Insert age: \n"<<endl;
            cin>>data.age;
            cout<<"Which position do you want to insert it?(Starting with 0)"<<endl;
            cin>>num;
            lis->insertAtPosition(Student(data),num);
            pause();
            break;

        case 5:
            system("cls");
            int num1;
            cout<<"-------REMOVE-------"<<endl;
            cout<<"Enter the age of the student you want to remove: "<<endl;
            cin>>num1;
            lis->Remove(num1);
            pause();
            break;

        case 6:
            system("cls");
            int rmv;
            cout<<"-------REMOVE ALL-------"<<endl;
            cout<<"Are you sure you want to delete everything? "<<endl;
            cout<<"1.Yes "<<endl;
            cout<<"2.No"<<endl;
            cin>>rmv;
            if(rmv==1)
            {
                cout<<"Ereasing..."<<endl;
                lis->removeAll();
            }else
            {
                cout<<"Returning..."<<endl;
            }
            pause();
            break;

        case 7:
            system("cls");
            cout<<"-------SEARCH STUDENT-------"<<endl;
            Node *stud;
            int age;
            cout<<"Please enter the age of the student you want to search: "<<endl;
            cin>>age;
            stud=(lis->Search(age));
            if(stud == nullptr)
            {
                cout<<"Not founded"<<endl;
            }
            else if(stud->data.age == age)
            {
                cout<<"\nThe student you are looking for is: "<<endl;
                cout<<stud->data.name<<endl;
                cout<<stud->data.age<<endl;
            }
            pause();
            break;

        case 8:
            system("cls");
            cout<<"-------IS EMPTY?-------"<<endl;
            lis->isEmpty();
            pause();
            break;

        case 9:
            system("cls");
            Node *firstStud;
            cout<<"-------FIRTS STUDENT-------"<<endl;
            firstStud=(lis->first());
            cout<<firstStud->data.name<<endl;
            cout<<firstStud->data.age<<endl;
            pause();
            break;

        case 10:
            system("cls");
            Node *lastStud;
            cout<<"-------LAST STUDENT-------"<<endl;
            lastStud=(lis->last());
            cout<<lastStud->data.name<<endl;
            cout<<lastStud->data.age<<endl;
            pause();
            break;

        case 11:
            system("cls");
            int i;
            cout<<"-------SIZE-------"<<endl;
            i=(lis->Size());
            cout<<"The total size of the list is: "<<i<<endl;
            pause();
            break;

        case 12:
            system("cls");
            int age2;
            Node *nextOne;
            cout<<"-------NEXT-------"<<endl;
            cout<<"Please enter the age of the student you want to know who is next to: "<<endl;
            cin>>age2;
            nextOne=(lis->next(age2));
            cout<<nextOne->data.name<<endl;
            cout<<nextOne->data.age<<endl;
            pause();
            break;

        case 13:
            system("cls");
            int age3;
            Node *prevStud;
            cout<<"-------PREVIOUS-------"<<endl;
            cout<<"Please enter the age of the student you want to know who is previous to: "<<endl;
            cin>>age3;
            prevStud=(lis->previous(age3));
            cout<<prevStud->data.name<<endl;
            cout<<prevStud->data.age<<endl;
            pause();
            break;

        case 14:
            system("cls");
            cout<<"-------DISPLAY EVERYTHING-------"<<endl;
            lis->display();
            pause();
            break;

        case 15:
            system("cls");
            cout<<"Quitting..."<<endl;
            break;

        default:
            system("cls");
            cout<<"Not a valid option"<<endl;
            pause();
            break;
        }


    }
    while(opt!=15);

    return 0;
}

void pause()
{
    cout << "Press any key to continue...";
    getwchar();
    getwchar();
}


