/* Example of copy constructor */
#include <iostream>
using namespace std;

class point
{
    int x,y;
public:
    point(int x1,int y2)
    {
        x = x1;
        y = y2;
    }

    point(const point & p2) /* copy constructor */
    {
        x = p2.x;
        y = p2.y;
    }

    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};

int main()
{
    point p1(10,15); /* Normal constructor is called */
    point p2 = p1; /* copy constructor is called */

    cout << "p1.x "<<p1.getX()<<" p1.y "<<p1.getY()<<endl;

   cout << " p2.x "<<p2.getX()<<" p2.y "<<p2.getY()<<endl;
    return 0;
}
