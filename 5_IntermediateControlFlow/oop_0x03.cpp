/* Calculate the area and volume of a room */
#include <iostream>
using namespace std;

class Room
{
    public :
    double length;
    double height;
    double width;

    double calculateArea(void)
    {
        return length * width;
    };

    double calculateVolume(void)
    {
        return calculateArea() * height;
    };
};

int main()
{
    Room room_1;

    room_1.height = 2;
    room_1.length = 4;
    room_1.width = 5;

    cout<< "The area is " << room_1.calculateArea();
    cout<< "The volume is" << room_1.calculateVolume();

    return 0;
}
