/* Just a time class example */
#include <iostream>
#include <iomanip> /* Input output manipulator */
using namespace std;

class time2
{
int hours,minutes,seconds;
public:
   time2() /* Default constructor */
   {
       hours = 0;
       minutes = 0;
       seconds = 0;
   }

   time2(int a,int b,int c)
   {
       hours = a;
       minutes = b;
       seconds = c;
   }

   void add(time2 x, time2 y)
   {
       hours = x.hours + y.hours;
       minutes = x.minutes + y.minutes;
       seconds = x.seconds + y.seconds;
   }

   void display()
   {
       cout<<std::setw(2)<<std::setfill('0')<<hours<<":"<<minutes<<":"<<seconds;
   }
};


int main()
{

    int h,m,s;
   cout<<"Enter time in HH/MM/SS "<<endl;
    cin>>h>>m>>s;

    time2 obj1(h,m,s);
     cout<<"Enter time in HH/MM/SS format : "<<endl;
    cin >> h>>m>>s;
    time2 obj2(h,m,s);
    time2 obj3;
    obj3.add(obj1,obj2);
    obj3.display();
    return 0;
}
