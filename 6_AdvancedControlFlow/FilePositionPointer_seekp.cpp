/* Program to demonstrate how seekp works */
/* seekp((n-1)*SizeOf(object) */
#include <iostream>
#include <fstream>
using namespace std;

class student
{

    int rno;
    char name[20]="Oare?";
public:
    void getData()
    {
    //    name = "Oare";
        rno = 4;
    }
    void putData()
    {
        cout<<"roll number "<<rno<<endl<<name;
    }
    void DisplayRecordAtPosition(int);
};

void student::DisplayRecordAtPosition(int n)
{
    ofstream ofs;
    ofs.open("he.dat",ios::out|ios::binary);
    cout<<"Size of record: "<<sizeof(*this)<<endl;
    ofs.seekp((n-1)*sizeof(student));
    ofs.write((char*)this,sizeof(student));
    ofs.close();

    ifstream ifs;
    ifs.open("he.dat",ios::in|ios::binary);
    ifs.seekg((n-1)*sizeof(student));
    ifs.read((char*)this,sizeof(student));
    putdata();
    ifs.close();

}

int main()
{
    student obj;
    int pos = 1;
    obj.getData();
    cout<<"record number"<<pos<<" (position in file)"<<pos-1<<endl;
    obj.DisplayRecordAtPosition(pos);
    return 0;
}
