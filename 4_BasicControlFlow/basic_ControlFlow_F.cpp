/* Create a star tree using while loops */
#include    <iostream>

using namespace std;

void pyramid(int n)
{
    int i=0,j=0, k=0;

    while(i<n)
    {
        while(k<=n-i-2) /* Used for spacing */
        {
            cout << " ";
            k++;
        }
        k=0;
        while(j < 2 * i - 1) /* For pattern printing */
        {
            cout << "*";
            j++;
        }
        j=0;
        i++;
        cout<<endl;
    }
}

int main()
{
    int n = 5;
    pyramid(n);

    return 0;
}
