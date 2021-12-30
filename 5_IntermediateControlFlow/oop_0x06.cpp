/* Simple application for bank information */
/* It will contains the name of the deposit, account number, type of account, balance,
The application will be able to handle a maximum of 10 users  */
#include <iostream>
#include <cstdlib>
#include <string> /* Used to store multiple strings */
using namespace std;

#define MAX_NAME_LENGTH  50U
#define MAX_NUMBER_OF_USERS 10U

class Bank
{
    char name[MAX_NAME_LENGTH];
    char acc_type;
    long int acc_no;
    double balance;

public :
    void CreateUser();
    double deposit();
    void widtraw();
    void display();
};

void Bank::CreateUser()
{
    cout << "Enter your name: "<<endl;
    cin.getline(name,50);
    cout <<"Enter account type Savings(s)/Current(c)"<<endl;
    cin >>acc_type;
    acc_no = rand();
    cout<<"Your account number is : "<<acc_no;
    if(acc_type == 's')
    {
        balance = 10;
    }
    else
    {
        balance = 100;
    }
}

void Bank::display()
{
    cout << " "<<name;
    cout << "/n Your balance is : "<<balance;

}

double Bank::deposit()
{
    int temp;
    cout << "Enter the amount you want to deposit :"<<endl;
    cin >> temp;
    balance = balance + temp;
    cout << "Your new balance is : "<<balance;
}

void Bank::widtraw()
{
    int temp;

    cout << "Enter the amount you want to withdraw : "<<endl;
    cin >>temp;
    if(temp <= balance)
    {
        balance = balance - temp;
    }
    else
    {
        cout << "Insufficient founds";
    }

    cout <<"The updated balance is : "<<balance;
}

int main()
{
    int ch;
    Bank Users[MAX_NUMBER_OF_USERS];
    for(int i = 0;i<10;i++)
    {
        Users[i].CreateUser();
        cout <<"\n Enter your choice \n 1.Deposit \n 2.Withdraw \n 3.Display balance";
        cin >> ch;
        switch(ch)
        {
        case 1:
            {
                Users[i].deposit();
                break;
            }
        case 2:
            {
                Users[i].widtraw();
                break;
            }
        case 3:
            {
                Users[i].deposit();
                break;
            }
        default:
            {
                cout <<"Invalid input";
                break;
            }

        }
        cout << endl;
    }
    return 0;
}
