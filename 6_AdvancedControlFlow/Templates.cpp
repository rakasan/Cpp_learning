/* Demonstrate how function template work */
#include <iostream>
#include <string>

using namespace std;

template <typename T>
inline T const & maxi(T const & a, T const & b)
{
    return a<b?b:a;
}

int main()
{
    int i = 39;
    int j  = 20;
    cout<<"The max value is "<<maxi(i,j)<<endl;

    double f1 = 13.5;
    double f2 = 20.7;
    cout<<"The max value is: "<<maxi(f1,f2)<<endl;

    string s1 = "Hello";
    string s2 = "World";

    cout<<"The max string is"<<maxi(s1,s2)<<endl;

    return 0;
}
