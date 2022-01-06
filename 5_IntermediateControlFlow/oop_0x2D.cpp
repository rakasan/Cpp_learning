/* Data abstraction */
#include <iostream>
using namespace std;

class implementAbstraction
{
    int a,b;
public:
    void setValues(int x,int y)
    {
        a = x;
        b = y;
    }

    /* */
    void display()
    {
        cout<<"Values are: "<<a<<" "<<b<<endl;
    }
};

int main()
{
    implementAbstraction obj;
    obj.setValues(2,3);
    obj.display();
    return 0;
}
