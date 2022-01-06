#include <iostream>
using namespace std;

class Adder
{
public:
    Adder(int i =0)
    {
        total = i;
    }

    void addNum(int number)
    {
        total +=number;
    }

    void display()
    {
        cout<<"The values is: "<<total;
    }
private:
    int total;
};

int main()
{
    Adder obj;

    obj.addNum(5);
    obj.addNum(5);
    obj.addNum(5);
    obj.addNum(5);
    obj.display();

    return 0;
}
