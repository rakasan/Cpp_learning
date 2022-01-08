/* Unique pointer example */
#include <iostream>
#include <memory>

using namespace std;

class A
{
public:
    int a;
    A()
    {
        cout<<"This is a default constructor "<<endl;
        a = 10;
    }

    A(int value = 100)
    {
        cout<<"This is a parametrized constructor "<<endl;
        a = value;
    }
};

int main()
{
    A obj(200);
    unique_ptr<A> my_u_ptr_1 = make_unique<A>(obj); /* unique pointer */
    unique_ptr<A> my_u_ptr_2(new A(300));

    cout<<"The value for the p1: "<<my_u_ptr_1->a<<endl;
    cout<<"The value for the second p2: "<<my_u_ptr_2->a<<endl;

    cout<<"Free the memory :)"<<endl;
    my_u_ptr_1.reset();
    my_u_ptr_2.reset();

    return 0;
}
