/* marco example */

#include <iostream>
#define LIMIT 5
#define AREA(l,b) (l * b)
using namespace std;
int main()
{
    int L1 = 10,L2 = 5, area;

    area = AREA(L1,L2);

    cout<<"Area: "<<area<<endl;
    /*
    for(int i=0;i<LIMIT;i++)
    {
        std::cout<<"test"<<endl;
    }
    */
    return 0;
}


/* ifdef and endif */

