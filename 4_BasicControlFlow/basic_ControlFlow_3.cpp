/* Application to verify if a number is positive / negative or 0 */
#include <iostream>
using namespace std;

int main()
{
    int number;

    cout <<"Enter the number ";
    cin >>number;

    if(number > 0)
    {
        cout<<"Positive"<<endl;
    }
    else if(number < 0)
    {
        cout << "Negative"<<endl;
    }
    else
    {
        cout <<"The number is equal to 0"<<endl;
    }
    return 0;
}
