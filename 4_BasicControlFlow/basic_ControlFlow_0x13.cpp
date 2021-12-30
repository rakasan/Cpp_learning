/* print Fibonacci series up to n number of times */
#include <iostream>
using namespace std;

int main()
{
    int n,t1 = 0,t2 = 1,nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci series: "<<endl;

    for(int i = 1;i<=n;i++)
    {
        if(i==1)
        {
            cout << "Element nr "<<i<<" is : "<<t1<<endl;
            continue;
        }
        if(i==2)
        {
            cout << "Element nr "<<i<<" is : "<<t2<<endl;
            continue;
        }
        nextTerm = t1+t2;
        cout << "Element nr "<<i<<" is : "<<nextTerm<<endl;

        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
