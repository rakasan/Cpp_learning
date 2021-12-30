/* Raising a number m by the power n, with a default of value 2 */

#include <iostream>
using namespace std;

void power(double base, int exp = 2)
{
    double ans = 1;

    for(int i = 1;i<=exp;i++)
    {
        ans = ans * base;
    }

    cout << "The number is "<<ans;
}

int main(void)
{
    int n;
    double m;
    char ch;
    cout << " Insert base value ";
    cin >> m;

    cout << "Do you want to input an exponent value(Y/N) "<<endl;
    cin >> ch;

    if((ch == 'y') || (ch == 'Y'))
    {
        cout << "Enter the exponent value"<<endl;
        cin >> n;

        power(m,n);
    }
    else if((ch == 'n') || (ch == 'N'))
    {
        power(m);
    }
    else
    {
        cout <<"Illegal argument";
    }

    return 0;
}
