//file position indicators for get operation(tellg,seekg)
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream file("abc.txt",ios::in);
    //append mode is here for appened text to the file
    if(!file.is_open())
    {
        cout<<"File creation failed.";
    }
    else
    {  
        cout<<file.tellg()<<endl;;      //tell us where form we gonna to read file
        string line;
        file.seekg(3);      //getting or reading operation started form 3rd position of string
        getline(file,line); 
        cout<<line<<endl;
        file.close();  
        
    }
    return 0;

}    
