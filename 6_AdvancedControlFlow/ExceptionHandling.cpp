/* Working of exception handling */

#include <iostream>
using namspace std;

int main()
{
    int x =-1;

    cout<<"Before try"<<endl;

    try
    {
        cout<<"Inside try"<<endl;
        if(x<0)
        {
            throw x;
            cout<<"After throw"<<endl;
        }
    }

    catch(int x)
    {
        cout<<"Exception caught"<<endl;
    }

    cout<<"After catch"<<endl;
}
