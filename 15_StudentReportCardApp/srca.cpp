/* Just a student report card app */

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <process.h>
#include <fstream>
#include <iomanip>
#include <time.h>
#include <cstdlib>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

class student
{
    int rollno;
    char name[50];
    int p_marks, c_marks,m_marks,e_marks, cs_marks;
    float per;
    char grade;
    int std;
    void calculate()
    {
        per = (p_marks + c_marks + m_marks+e_marks+cs_marks);

        if(per>=60)
        {
            grade = 'A';
        }
        else if(per >=50)
        {
            grade = 'B';
        }
        else if(per>=33)
        {
            grade = 'C';
        }
        else
        {
            grade = 'D';
        }
    }
public:
    void getdata()
    {
        cout<<"\nEnter the roll number of student ";
        cin>>rollno;
        cout<<"\nEnter the name of the student";
        cin>>name;
        cout<<"\nEnter the marks in physics out of 100";
        cin>>p_marks;
        cout<<"\nEnter the marks in chemistry out of 100";
        cin>>c_marks;
        cout<<"\nEnter the marks in mathematics out of 100";
        cin>>m_marks;
        cout<<"\nEnter the marks in english out of 100";
        cin>>e_marks;
        cout<<"\nEnter the marks in computer science out of 100";
        cin>>cs_marks;
        calculate();

    }

    void showData()
    {
        cout<<"\n Roll number of student: "<<rollno;
        cout<<"\nName of student: "<<name;
        cout<<"\nMarks in physics: "<<p_marks;
        cout<<"\nMarks in chemistry: "<<c_marks;
        cout<<"\nMarks in mathematics: "<<m_marks;
        cout<<"\nMarks in english: "<<e_marks;
        cout<<"\nMarks in computer science: "<<cs_marks;
        cout<<"\nPercent of student is: "<<setprecision(2)<<per;
        cout<<"\nGrade of student is: "<<grade;


    }
    void show_tabular()
    {
        cout<<rollno<<setw(12)<<name<<setw(10)<<p_marks<<setw(3)<<c_marks<<setw(3)<<m_marks<<setw(3)<<e_marks<<setw(3)<<cs_marks<<setw(6)<<setprecision(3)<<per<<" "<<grade<<endl;
    }

    int retRollNo()
    {
        return rollno;
    }

};


fstream fp;
student st;

void write_student()
{
    fp.open("students.dat",ios::out|ios::app);
    st.getdata();
    fp.write((char*)&st,sizeof(student));
    fp.close();
    cout<<"\n\nStudent record has been created";
    _getch();
}

void display_all()
{
    system("cls");
    cout<<"\n\n\n\t\tDisplay all records !!!!\n\n";
    fp.open("student.dat",ios::in);
    while(fp.read((char*)&st,sizeof(student)))
    {
        st.showData();
        cout<<"\n\n========================================\n";
        _getch();
    }

    fp.close();
    _getch();
}

void display_sp(int n)
{

    int flag =0;
    fp.open("students.dat",ios::in);
    while(fp.read((char*)&st,sizeof(student)))
    {
        if(st.retRollNo()==n)
        {
            system("cls");
            st.showData();
            flag =1;
        }
    }
    fp.close();
    if(flag == 0)
    {
        cout<<"\n\nRecord does not exist";
    }
    _getch();
}

void modify_student()
{
    int no, found =0;
    system("cls");
    cout<<"\n\nTo Modify ";
    cout<<"\n\n\t Please enter the roll number ";
    cin>>no;
    fp.open("students.dat",ios::in|ios::out);
    while(fp.read((char*)&st,sizeof(student)) && found == 0)
    {
        if(st.retRollNo()==no)
        {
            st.showData();
            cout<<"\n Please enter the new details of student"<<endl;
            st.getdata();
            int pos =-1*sizeof(st);
            fp.seekp(pos,ios::cur);
            fp.write((char*)&st,sizeof(student));
            cout<<"\n\n\t Record updated";
            found = 1;
        }
    }
    fp.close();
    if(found == 0)
    {
        cout<<"\n\nRecord not found";
    }
    _getch();

}

void delete_student()
{
    int no;
    system("cls");
    cout<<"\n\n\nDelete Record";
    cout<<"\n\nPlease Enter the roll number of student you want to delete";
    cin>>no;
    fp.open("students.dat",ios::in|ios::out);
    fstream fp2;
    fp2.open("Temp.dat",ios::out);
    fp.seekg(0,ios::beg);
    while(fp.read((char*)&st,sizeof(student)))
    {
        if(st.retRollNo()!=no)
        {
            fp2.write((char*)&st,sizeof(student));
        }
    }
    fp2.close();
    fp.close();
    remove("students.dat");
    rename("Temp.dat","students.dat");
    cout<<"\n\n\t Record Deleted!...";
    _getch();

}


void class_result()
{
    system("cls");
    fp.open("students.dat",ios::in);
    if(!fp)
    {
        cout<<"Error, the file can not be open \n\n\n Go to Entry menu to create file";
        cout<<"\n\n\n Program is closing...";
        _getch();
        exit(0);
    }

    cout<<"\n\n\t\tAll students results \n\n";
    cout<<"====================================================\n";
    cout<<"Roll no. Name            P  C  M  E  CS  &age Grade \n";
    cout<<"====================================================\n";

    while(fp.read((char*)&st,sizeof(student)))
    {
        st.show_tabular();
    }
    fp.close();
    _getch();
}

void result()
{
    int ans, rno;
    char ch;
    system("cls");
    cout<<"\n\n Result menu";
    cout<<"\n\n\n1. Class Result\n\n2.Student Report Card\n\n3.back to main menu";
    cout<<"\n\nEnter Choice(1/2)";
    cin>>ans;
    switch(ans)
    {
    case 1:
        class_result();
        break;
    case 2:
        {
                    do
        {
            system("cls");
            char ans;
            cout<<"\n\nEnter Roll number of student: ";
            cin>>rno;
            display_sp(rno);
            cout<<"Do you want to see more results (y/n)?";
            cin>>ans;
        }
        while(ans=='y'||ans=='Y');
        break;
        }
    case 3:
        break;
    default:
        cout<<"\a";


    }
}

void intro()
{
    system("cls");
    gotoxy(35,11);
    cout<<"STUDENT";
    gotoxy(33,11);
    cout<<"REPORT CARD";
    gotoxy(35,17);
    _getch();

}

void entry_menu()
{
    system("cls");
    char ch2;
    cout<<"\n\n\n\tEntry menu";
    cout<<"\n\n\n\t1. Create student record";
    cout<<"\n\n\n\t2. Display all students records";
    cout<<"\n\n\n\t3. Search student record";
    cout<<"\n\n\n\t4. Modify student record";
    cout<<"\n\n\n\t5. Delete student record";
    cout<<"\n\n\n\tPlease enter your choice(1-6)";

    ch2=getche();
    switch(ch2)
    {
    case '1':
        system("cls");
        write_student();
        break;
    case '2':
        display_all();
        break;
    case '3':
        int num;
        system("cls");
        cout<<"\n\n\tPlease enter roll number";
        cin>>num;
        display_sp(num);
        break;
    case '4':
        modify_student();
        break;
    case '5':
        delete_student();
        break;
    case '6':
        break;
    default:
        cout<<"\a";
        entry_menu();

    }
}


int main()
{
    char ch;
    intro();
    do
    {
        system("cls");
        cout<<"\n\n\n\tMain menu";
        cout<<"\n\n\n\t1.result menu";
        cout<<"\n\n\n\t2.Entry/Edit menu";
        cout<<"\n\n\n\t3.Exit";
        cout<<"\n\n\n\tPlease select your option(1-3)";
        ch = getch();
        switch(ch)
        {
        case '1':
            system("cls");
            result();
            break;
        case '2':
            entry_menu();
            break;
        case '3':
            exit(0);
        default:
        cout<<"\a";
        }

    }while(ch!='3');
    return 1;
}
