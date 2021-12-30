/* sum of positive numbers */
#include <iostream>

using namespace std;

int main()
{
    int number, sum = 0;

    cout <<"Enter a number ";
    cin >> number;

    while(number >= 0)
    {
        sum+=number;
        cout << "Enter another number ";
        cin >> number;
    }

    cout << "\n The sum is "<<sum <<endl;
    return 0;
}
