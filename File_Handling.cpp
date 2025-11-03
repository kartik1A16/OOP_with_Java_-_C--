/*
Write a program to maintain a student record file named student.txt.
Store details such as rollNo, name, and marks.
Read and display all records from file.
Append new data to the existing file.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int n;
    int r;
    int m;
    char arr[100];

    cout<<endl;
    cout<<"-------Student Record-------"<<endl;

    cout<<"-----Writing Operation-----"<<endl;  //Writing Operation

    cout<<"Enter the Name of Student"<<endl;
    cin.getline(arr,100);

    cout<<endl;
    cout<<"Enter the RollNo"<<endl;
    cin>>r;

    cout<<endl;
    cout<<"Enter the Marks"<<endl;
    cin>>m;

    ofstream myfile("Student.txt");
    if(!myfile)
    {
        cout<<"Error in writing to the file"<<endl;
        return 1;
    }

    else
    {
        myfile<<arr<<endl;
        myfile<<r<<endl;
        myfile<<m<<endl;

        cout<<"Text written successfully"<<endl;
        myfile.close();
    }

    cout<<"-----Reading Operation-----"<<endl;  //Reading Operation

    char xyz[100];
    ifstream obj("Student.txt");

    cout<<"Reading operation is successfully done"<<endl;
    cout<<"Contents are: "<<endl;

    string line;
    
    while(getline(obj,line))
    {
        cout<<line<<endl;
    }

    cout<<"-----Append Operation-----"<<endl;  //Append Operation

    char pqr[100];
    int NewRollNo;
    int NewMarks;

    cin.ignore();
    cout<<"Enter the New Name of the Student"<<endl;
    cin.getline(pqr,100);

    cout<<endl;
    cout<<"Enter the New RollNo of the Student"<<endl;
    cin>>NewRollNo;

    cout<<endl;
    cout<<"Enter the New Marks of the Student"<<endl;
    cin>>NewMarks;

    ofstream outfile("Student.txt",ios::app);

    if(!outfile)
    {
        cout<<"Error in appending the file"<<endl;
        return 1;
    }

    else
    {
        outfile<<pqr<<endl;
        outfile<<NewRollNo<<endl;
        outfile<<NewMarks<<endl;

        cout<<"Appending operation is done"<<endl;
        outfile.close();
    }

    return 0;
}