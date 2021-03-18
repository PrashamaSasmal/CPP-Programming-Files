//WAP to store students record and access it according to requirement
#include<iostream>
#include<string>
using namespace std;
struct
{
    string st_name;
    string st_fname;
    string DOB;
    string course;
    string branch;
    int st_id;
    string st_ad;
    long long int ph_no;

}s[10];
int main()
{    
    int n,flag=0;
    cout<<"\nEnter the number of student to store their record= ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Student "<<i+1<<"\n";
        cout<<"Enter student name: ";
        cin.ignore();
        getline(cin,s[i].st_name);
        cout<<"Enter father name: ";
        getline(cin,s[i].st_fname);
        cout<<"Enter date of birth: ";
        cin>>s[i].DOB;
        cout<<"Enter course(B.Tech/B.Com/B.Sc): ";
        cin>>s[i].course;
        cout<<"Enter student id: ";
        cin>>s[i].st_id;
        cout<<"Enter  address: ";
        cin.ignore();
        getline(cin,s[i].st_ad) ;
        cout<<"Enter phone number: ";
        cin>>s[i].ph_no;
    }   

    for(int i=0;i<n;i++)
    {
        cout<<"\n                     Displaying Data                         \n";
        cout<<"Student "<<i+1<<endl;
        cout<<"Student name:"<<s[i].st_name<<endl;
        cout<<"Father name:"<<s[i].st_fname<<endl;
        cout<<"Date of Birth:"<<s[i].DOB<<endl;
        cout<<"Course(B.Tech/B.Com/B.Sc):"<<s[i].course<<endl;
        cout<<"Student id:"<<s[i].st_id<<endl;
        cout<<"Address:"<<s[i].st_ad<<endl;
        cout<<"Phone number:"<<s[i].ph_no<<endl;
    }  
    string cmp;
    cout<<"Enter the student name you want to search: ";
    cin.ignore();
    getline(cin,cmp);
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        if(cmp==s[i].st_name)
        {
            cout<<"Student name:"<<s[i].st_name<<endl;
            cout<<"Father name:"<<s[i].st_fname<<endl;
            cout<<"Date of Birth:"<<s[i].DOB<<endl;
            cout<<"Course(B.Tech/B.Com/B.Sc):"<<s[i].course<<endl;
            cout<<"Student id:"<<s[i].st_id<<endl;
            cout<<"Address:"<<s[i].st_ad<<endl;
            cout<<"Phone number:"<<s[i].ph_no<<endl;
            flag=1;
        }

    }
    if(flag==0)
    {
        cout<<"Record has not found!!"<<endl;
    }

    return 0;
     
}
