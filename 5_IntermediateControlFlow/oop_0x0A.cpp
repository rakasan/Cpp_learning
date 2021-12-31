/* Display 2 numbers using constructors */

#include    <iostream>
using namespace std;

class DemoDC
{
    int num1,num2;
public:
    DemoDC()
    {
        num1 = 10;
        num2 = 20;
    }
    void display()
    {
        cout <<"Num 1 is : " << num1<<endl;
        cout <<"Num 2 is : " << num2<<endl;
    }
};

int main()
{
    DemoDC obj_1;

    obj_1.display();
    return 0;
}
