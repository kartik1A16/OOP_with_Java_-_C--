/*
Create a class BankAccount with private data members: accountNumber, name, and balance
Provide public functions to:
-> Initialize account
-> Deposit and withdraw money (validate minimum balance)
-> Display account details
*/

#include <iostream>
#include <string>
#define MIN_BALANCE 500
using namespace std;

class BankAccount
{
private:
      int accountNumber;
      string name;
      int balance;
      

public:
      void InitializeAccount(int acc,string n,int bal)
      {
        accountNumber=acc;
        name=n;
        balance=bal;
      }

      void Deposit()
      {
        int amount;
        cout<<"Enter the amount you want to deposit: ";
        cin>>amount;
        balance+=amount;
        cout<<"Amount deposited successfully!"<<endl;
        cout<<"Current Balance: "<<balance<<endl;
        cout<<endl;
      }

      void withdraw()
      {
        int amount;
        cout<<"How much money you want to withdraw: ";
        cin>>amount;

        if(balance-amount<MIN_BALANCE)
        {
            cout<<"Insufficient Balance. Minimum balance should be "<<MIN_BALANCE<<endl;
        }

        else
        {
            balance-=amount;
            cout<<"Withdraw Successfully!"<<endl;
            cout<<"Current Balance: "<<balance<<endl;
            cout<<endl;
        }
      }

      void display()
      {
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Account Holder Name: "<<name<<endl;
        cout<<"Account Balance: "<<balance<<endl;
      }
};

int main()
{
    BankAccount account;

    account.InitializeAccount(12345,"Kartik Mangliya",4000);
    account.display();
    account.Deposit();
    account.withdraw();
    return 0;
    
}    
