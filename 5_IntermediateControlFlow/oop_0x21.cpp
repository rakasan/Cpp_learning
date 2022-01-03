#include <iostream>
using namespace std;

class Distance
{
private:
    int feet, inches;
public:
    Distance()
    {
        feet  = 0;
        inches = 0;
    }

    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    display()
    {
        cout<<"feet are: "<<feet<<" inches are: "<<inches;
    }

    Distance operator- ()
    {
        feet = -feet;
        inches = -inches;
        return Distance(feet,inches);
    }

    bool operator <(const Distance& d)
    {
        if(feet < d.feet)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    Distance d1(11,10);
    Distance d2(5,11);

    d1 = -d1;
    if(d1<d2)
    {
        cout<<"D1 is less than D2"<<endl;
    }
    else
    {
        cout<<"D2 is less than D1"<<endl;
    }

}
