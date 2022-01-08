/* Do not run - it will cause the heap to crash */
#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int witdth;
};

void fun()
{
    Rectangle *p = new Rectangle();
    delete(p);
}

int main()
{
    while(1)
    {
        fun();
    }
}
