/* Calculate the area of a circle - access types */
#include <iostream>
using namespace std;

#define PI      3.14
class Circle
{
private:
    double radius;
public :
    double calculateArea(double r)
    {
        radius = r;
        return radius * radius * PI;
    };

};

int main()
{
Circle circle_obj_1;

cout << "The area is : "<<circle_obj_1.calculateArea(5.5);
return 0;
}
