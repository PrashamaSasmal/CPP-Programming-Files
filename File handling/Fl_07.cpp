//create a binary file
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    fstream file("abc.bin",ios::binary |ios::in|ios::out|ios::trunc);
   
    if(!file.is_open())
    {
        cout<<"File creation failed.";
    }
    else
    {  
        file<<"Buy guys!!";
        file.close();  
        
    }
    return 0;

}    