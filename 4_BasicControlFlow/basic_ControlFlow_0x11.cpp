/* Sum of positive numbers */
#include <iostream>
using namespace std;
int main()
{
    int number,sum = 0;

    do
    {
        cout << "Give me the number ";
        cin >> number;
        sum+=number;
    }while(number >= 0);

    cout << "The sum is "<<sum;

    return 0;
}
