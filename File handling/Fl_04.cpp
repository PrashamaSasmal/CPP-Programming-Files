//append text to a  file  
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file("abc.txt",ios::in|ios::out|ios::app);
    //append mode is used here for appened text to the file
    if(!file.is_open())
    {
        cout<<"File creation failed.";
    }
    else
    {  
        
        file<<"\nHello!!Here we use append mode to add text to the file.";
        cout<<"Writing to the file is done successfully.";
        file.close();  
        
    }
    return 0;

}
