/* Demo code for calculating the cost of a phone */
#include <iostream>
using namespace std;

class Phone
{
  public:
      double cost;
      int slots;
};

int main()
{
    Phone obj_1;
    Phone obj_2;

    obj_1.cost = 1000.0;
    obj_1.slots = 1;

    obj_2.cost = 1100.0;
    obj_2.slots = 1;

    cout << "Cost of phone 1 is "<< obj_1.cost<<endl;
    cout << "The cost of the second phone is " << obj_2.cost<<endl;


    cout << "Slot number for the phones are" << obj_1.slots << " "<<obj_2.slots;
    return 0;

}
