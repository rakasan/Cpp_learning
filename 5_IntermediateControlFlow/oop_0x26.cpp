/* Demonstrate how virtual classes work */

#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout<<"Base function"<<endl;
    }
};

class Derived: public Base
{
public:
    void print()
    {
        cout<<"Derived function"<<endl;
    }
};

int main()
{
    Derived obj;
    Base * base1 = & obj; /* Pointer to Base type points to obj */
    obj.print();
    base1 ->print();
    return 0;
}
