/* Enter and display student details  */
#include <iostream>
#include <string>
using namespace std;

class students
{
  public :
      string name;
      int rol_no;

      void printName();
      void printRolNo()
      {
          cout << "Rol number is : "<<rol_no<<endl;
      }
};

void students::printName()
{
    cout << "Student name is : "<< name<<endl;
}

int main()
{
    students obj_1;
    obj_1.name = "Test1";
    obj_1.rol_no = 10;
    obj_1.printName();
    obj_1.printRolNo();

    return 0;
}
