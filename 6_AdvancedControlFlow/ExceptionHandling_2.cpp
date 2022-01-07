#include <iostream>
using namespace std;

int test(int a)
{
    try
    {
        if(a>0)
        {
            throw a;
        }
        else
        {
            throw 'a';
        }
    }

    catch(int a)
    {
        cout<<"The caught integer is : "<<a<<endl;
    }
    catch(char a)
    {
        cout<<"The caught char is: "<<a<<endl;
    }

    return 0;
}

int main()
{
    cout<<"Multiple catches: "<<endl;
    test(10);
    test(-1);
    test('b');
    return 0;
}
