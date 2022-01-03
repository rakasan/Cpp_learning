
#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    int code;
    string name;
    person()
    {
        name = 'user';
        code = 0;
    }
    void getData()
    {
        cout<<"Enter your name: "<<endl;
        cin>>name;
    }

    void showData()
    {
        cout<<"Your name is "<<name;
    }
};

class account:virtual public person
{
public:
    int pay;
    account()
    {
        pay = 1000;
    }

    void getData()
    {
        person::getData();
        cout<<"Enter your pay: "<<endl;
        cin>>pay;
    }

    void showData()
    {
        person::showData();
        cout<<"Your pay is: "<<pay;
    }
};

class admin:virtual public person
{
  public:
      int experience;
      admin()
      {
          experience = 1;
      }

      void getData()
      {
          person::getData();
          cout<<"Enter your experience "<<endl;
          cin>>experience;
      }

      void showData()
      {
          person::showData();
          cout<<"Your experience is "<<experience;
      }
};

class master:public account,public admin
{
public:
    void getData()
    {
        cout<<"Enter your name "<<endl;
        cin>>name;
        cout<<"Enter your code "<<endl;
        cin>>code;
        cout<<"Enter your years of experience "<<endl;
        cin>>experience;
    }

    void showData()
    {
        account::showData();
        cout<<experience<<endl;
    }
};


int main()
{
    master obj;
    obj.getData();
    obj.showData();
    int ch, chq;

    cout<<"Choose any one option 1)Create 2)Update 3)Display "<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        {
            master obj;
            obj.getData();
            break;
        }

       case 2:
        {
            cout<<"Which data members do you want to update 1)Name 2)Code 3)Pay 4)experience "<<endl;
            cin>>chq;
            switch(chq)
            {
            case 1:
                {
                    cout<<"enter name "<<endl;
                    cin>>obj.name;
                    break;
                }
            case 2:
                {
                    cout<<"Enter code "<<endl;
                    cin>>obj.code;
                    break;
                }
            case 3:
                {
                    cout<<"Enter pay "<<endl;
                    cin>>obj.pay;
                    break;
                }
            case 4:
                {
                    cout<<"Enter experience "<<endl;
                    cin>>obj.experience;
                    break;
                }
            }
        break; /* for case 2 */
        }

        case 3:
        {
            obj.showData();
            break;
        }
    }



return 0;
}
