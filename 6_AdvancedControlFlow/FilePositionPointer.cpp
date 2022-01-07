
/* seekg() tellg() seekp() tellp() */

//ios_base::beg();
//ios_base::cur();
//ios_base::end();

/* Program to demostrate how seekg() works */

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv)
{
    fstream myFile("test.text",ios::in|ios::out|ios::trunc);
    myFile<<"Hello World";
    myFile.seekg(6,ios::beg);
    char A[6];
    myFile.read(A,5);
    A[5] = 0;
    cout<<A<<endl;
    myFile.close();

}
