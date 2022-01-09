/*new data-type;

double * pvalue = NULL;

pvalue = new double;


double * pvalue = NULL;

if(!(pvalue = new double))
{
    cout<<"error of of memory";
    exit(1);
}
*/

#include <iostream>
using namespace std;

int main()
{
    double * pvalue = NULL;
    pvalue = new double;

    *pvalue = 2999.98;
    cout<<"Value of pval:"<<*pvalue<<endl;
    delete(pvalue);

    return 0;
}
