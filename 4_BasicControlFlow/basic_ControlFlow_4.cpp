/* Check divisibility factor of a number */
#include <iostream>

using namespace std;

int main()
{
int a;
cout <<"Enter a number ";
cin >> a;

if((a%5== 0) && (a % 8 == 0))
{
    cout << "The number is divisible by 5 and 8";
}
else if(a % 8 == 0)
{
    cout << "The number is divisible by 8";
}
else if(a % 5 == 0)
{
    cout <<"The number is divisible by 5";
}
else
{
    cout <<"The number is not divisible by the given numbers";
}
}
