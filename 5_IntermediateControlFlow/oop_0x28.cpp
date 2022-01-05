/* Pure virtual functions */

#include <iostream>
using namespace std;

class Base
{
    int x;
public:
    virtual void fun()=0; /* Pure virtual function since 0 is declared */
    int getX()
    {
        return 0;
    }
};

class Derived:public Base
{
    int y;
public:
    void fun()
    {
        cout<<"FUnction Fun is called"<<endl;
    }
};

int main()
{
    Derived d;
    d.fun();
    return 0;
}
