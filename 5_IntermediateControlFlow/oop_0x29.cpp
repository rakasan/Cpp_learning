/* Run time polymorphism */
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout<<"Print base class "<<endl;
    }

    void show()
    {
        cout<<"Show base class"<<endl;
    }
};

class Derived:public Base
{
public:
    void print()
    {
        cout<<"Print derived class "<<endl;
    }

    void show()
    {
        cout<<"Show derived class"<<endl;
    }
};

int main()
{
    Derived obj;
    Base * bptr;
    bptr  = &obj;

    bptr ->print();
    bptr ->show();
}
