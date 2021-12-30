/* verify what type of age has a person */
#include <iostream>

using namespace std;

int main()
{
    int age;
    cout <<"Enter your age";
    cin >>age;
    if(age > 100)
    {
        cout <<"You are old";
    }
    else
    {
        if(age > 18)
        {
            cout<<"you are an adult";
        }
        else if(age > 13)
        {
            cout <<"You are a teenager";
        }
        else
        {
            cout<<"You are a child";
        }
    }
}
