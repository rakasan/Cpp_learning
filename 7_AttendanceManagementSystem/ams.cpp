
#include<iostream>
#include<string>
#include<fstream>
#include<cstring>
#include<cstdlib>

using namespace std;

int admin_view();
int student_view();
int student_logic();
int check_credentials(string username,string password);
int get_all_students_by_rollno();
int delete_all_students();
int delele_student_by_rollno();
int check_list_of_students_registered();
int check_presence_count_by_rollno();
int get_list_of_students_with_their_presence_count();
int register_student();
int admin_logic();
int mark_my_attendance(string username);
int count_my_attendance(string username);
int delay();

int delay()
{
    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<20000;j++)
        {
            for(int k = 0;k<20000;k++)
            {

            }
        }
    }

    cout<<"\n Exiting now .. ";

    for(int i = 0;i<3;i++)
    {
        for(int j = 0;j<20000;j++)
        {
            for(int k = 0;k<20000;k++)
            {

            }
        }
    }

    return 0;
}


int admin_view()
{
    int goBack = 0;
    while(1)
    {
        system("cls");
        cout<<"\n 1 Register a student";
        cout<<"\n 2 Delete all student name registered";
        cout<<"\n 3 Delete student by roll number";
        cout<<"\n 4 Check list of students registered by username";
        cout<<"\n 5 Check presence count of any student by roll no";
        cout<<"\n 6 Get the list of students with their attendance count";
        cout<<"\n 0 Go back <-\n";
        int choice;

        cout<<"\n Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
        case 1:
            {
                register_student();
                break;
            }
        case 2:
            {
                delete_all_students();
                break;
            }
        case 3:
            {
                delele_student_by_rollno();
                break;
            }
        case 4:
            {
                check_list_of_students_registered();
                break;
            }
        case 5:
            {
                check_presence_count_by_rollno();
                break;
            }
        case 6:
            {
                get_list_of_students_with_their_presence_count();
                break;
            }

        }

    }
}
