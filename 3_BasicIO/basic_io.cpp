#include <iostream>
using namespace std;

#define M_TO_CM     (100U)

int main()
{
    float m,cm;
    cout  << "Enter the value in meters ";
    cin >>m;

    cout <<"Value in cm "<<m*M_TO_CM;

    return 0;
}
