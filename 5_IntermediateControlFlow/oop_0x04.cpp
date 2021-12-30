/* Calculate the area of a circle - access types */
#include <iostream>
using namespace std;

#define PI      3.14
class Circle
{
public:
    double radius;
    double calculateArea(void)
    {
        return radius * radius * PI;
    };

};

int main()
{
Circle circle_obj_1;

circle_obj_1.radius = 5.5;
cout << "The area is : "<<circle_obj_1.calculateArea();
}
