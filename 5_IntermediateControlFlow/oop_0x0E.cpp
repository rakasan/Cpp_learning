/* Destructor example */
#include <iostream>
using namespace std;

class Hello_World
{
    public:
    Hello_World() /*Constructor */
    {
        cout<<"Constructor is called"<<endl;
    }

    ~Hello_World()
    {
        cout <<"Destructor is called"<<endl;
    }


    void display()
    {
        cout <<"Hello world";
    }
};

int main()
{
    Hello_World obj_1;

    obj_1.display();

    return 0;
}
