#include <fstream>
#include <iostream>

using namespace std;
void open(const * FileName, ios::openmode); /* ios - input/output stream*/

ios::app // 'append mode' all output operation are performed at the end of the file
ios::in // file is open to read
ios::out // file is open to write
ios::binary //file in open in binary mode
ios::ate //set the initial position at the end of the file *if flag is not set initial position is beginning of the file*
ios::trunc // if file is opened for output operations and if it already exists it's previous content is deleted and replaced with the new one.


ofstream outfile;
outfile.open("file.dat", ios::out|ios::trunc);

//opening a file using constructor
ifstream(const char*filename, ios_base::openmode mode= ios_base::in);
ifstream fin(filename,openmode) by default openmode = ios::in
ifstream fin("filename")

//opening a file using open method
ifstream fin;
fin.open(filename, openmode)
fin.open("filename");

filename.close();
