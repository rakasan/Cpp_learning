/* Create a class called DB used for converting feet into inches */
#include <iostream>
using namespace std;

class DB
{
    double ft,inch;
public:
    double convert();
    void display();
};

double DB::convert(void)
{
    cout << "Enter the value in feet : ";
    cin >> ft;
    inch = ft * 12;
}

void DB::display(void)
{
    cout << "The value in inches is : "<<inch;
}

int main()
{
    DB obj_1;
    obj_1.convert();
    obj_1.display();

    return 0;
}
