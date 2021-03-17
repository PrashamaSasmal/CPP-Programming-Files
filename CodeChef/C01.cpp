//CodeChef-01

#include<iostream>
using namespace std;
int main(){
	int N,H,x;
	int status=0;
    cin>>N>>H>>x;
    	int a[N];
	for(int i=0;i<N;i++)
	{
	  cin>>a[i];
	}
		
	for(int i=0;i<N;i++)
	{
		if(x+a[i]==H)
		{
		status=1;
		break;
		}
		else
		status=0;
	}
		if(status==1)
		cout<<"YES"<<endl;
	
		else
	    cout<<"NO"<<endl;
	
	
	return 0;
}

