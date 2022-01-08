
#include <iostream>
#include <memory>

using namespace std;

class B; /* forward declaration */

class A
{
public:
    int a;
    shared_ptr<B> ptr;
    A(int value = 250)
    {
        a = value;
    }

    ~A()
    {
        cout<<"Destructor of A was called"<<endl;
    }
};

class B
{
public:
    int a;
    /*shared_ptr<A> ptr;*/
    weak_ptr<A> ptr;
    B(int value = 250)
    {
        a = value;
    }
    ~B()
    {
        cout<<"Destructor of B was called"<<endl;
    }
};

int main()
{
    shared_ptr<A> ptr_a = make_shared<A>(500);
    shared_ptr<B> ptr_b = make_shared<B>(500);

    ptr_a->ptr = ptr_b;
    ptr_b->ptr = ptr_a;
}
