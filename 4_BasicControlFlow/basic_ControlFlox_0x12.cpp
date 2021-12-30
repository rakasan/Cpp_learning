/* Calculate the roots of a quadric equation */
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a,b,c,d,x1,x2,rp,ip;

    cout << "Give me the coeficients a,b and c "<<endl;
    cin >>a >> b>>c;

    d = b*b - 4*a*c;

    if(d> 0)
    {
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);

        cout << "Roots are real and different"<<endl;
        cout << "x1 = "<< x1 <<endl;
        cout << "x2 = "<< x2 <<endl;
    }
    else if (d == 0)
    {
        cout << "Roots are real and same" << endl;
        x1 = (-b/(2*a));
        cout << "x1 = x2 = "<< x1<< endl;
    }
    else
    {
        rp = -b/(2*a);
        ip = sqrt(-d/2 * a);

        cout << "Roots are complex are different. "<<endl;
        cout << "x1 = "<<rp << "+ "<<ip<<"i";
    }

    return 0;
}
