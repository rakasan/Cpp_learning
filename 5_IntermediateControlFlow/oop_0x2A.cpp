/* Friend functions */
#include <iostream>
using namespace std;

class Box
{
    double width;
public:
    double lenght;
    friend void printWidth(Box box);
    void setWidth(double wid);
};

void Box::setWidth(double wid)
{
    width = wid;
}

void printWidth(Box box)
{
    cout<<"width of box: "<<box.width<<endl;
}

int main()
{
    Box obj;
    obj.setWidth(10);

    printWidth(obj);
    return 0;
}
