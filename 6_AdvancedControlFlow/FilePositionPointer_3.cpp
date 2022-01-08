/* tellg() example */
#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main()
{
    string str = "C++";
    istringstream in(str);

    string word;
    in>>word;
    cout<<"After reading the word "<<word<<" tellg() returns"<<in.tellg()<<endl;

return 0;



}
