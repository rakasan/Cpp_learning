/* To add members of 2 different classes */
#include <iostream>
using namespace std;

class ClassB; /* Forward declaration */
class ClassA
{
    int numA;
    friend int add(ClassA,ClassB);
public:
    ClassA():numA(12){}

};

class ClassB
{
    int numB;
    friend int add(ClassA,ClassB);
public:
    ClassB():numB(1){}
};

int add(ClassA obj1, ClassB obj2)
{
    return (obj1.numA + obj2.numB);
}

int main()
{
    ClassA obj1;
    ClassB obj2;
    cout<<"Sum of objects :"<<add(obj1,obj2);
    return 0;
}
