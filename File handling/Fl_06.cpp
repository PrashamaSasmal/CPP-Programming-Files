//file position indicators for put operation(tellp,seekp) and modifiers(beg,cur,end mode)
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("abc.txt",ios::out);
    //append mode is here for appened text to the file
    if(!file.is_open())
    {
        cout<<"File creation failed.";
    }
    else
    {  
        cout<<file.tellp()<<endl;;      //tell us where form we gonna to write to a  file
     
        file.seekp(7);      //writing operation started form 8th position of string
        file<<"I'm here!!";
        
        file.seekp(11,ios::beg);      //writing operation started form 12th position of string and counting position from start
                                       //because here we use beg(beginning) mode samely we can use cur(current) and end mode for modify the file position indicators
                                       
        file<<"not here!!";
        cout<<file.tellp();
        file.close();  
        
    }
    return 0;

}    