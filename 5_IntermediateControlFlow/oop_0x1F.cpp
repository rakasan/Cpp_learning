/* Write a class and overload the ++ operator */

#include <iostream>
using namespace std;

class number
{
    int x;
public:
    number()
    {
        x = 0;
    }

    void display()
    {
        cout<<"The value of x is: "<<x<<endl;
    }

    void operator ++()
    {
        x = ++x;
    }
};


int main()
{
    number obj;
    ++obj;
    ++obj;
    obj.display();

    return 0;
}
