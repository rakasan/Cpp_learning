/* Simple app to verify if the inserted number is positive or not */
#include<iostream>
using namespace std;

int main()
{
int number;
cout << "Enter the number ";
cin >>number;

/* Check the sense */
if(number >= 0)
{
    cout <<"The number is positive";
}
else
{

    cout <<"The number is negative";
}

cout <<"Default statement";
return 0;
}
