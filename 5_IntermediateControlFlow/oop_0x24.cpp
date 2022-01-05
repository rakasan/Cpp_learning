/* Overloading functional call operator */
#include <iostream>
using namespace std;

class Distance
{
    int feet,inches;
public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }

    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }

    Distance operator()(int a, int b, int c)
    {
        Distance D;

        D.feet = a + c+10;
        D.inches = b+c+100;

        return D;
    }

    void display()
    {
        cout<<"F: "<<feet<<"I: "<<inches<<endl;
    }
};

int main()
{
    Distance D1(11,10);
    Distance D2;

    cout<<"First distance: ";
    D1.display();

    D2 = D1(10,10,10);
    cout<<"Second distance: ";
    D2.display();
    return 0;
}
