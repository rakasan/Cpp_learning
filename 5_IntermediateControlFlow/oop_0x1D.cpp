/* Overloading part 3*/
#include <iostream>
using namespace std;

void display(int var1,double var2)
{
    cout<<"Integer number is: "<<var1<<endl;
    cout<<"Double number is: "<<var2<<endl;
}

void display(double var)
{
    cout<<"Double number is: "<<var<<endl;
}

void display(int var)
{
   cout<<"Integer number is: "<<var<<endl;
}

int main()
{
    int a = 5;
    double b = 5.5;

    display(a);
    display(a,b);
    display(b);

    return 0;
}
