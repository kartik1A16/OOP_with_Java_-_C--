/*
Create a class Student with data members: name, rollNo, and marks.
Define default, parameterized, and copy constructors to initialize objects.
Use a destructor to display a message when an object is destroyed.
Demonstrate constructor overloading and destructor invocation sequence
*/

#include <iostream>
using namespace std;

class Student
{
    string name;
    int rollNo;
    int marks;

public:
    Student()
    {
        name="Unknown";
        rollNo=0;
        marks=0;
        cout<<endl;
        cout<<"Default Constructor Called"<<endl;
    }

    Student(string n,int r,int m)
    {
        name=n;
        rollNo=r;
        marks=m;

        cout<<endl;
        cout<<"Parameterized Constructor Called"<<endl;  
    }

    Student(const Student &s)
    {
        name=s.name;
        rollNo=s.rollNo;
        marks=s.marks;

        cout<<endl;
        cout<<"Copy Constructor Called"<<endl;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Marks: "<<marks<<endl;
    }

    ~Student()
    {
        cout<<endl;
        cout<<"Destructor Called for "<<name<<endl;
        cout<<endl;
    }
};

int main()
{
    Student s1;
    s1.display();

    Student s2("Aryan",8,95);
    s2.display();

    Student s3=s2;
    s3.display();

    return 0;
}
