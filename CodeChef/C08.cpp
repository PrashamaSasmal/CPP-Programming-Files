//A or B

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int ans1,ans2;
	    int an1 = 500 - (a*2);
	    int an2 = 1000 - ((a+b)*4);
	    ans1 = an1+an2;
	    int an3 = 1000 - (b*4);
	    int an4 = 500 - ((a+b)*2);
	    ans2 = an3+an4;
	    if(ans1>=ans2)
	    cout<<ans1<<endl;
	    else
	    cout<<ans2<<endl;
	}
	return 0;
}
