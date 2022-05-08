//Miami GP
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int rule = x*1.07;
	    if(rule>=y)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
