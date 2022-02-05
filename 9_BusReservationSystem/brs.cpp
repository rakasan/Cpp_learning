#include <iostream>
#include <conio.h>
#include <string.h>
#include <cstdlib>
#include <cstdio>
using namespace std;

static int p = 0;

class a
{
    char busn[5],driver[10],arrival[5],depart[5],from[10],to[10],seat[8][4][10];
public:
    void install();
    void allotment();
    void empty_bus();
    void show();
    void avail();
    void position(int i);
};

a bus[10];

void vline(char ch)
{
    for(int i=8;i>0;i--)
    {
        cout<<ch;
    }
}

void a::install()
{
    cout<<"Enter bus no: ";
    cin>>bus[p].busn;
    cout<<"\n Enter driver's name ";
    cin>>bus[p].driver;
    cout<<"\n Arrival time: ";
    cin>>bus[p].arrival;
    cout<<"\n Departure: ";
    cin>>bus[p].depart;
    cout<<"\n From \t\t\t";
    cin>>bus[p].from;
    cout<<"\n To:\t\t\t";
    cin>>bus[p].to;
    bus[p].empty_bus();
    p++;
}

void a::allotment()
{
    int seat;
    char number[5];
    top:
        cout<<"Bus number: ";
        cin>>number;
        int n;
        for(n=0;n<=p;n++)
        {
            if(strcmp(bus[n].busn,number)==0)
            break;
        }

        while(n<=p)
        {
            cout<<"\n Seat Number: ";
            cin>>seat;
            if(seat>32)
            {
                cout<<"\n there are only 32 seats available in this bus.";
            }
            else
            {
                if(strcmp(bus[n].seat[seat/4][(seat%4)-1],"Empty")==0)
                {
                    cout<<"Enter passenger's name: ";
                    cin>>bus[n].seat[seat/4][(seat%4)-1];
                    break;
                }
                else
                {
                    cout<<"The seat no. is already researved. \n";

                }
            }
          }
        if(n>p)
        {
            cout<<"Enter correct bus number \n";
            goto top;
        }

}

void a::empty_bus()
{
    for(int i = 0;i<8;i++)
    {
        for(int j = 0;j<4;j++)
        {
            strcpy(bus[p].seat[i][j],"Empty");
        }
    }
}

void a::show()
{
    int n;
    char number[5];
    cout<<"Enter bus number";
    cin>>number;
    for(n=0;n<=p;n++)
    {
        if(strcmp(bus[n].busn,number)==0)
            break;
    }

    while(n<=p)
    {
        vline('*');
        cout<<"Bus no: \t"<<bus[n].busn<<"\nDriver: \t"<<bus[n].driver<<"\t\t Arrival time: \t"<<bus[n].arrival<<"\n Departure time: "<<bus[n].depart<<"\n From: \t\t"<<bus[n].from<<"\t\t To: "<<bus[n].to<<"\n";
        vline('*');
        bus[0].position(n);
        int a = 1;
        for(int i = 0;i<8;i++)
        {
            for(int j = 0;j<4;j++)
            {
                a++;
                if(strcmp(bus[n].seat[i][j],"Empty")!= 0)
                {
                    cout<<"\n The seat no "<<(a-1)<<"is reserved for "<<bus[n].seat[i][j]<<".";
                }
            }
        }
        break;
    }
    if(n>p)
    {
        cout<<"Enter correct bus no: ";
    }
}

void a::position(int i)
{
    int s=0;
    p=0;
    for(int j = 0;j<8;j++)
    {
        cout<<"\n ";
        for(int k=0;k<4;k++)
        {
            s++;
            if(strcmp(bus[i].seat[j][k],"Empty")==0)
            {
                cout.width(5);
                cout.fill(' ');
                cout<<s<<".";
                cout.fill(' ');
                cout<<bus[1].seat[j][k];
                p++;
            }
            else
            {
                cout.width(5);
                cout.fill(' ');
                cout<<s<<".";
                cout.width(10);
                cout.fill(' ');
                cout<<bus[i].seat[j][k];

            }
        }
    }
    cout<<"\n\n There are "<<p<<" seats empty in Bus number: "<<bus[i].busn;
}

void a::avail()
{
    for(int n = 0;n<p;n++)
    {
        vline('*');
        cout<<"Bus number: \t"<<bus[n].busn<<"\n Driver: \t"<<bus[n].driver<<"\t\t Arrival time: \t"<<bus[n].arrival<<"\nDeparture time: \t"<<bus[n].depart<<"\nFrom: \t\t"<<bus[n].from<<"\t\tTo: \t\t\t"<<bus[n].to<<"\n";
        vline('*');
        vline('_');
    }
}

int main()
{
    system("cls");
    int w;
    while(1)
    {
        cout<<"\n\n\n\n\n";
        cout<<"\t\t\t1. Install\n\t\t\t"
        <<"2.Reservation\n\t\t\t\t"<<"3.Show\n\t\t\t"<<"4.Bus Available. \n\t\t\t"<<"5.Exit";
        cout<<"\n\t\t\t Enter your choice: ->";
        cin>>w;

        switch(w)
        {
            case 1:
                bus[p].install();
                break;
            case 2:
                bus[p].allotment();
                break;
            case 3:
                bus[p].show();
                break;
            case 4:
                bus[p].avail();
                break;
            case 5:
                exit(0);
        }


    }
    return 0;
}

