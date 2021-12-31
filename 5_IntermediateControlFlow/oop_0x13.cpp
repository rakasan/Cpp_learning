/* Example for multi level inheritance */
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

class fourWheeler:public vehicle
{
public:
    fourWheeler()
    {
        cout<<"Object with fourWheeler constructor"<<endl;
    }
};

class car:public fourWheeler
{
public:
   car()
    {
        cout << "Car has 4 wheels";
    }
    /* Empty class */
};

int main()
{
    car obj;
    return 0;
}
