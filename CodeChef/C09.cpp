//Recent contest problems

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	   int x,count1 = 0,count2=0;
	 
	   cin>>x;
	   while(x--){
	   string a;
	   cin>>a;
	    if(a== "START38")
	    count1++;
	    else
	    count2++;
  
	   }
	   cout<<count1<<" "<<count2<<endl;
	   
	}
	return 0;  
}

