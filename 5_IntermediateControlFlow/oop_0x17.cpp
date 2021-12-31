
#include <iostream>
#include <string>
using namespace std;

class staff
{
public:
    int code;
    string name;

    void getData()
    {
        cout<<"Please enter your code: "<<endl;
        cin >> code;
        cout <<"Please enter your name"<<endl;
        cin >> name;
    }

    void display()
    {
        cout << "Your code and name is: "<<code<<" "<<name<<endl;
    }
};

class teacher:public staff
{
public:
    string subject;
    int publication;
    void getData()
    {
        staff::getData();
        cout<<"Enter your subject name: "<<endl;
        cin>>subject;
        cout<<"please enter your publication number: "<<endl;
        cin>>publication;
    }

    void display()
    {
        staff::display();
        cout<<"Your subject and number of publication is: "<<subject<<" "<<publication<<endl;
    }
};

class typist:public staff
{
public:
    double speed;
    void getData()
    {
        staff::getData();
        cout<<"Enter speed (words per minute): "<<endl;
        cin>>speed;
    }

    void display()
    {
        staff::display();
        cout<<"Your speed is : "<<speed<<endl;
    }
};

class officer:public staff
{
    char grade;
public:
    void getData()
    {
        staff::getData();
        cout<<"Enter your grade: "<<endl;
        cin>>grade;
    }

    void display()
    {
        staff::display();
        cout<<"Your grade is: "<<grade<<endl;
    }
};

class regular:virtual public typist /* */
{
public:
    double salary;
    void getData()
    {
        typist::getData();
        cout<<"Enter salary: "<<endl;
        cin>>salary;
    }

    void display()
    {
        typist::display();
        cout<<"Your salary is: "<<salary<<endl;

    }
};

class casual:virtual public typist
{
public:
    double daily_wages;
    void getData()
    {
        typist::getData();
        cout<<"Enter daily wage: "<<endl;
        cin>>daily_wages;
    }
};

int main()
{
    staff obj1;
    teacher obj2;
    typist obj3;
    officer obj4;
    regular obj5;
    casual obj6;
    int ch;
    char chq;
    cout<<"Select any one option 1)Typest 2) Officer or 3 Teacher: "<<endl;
    cin>>ch;

    switch(ch)
    {
    case 1:
        {
            cout<<"(r)regular or (c)casual: "<<endl;
            cin>>chq;
            if(chq == 'r'|| chq == 'R')
            {
                obj5.getData();
                obj5.display();
            }
            else
            {
                obj6.getData();
                obj6.display();
            }
            break;
        }
    case 2:
        {
            obj4.getData();
            obj4.display();
            break;
        }
    case 3:
        {
            obj2.getData();
            obj2.display();
            break;
        }
    default:
        {
            cout<<"Illegal selection"<<endl;
        }
    }

    return 0;
}
