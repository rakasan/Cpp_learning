/* Verify if a student has passed or failed his exams */
#include <iostream>
using namespace std;
#define PASS_MARK       50U
#define PERFECT_MARK    100U
int main()
{
    int mark;
    cout <<"Add the mark";
    cin >>mark;

    if(mark >= PASS_MARK)
    {
        cout <<"Congrats, you have passed"<<endl;
        if(mark ==PERFECT_MARK)
        {
         cout <<"Perfect"<<endl;

        }
    }
    else
    {
        cout <<"You have failed";
    }
}

