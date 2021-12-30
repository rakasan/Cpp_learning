/* Enter and display student info */
#include <iostream>
using namespace std;

class Student
{
public:
    char name[30],clas[10];
    int rol,age;

    void enter()
    {
        cout << "Enter student name : "<<endl;
        cin.getline(name,30);
        cout << "Enter student age : "<<endl;
        cin >> age;
        cout << "Enter student roll number : "<<endl;
        cin >> rol;
        cout << "Enter student class : "<<endl;
        cin.getline(clas,10);
    }

    void display()
    {
        cout << "\n Age \t Name \t Roll number \t class";
        cout <<"\n"<< age<<"\t"<< name << "\t"<<rol<< "\t"<<clas;
    }
};


int main()
{
    Student obj_1;
    obj_1.enter();
    obj_1.display();

    return 0;
}
