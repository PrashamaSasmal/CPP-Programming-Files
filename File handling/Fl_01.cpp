//create a file with fstream class
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("abc.txt",ios::in|ios::out|ios::trunc);
    //File modes are used here for read from file,write from file & create a file
    if(!file.is_open())
    {
        cout<<"File is not open.";
    }
    else
    {
        cout<<"File opened successfully.";
        file.close();
    }
    return 0;

}