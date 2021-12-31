/* Hierarchical inheritance example */
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

class car:public vehicle
{

};

class bus:public vehicle
{

};


int main()
{

    car obj_1;
    bus obj_2;

    return 0;
}
