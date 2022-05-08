//The attack of Queen
  #include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N,x,y,a1,a2,a3,a4;
	    cin>>N>>x>>y;
	    a1=min(x-1,y-1);
	    a2=min(N-x,N-y);
	    a3=min(N-x,y-1);
	    a4 =min(x-1,N-y);
	    
	    int count = (x-1)+(y-1)+(N-x)+(N-y)+a1+a2+a3+a4;
    
        cout<<count<<endl;
	}
	return 0;
}
