/* Function overloading */
#include <iostream>
using namespace std;

class students
{
  public:
      void func(int x)
      {
          cout<<"value of x is: "<<x<<endl;
      }

      void func(int x, int y)
      {
          cout<<"Values of x and y are: "<<x<<" "<<y<<endl;
      }
};

int main()
{
    students obj;
    obj.func(1);
    obj.func(3.14);
    obj.func(2,3);
    return 0;
}
