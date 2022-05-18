//Chess Rating

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x==y && x>y){
	    cout<<0<<endl;
	    break;
	    }
	    else{
	    int ans =x,count = 0;
	    while(ans<y){
	       ans= ans+8;
	       count++;
	   }
	    cout<<count<<endl;
	    
	    }  
	    
	}
	return 0;
}
