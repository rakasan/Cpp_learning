/* Multiple inheritance example */
#include <iostream>
using namespace std;

class vehicle
{
public:
    vehicle()
    {
        cout<<"Vehicle constructor"<<endl;
    }
};

class fourWheeler
{
public:
    fourWheeler()
    {
        cout<<"fourWheeler constructor"<<endl;
    }
};

class car:public vehicle,public fourWheeler
{
    /* Just an empty child class */
};


int main()
{
    car obj;
    return 0;
}
