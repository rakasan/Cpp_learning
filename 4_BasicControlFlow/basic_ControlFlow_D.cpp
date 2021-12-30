/* Draw the Floyd's triangle*/
#include <iostream>

using namespace std;

int main()
{
    int rows,coef = 1;

    cout <<"Nr of rows ";
    cin >> rows;

    for(int i = 0;i<rows;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            cout <<coef <<" ";
            coef++;
        }
        cout <<endl;
    }
    return 0;
}
