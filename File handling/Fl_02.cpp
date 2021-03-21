//write to a file
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("abc.txt");
    //by default out and trunc modes is called here with ostream class object
    if(!file.is_open())
    {
        cout<<"File creation failed.";
    }
    else
    {
        file<<"Hello guys!! What's up !!";
        cout<<"File opened successfully.";
        file.close();
    }
    return 0;

}