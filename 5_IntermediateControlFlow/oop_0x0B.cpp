/* Constructor with parameters */

#include <iostream>
using namespace std;

class ParamA
{
    int b,c;
public:
    ParamA(int b1,int c1)
    {
       b = b1;
       c = c1;
    }

    int getX()
    {
        return b;
    }

    int getY()
    {
        return c;
    }
};

int main()
{
    ParamA obj_1(10,15);
    cout << "p1.b "<<obj_1.getX()<<" p1.c "<<obj_1.getY();
    return 0;
}
