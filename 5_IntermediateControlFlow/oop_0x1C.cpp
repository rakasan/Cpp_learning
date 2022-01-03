/* Function overloading part 2 */
#include <iostream>
using namespace std;

float absolute(double var)
{
    if(var < 0.0)
    {
        var = -var;
    }
    else
    {
        /* nothing */
    }

    return var;
}

int absolute(int var)
{
    if(var < 0)
    {
        var = -var;
    }
    return var;
}

int main()
{
    cout<<"absolute value of -5 = "<<absolute(-5)<<endl;
    cout<<"absolute value of -5.1 = "<<absolute(-5.1)<<endl;
    return 0;
}
