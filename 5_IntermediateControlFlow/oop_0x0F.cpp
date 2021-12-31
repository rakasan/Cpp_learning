/* Student class example for destructor */
#include <iostream>
using namespace std;

class students
{
public:
    int roll_no;
    ~students()
    {
        cout << "Destructor for the roll number "<<roll_no<<endl;
    }
};


int main()
{
    students obj_1;
    obj_1.roll_no = 4;
    int i = 0;

    while(i<5)
    {
        students obj_2;
        obj_2.roll_no = i;
        i++;
    }

    return 0;
}
