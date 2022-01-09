#include <iostream>
using namespace std;

class Box
{
public:
    Box()
    {
        cout<<"constructor called"<<endl;

    }

    ~Box()
    {
        cout<<"Destructor is called"<<endl;
    }
};

int main()
{
    Box * boxArray = new Box[4];
    delete [] boxArray;

    return 0;

}
