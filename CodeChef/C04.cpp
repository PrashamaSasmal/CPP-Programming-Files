//Sugarcane Juice Business
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N;
	    cin>>N;
	    int tCost = N*50;
	    int profit =tCost - ((tCost*1/5)+(tCost*1/5)+(tCost*3/10));
	    cout<<profit<<endl;
	}
	return 0;
}
