#include <iostream>
using namespace std;

class ClassB; /* Forward declaration */

class ClassA
{
    int numA;
    friend class ClassB;
public:
    ClassA():numA(12){}

};

class ClassB
{
    int numB;
public:
    ClassB():numB(1){}
    int add()
    {
        ClassA obj1;
        return obj1.numA + numB;
    }
};

int main()
{
    ClassB obj2;
    cout<<"Sum: "<<obj2.add();
    return 0;
}
