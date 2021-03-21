//reading from a  file  
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream file("abc.txt");
    //by default in mode is called here with ifstream class object
    if(!file.is_open())
    {
        cout<<"File creation failed.";
    }
    else
    {  
        cout<<"Reading text from the file is:\n ";  
        string line;
        while(file.good())  //good method is called here for reading till the end of text file
        {
        getline(file,line);
        cout<<line<<endl;
        }
        file.close();
    }
    return 0;

}