/*
Design classes for a Student Result System:
-> Base class: Person → name, age
-> Derived class: Student → rollNo, course
-> Further derived class: Exam → marks1, marks2, marks3
Compute total and average marks, and display results.
*/

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string n,int a)
    {
        name=n;
        age=a;
    }
    void displayPerson()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

class Student : public Person
{
public:
    int rollno;
    string course;
    
    Student(int r,string c,int a,string n) : Person(n,a)
    {
        rollno=r;
        course=c;
    }

    void displayStudent()
    {
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Course: "<<course<<endl;
    }
};

class Exam : public Student
{
public:
    int marks1,marks2,marks3; 
    
    Exam(int m1,int m2,int m3,int r,int a,string n,string c) : Student(r,c,a,n)
    {
        marks1=m1;
        marks2=m2;
        marks3=m3;
    }

    void displayExam()
    {
        displayPerson();
        displayStudent();
        cout<<"Marks1: "<<marks1<<endl;
        cout<<"Marks2: "<<marks2<<endl;
        cout<<"Marks3: "<<marks3<<endl;

        int total=marks1+marks2+marks3;
        float average=total/3.0;

        cout<<"Total Marks: "<<total<<endl;
        cout<<"Average Marks: "<<average<<endl;
    }
};

int main()
{
    Exam e1(90,90,98,8,20,"Aryan Suryavanshi","Data Science");
    e1.displayExam();
    return 0;
}