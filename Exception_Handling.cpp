/*
Write a program to perform division of two numbers.
Throw and catch exceptions for the following cases:
-> Division by zero
-> Invalid input (non-numeric value)
   Use multiple catch blocks and display proper messages.
*/

#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
   try
   {
      int a,b;

      cout<<endl;
      cout<<"Enter the First Number: ";
      if(!(cin>>a))
      {
         throw invalid_argument("Invalid Input.Please Enter a Number");
      }

      cout<<"Enter the Second Number: ";
      if(!(cin>>b))
      {
         throw invalid_argument("Invalid Input.Please Enter a Number");
      }


      if(!(cin.fail()))
      {
         throw invalid_argument("Invalid Input.Please Enter a Number");
      }

      if(b==0)
      {
         throw(b);
      }

      else
      {
         int c=a/b;
         cout<<"Division Result: "<<c<<endl;
         cout<<endl;
      }
   }
   catch(int b)
   {
      cout<<"Invalid Division"<<endl;
      cout<<"Please enter a non-zero number"<<endl;
   }

   catch(invalid_argument &e)
   {
      cout<<e.what()<<endl;
   }

   return 0;

}