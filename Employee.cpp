/*
Create an Employee Payroll System with:
-> Base class 1: Employee → empId, name
-> Base class 2: Department → deptName, location
-> Derived class: Salary → basic, hra, da
Calculate and display the total salary.
*/

#include <iostream>
using namespace std;

class Employee
{
public:
    int empId;
    string name;
    
    Employee(int id,string n)
    {
        empId=id;
        name=n;
    }

    void displayEmployee()
    {
        cout<<"Employee ID: "<<empId<<endl;
        cout<<"Employee Name: "<<name<<endl;
    }
};

class Department 
{
public:
    string deptname;
    string location;
    
    Department(string dname,string loc)
    {
        deptname=dname;
        location=loc;
    }

    void displayDepartment()
    {
        cout<<"Department Name: "<<deptname<<endl;
        cout<<"Location: "<<location<<endl;
    }
};

class Salary :public Employee , public Department
{
public:
    float basic;
    float hra;
    float da;
    
    Salary(int id,string n,string dname,string loc,float b,float h,float d)
    :Employee(id,n),Department(dname,loc)
    {
        basic=b;
        hra=h;
        da=d;
    }

    void displaySalary()
    {
        float totalSalary=basic+hra+da;
        cout<<"Basic Salary: "<<basic<<endl;
        cout<<"HRA: "<<hra<<endl;
        cout<<"DA: "<<da<<endl;
        cout<<"Total Salary: "<<totalSalary<<endl;
    }
};

int main()
{
    Salary emp1(8,"Aryan Suryavanshi","TECHNOLOGY","New York",50000,10000,5000);
    emp1.displayEmployee();
    emp1.displayDepartment();
    emp1.displaySalary();
    return 0;
}