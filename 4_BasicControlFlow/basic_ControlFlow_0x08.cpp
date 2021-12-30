/* Create a basic calculator */
#include <iostream>
using namespace std;

int main()
{
    char oper;

    float num1,num2;

    cout <<"Enter the operator(+,-,*,/) ";
    cin >>oper;

    cout << "Enter the numbers ";
    cin >>num1>>num2;


    switch(oper)
    {
    case '+':
        {
            cout <<num1 + num2;

            /* Break case */
            break;
        }
    case '-':
        {
            cout <<num1 - num2;

            /* Break case */
            break;
        }
    case '*':
        {

            cout <<num1 * num2;

            /* Break case */
            break;
        }
    case '/':
        {
            if(num2 == 0)
            {
                cout<<"Division by 0 is illegal";
            }
            else
            {
               cout <<num1 / num2;
            }

            /* Break case */
            break;
        }
    default:
        {
            cout <<"Illegal operation";
        }
    }

    return 0;
}
