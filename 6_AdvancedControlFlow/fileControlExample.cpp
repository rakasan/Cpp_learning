#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    char data[100];
    ofstream outfile; /* opening a file in write mode */
    outfile.open("file.dat");

    cout<<"Writing into a file: "<<endl;
    cout<<"enter your name "<<endl;
    cin.getline(data,100);

    outfile<<"writing to a file"<<endl;
    cout<<"Enter your age: "<<endl;
    cin>>data;
    cin.ignore();

    outfile<<data<<endl;
    outfile.close();//closes the open file

    ifstream inFile;
    inFile.open("file.dat");
    cout<<"Read from file"<<endl;
    inFile>>data;
    cout<<data<<endl;
    inFile>>data;
    cout<<data<<endl;
    inFile.close();
    return 0;
}
