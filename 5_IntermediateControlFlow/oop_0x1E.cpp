/* Operator overloading */
#include <iostream>
using namespace std;

class Box
{
public:
    double getVolume(void)
    {
        return length * width * height;
    }

    void setLength(double len)
    {
        length = len;
    }
    void setWidth(double wid)
    {
        width = wid;
    }

    void setHeight(double hei)
    {
        height = hei;
    }

    Box operator+(const Box& b)/* Overloading + operator to add 2 box objects */
    {
        Box box;
        box.length = this->length + b.length;
        box.width = this->width + b.width;
        box.height = this->height + b.height;

        return box;

    }

private:
    double length;
    double width;
    double height;
};

int main()
{
    Box a,b,c;

    double volume = 0.0;
    a.setLength(6.0);
    a.setHeight(7.0);
    a.setWidth(5.0);

    b.setLength(12.0);
    b.setHeight(13.0);
    b.setWidth(10.0);

    volume = a.getVolume();
    cout<<"Volume of a is: "<<volume<<endl;

    volume = b.getVolume();
    cout<<"Volume of b is: "<<volume<<endl;

    c = a + b;
    volume = c.getVolume();
    cout<<"Volume of c is: "<<volume<<endl;

    return 0;
}
