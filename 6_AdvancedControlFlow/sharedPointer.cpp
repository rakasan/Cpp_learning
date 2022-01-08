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
    A obj(300);
    shared_ptr<A> my_shared_p_1 = make_shared<A>(obj);
    cout<<"Current reference count of myPtr1 = "<<my_shared_p_1.use_count()<<endl;

    shared_ptr<A> my_shared_p_2 = my_shared_p_1;

    cout<<"Current reference count of share p1: "<<my_shared_p_1.use_count()<<endl;
    cout<<"Current reference count of share p2: "<<my_shared_p_2.use_count()<<endl;

    cout<<"After dereferencing p1: "<<my_shared_p_1->a<<endl;
    cout<<"After dereferencing p2: "<<my_shared_p_2->a<<endl;

    cout<<"Free the memory"<<endl;

    my_shared_p_1.reset();
    cout<<"Freed the p1 "<<endl;
    cout<<"Current ref of p1 "<<my_shared_p_1.use_count()<<endl;
    my_shared_p_2.reset();
    cout<<"Freed the p2 "<<endl;
    cout<<"Current ref of p2 "<<my_shared_p_2.use_count()<<endl;

    return 0;
}
